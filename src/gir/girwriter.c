/*
 * GObject introspection: hpp generator
 *
 * Copyright (C) 2005 Matthias Clasen
 * Copyright (C) 2008,2009 Red Hat, Inc.
 * Copyright (C) 2012 Daniel Pfeifer
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include "girwriter.h"

#include <errno.h>
#include <string.h>
#include <stdio.h>

#include <glib.h>
#include <glib-object.h>
#include <glib/gstdio.h>
#include <girepository.h>

void check_unresolved(
		GIBaseInfo *info)
{
	if (g_base_info_get_type(info) != GI_INFO_TYPE_UNRESOLVED)
		return;

	g_critical("Found unresolved type '%s' '%s'\n", g_base_info_get_name(info), g_base_info_get_namespace(info));
}

void write_type_name(
		const gchar *namespace,
		GIBaseInfo *info,
		Xml *file)
{
	if (strcmp(namespace, g_base_info_get_namespace(info)) != 0)
		xml_printf(file, "%s.", g_base_info_get_namespace(info));

	xml_printf(file, "%s", g_base_info_get_name(info));
}

void write_type_name_attribute(
		const gchar *namespace,
		GIBaseInfo *info,
		const char *attr_name,
		Xml *file)
{
	xml_printf(file, " %s=\"", attr_name);
	write_type_name(namespace, info, file);
	xml_printf(file, "\"");
}

void write_ownership_transfer(
		GITransfer transfer,
		Xml *file)
{
	switch (transfer)
	{
	case GI_TRANSFER_NOTHING:
		xml_printf(file, " transfer-ownership=\"none\"");
		break;
	case GI_TRANSFER_CONTAINER:
		xml_printf(file, " transfer-ownership=\"container\"");
		break;
	case GI_TRANSFER_EVERYTHING:
		xml_printf(file, " transfer-ownership=\"full\"");
		break;
	default:
		g_assert_not_reached ();
	}
}

void write_attributes(
		Xml *file,
		GIBaseInfo *info)
{
	GIAttributeIter iter =
	{ 0, };
	char *name, *value;

	while (g_base_info_iterate_attributes(info, &iter, &name, &value))
	{
		xml_start_element(file, "attribute");
		xml_printf(file, " name=\"%s\" value=\"%s\"", name, value);
		xml_end_element(file, "attribute");
	}
}

void write_return_value_attributes(
		Xml *file,
		GICallableInfo *info)
{
	GIAttributeIter iter =
	{ 0, };
	char *name, *value;

	while (g_callable_info_iterate_return_attributes(info, &iter, &name, &value))
	{
		xml_start_element(file, "attribute");
		xml_printf(file, " name=\"%s\" value=\"%s\"", name, value);
		xml_end_element(file, "attribute");
	}
}

/**
 * gir_writer_write:
 * @filename: filename to write to
 * @namespace: GIR namespace to write
 * @needs_prefix: if the filename needs prefixing
 * @show_all: if field size calculations should be included
 *
 * Writes the output of a typelib represented by @namespace
 * into a GIR xml file named @filename.
 */
void gir_writer_write(
		const char *filename,
		const char *namespace,
		gboolean needs_prefix,
		gboolean show_all)
{
	FILE *ofile;
	gint i, j;
	char **dependencies;
	GIRepository *repository;
	Xml *xml;

	repository = g_irepository_get_default();

	if (filename == NULL)
		ofile = stdout;
	else
	{
		gchar *full_filename;

		if (needs_prefix)
			full_filename = g_strdup_printf("%s-%s", namespace, filename);
		else
			full_filename = g_strdup(filename);
		ofile = g_fopen(filename, "w");

		if (ofile == NULL)
		{
			g_fprintf(stderr, "failed to open '%s': %s\n", full_filename, g_strerror(errno));
			g_free(full_filename);

			return;
		}

		g_free(full_filename);
	}

	xml = xml_open(ofile);
	xml->show_all = show_all;
	xml_printf(xml, "<?xml version=\"1.0\"?>\n");
	xml_start_element(xml, "repository");
	xml_printf(xml, " version=\"1.0\"\n"
			"            xmlns=\"http://www.gtk.org/introspection/core/1.0\"\n"
			"            xmlns:c=\"http://www.gtk.org/introspection/c/1.0\"\n"
			"            xmlns:glib=\"http://www.gtk.org/introspection/glib/1.0\"");

	dependencies = g_irepository_get_dependencies(repository, namespace);
	if (dependencies != NULL)
	{
		for (i = 0; dependencies[i]; i++)
		{
			char **parts = g_strsplit(dependencies[i], "-", 2);
			xml_start_element(xml, "include");
			xml_printf(xml, " name=\"%s\" version=\"%s\"", parts[0], parts[1]);
			xml_end_element(xml, "include");
			g_strfreev(parts);
		}
	}

	if (TRUE)
	{
		const gchar *shared_library;
		const gchar *c_prefix;
		const char *ns = namespace;
		const char *version;
		gint n_infos;

		version = g_irepository_get_version(repository, ns);

		fprintf(xml->file, "namespace %s\n{\n", ns);

		n_infos = g_irepository_get_n_infos(repository, ns);
		for (j = 0; j < n_infos; j++)
		{
			GIBaseInfo *info = g_irepository_get_info(repository, ns, j);
			switch (g_base_info_get_type(info))
			{
			case GI_INFO_TYPE_FUNCTION:
				write_function_info(ns, (GIFunctionInfo *) info, xml);
				break;

			case GI_INFO_TYPE_CALLBACK:
				write_callback_info(ns, (GICallbackInfo *) info, xml);
				break;

			case GI_INFO_TYPE_STRUCT:
			case GI_INFO_TYPE_BOXED:
				write_struct_info(ns, (GIStructInfo *) info, xml);
				break;

			case GI_INFO_TYPE_UNION:
				write_union_info(ns, (GIUnionInfo *) info, xml);
				break;

			case GI_INFO_TYPE_ENUM:
			case GI_INFO_TYPE_FLAGS:
				write_enum_info(ns, (GIEnumInfo *) info, xml);
				break;

			case GI_INFO_TYPE_CONSTANT:
				write_constant_info(ns, (GIConstantInfo *) info, xml);
				break;

			case GI_INFO_TYPE_OBJECT:
				write_object_info(ns, (GIObjectInfo *) info, xml);
				break;

			case GI_INFO_TYPE_INTERFACE:
				write_interface_info(ns, (GIInterfaceInfo *) info, xml);
				break;

			default:
				g_error("unknown info type %d\n", g_base_info_get_type(info));
			}

			g_base_info_unref(info);
		}

		fprintf(xml->file, "} // namespace %s\n", ns);
	}

	xml_end_element(xml, "repository");

	xml_free(xml);
}
