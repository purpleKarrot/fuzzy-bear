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

void write_struct_info(
		const gchar *namespace,
		GIStructInfo *info,
		Xml *file)
{
	const gchar *name;
	const gchar *type_name;
	const gchar *type_init;
	gboolean deprecated;
	gboolean is_gtype_struct;
	gboolean foreign;
	gint i;
	gint size;
	int n_elts;

	name = g_base_info_get_name((GIBaseInfo *) info);
	deprecated = g_base_info_is_deprecated((GIBaseInfo *) info);

	type_name = g_registered_type_info_get_type_name((GIRegisteredTypeInfo*) info);
	type_init = g_registered_type_info_get_type_init((GIRegisteredTypeInfo*) info);

	if (g_base_info_get_type((GIBaseInfo *) info) == GI_INFO_TYPE_BOXED)
	{
		fprintf(file->file, "struct %s //boxed\n{\n", name);
	}
	else
	{
		fprintf(file->file, "struct %s\n{\n", name);
	}

	if (type_name != NULL)
		xml_printf(file, " glib:type-name=\"%s\" glib:get-type=\"%s\"", type_name, type_init);

	if (deprecated)
		xml_printf(file, " deprecated=\"1\"");

	is_gtype_struct = g_struct_info_is_gtype_struct(info);
	if (is_gtype_struct)
		xml_printf(file, " glib:is-gtype-struct=\"1\"");

	write_attributes(file, (GIBaseInfo*) info);

	size = g_struct_info_get_size(info);
	if (file->show_all && size >= 0)
		xml_printf(file, " size=\"%d\"", size);

	foreign = g_struct_info_is_foreign(info);
	if (foreign)
		xml_printf(file, " foreign=\"1\"");

	for (i = 0; i < g_struct_info_get_n_fields(info); i++)
	{
		GIFieldInfo *field = g_struct_info_get_field(info, i);
		write_field_info(namespace, field, NULL, file);
		g_base_info_unref((GIBaseInfo *) field);
	}

	for (i = 0; i < g_struct_info_get_n_methods(info); i++)
	{
		GIFunctionInfo *function = g_struct_info_get_method(info, i);
		write_function_info(namespace, function, file);
		g_base_info_unref((GIBaseInfo *) function);
	}

	fprintf(file->file, "};\n");
}
