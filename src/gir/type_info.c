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

void write_type_info(
		const gchar *namespace,
		GITypeInfo *info,
		Xml *file)
{
	gint tag;
	GITypeInfo *type;
	gboolean is_pointer;

	check_unresolved((GIBaseInfo*) info);

	tag = g_type_info_get_tag(info);
	is_pointer = g_type_info_is_pointer(info);

	if (tag == GI_TYPE_TAG_VOID)
	{
		xml_start_element(file, "type");

		xml_printf(file, " name=\"%s\"", is_pointer ? "any" : "none");

		xml_end_element(file, "type");
	}
	else if (G_TYPE_TAG_IS_BASIC (tag))
	{
		xml_start_element(file, "type");
		xml_printf(file, " name=\"%s\"", g_type_tag_to_string(tag));
		xml_end_element(file, "type");
	}
	else if (tag == GI_TYPE_TAG_ARRAY)
	{
		gint length, size;
		char *name = NULL;

		xml_start_element(file, "array");

		switch (g_type_info_get_array_type(info))
		{
		case GI_ARRAY_TYPE_C:
			break;
		case GI_ARRAY_TYPE_ARRAY:
			name = "GLib.Array";
			break;
		case GI_ARRAY_TYPE_PTR_ARRAY:
			name = "GLib.PtrArray";
			break;
		case GI_ARRAY_TYPE_BYTE_ARRAY:
			name = "GLib.ByteArray";
			break;
		default:
			break;
		}

		if (name)
			xml_printf(file, " name=\"%s\"", name);

		type = g_type_info_get_param_type(info, 0);

		length = g_type_info_get_array_length(info);
		if (length >= 0)
			xml_printf(file, " length=\"%d\"", length);

		size = g_type_info_get_array_fixed_size(info);
		if (size >= 0)
			xml_printf(file, " fixed-size=\"%d\"", size);

		if (g_type_info_is_zero_terminated(info))
			xml_printf(file, " zero-terminated=\"1\"");

		write_type_info(namespace, type, file);

		g_base_info_unref((GIBaseInfo *) type);

		xml_end_element(file, "array");
	}
	else if (tag == GI_TYPE_TAG_INTERFACE)
	{
		GIBaseInfo *iface = g_type_info_get_interface(info);
		xml_start_element(file, "type");
		write_type_name_attribute(namespace, iface, "name", file);
		xml_end_element(file, "type");
		g_base_info_unref(iface);
	}
	else if (tag == GI_TYPE_TAG_GLIST)
	{
		xml_start_element(file, "type");
		xml_printf(file, " name=\"GLib.List\"");
		type = g_type_info_get_param_type(info, 0);
		if (type)
		{
			write_type_info(namespace, type, file);
			g_base_info_unref((GIBaseInfo *) type);
		}
		xml_end_element(file, "type");
	}
	else if (tag == GI_TYPE_TAG_GSLIST)
	{
		xml_start_element(file, "type");
		xml_printf(file, " name=\"GLib.SList\"");
		type = g_type_info_get_param_type(info, 0);
		if (type)
		{
			write_type_info(namespace, type, file);
			g_base_info_unref((GIBaseInfo *) type);
		}
		xml_end_element(file, "type");
	}
	else if (tag == GI_TYPE_TAG_GHASH)
	{
		xml_start_element(file, "type");
		xml_printf(file, " name=\"GLib.HashTable\"");
		type = g_type_info_get_param_type(info, 0);
		if (type)
		{
			write_type_info(namespace, type, file);
			g_base_info_unref((GIBaseInfo *) type);
			type = g_type_info_get_param_type(info, 1);
			write_type_info(namespace, type, file);
			g_base_info_unref((GIBaseInfo *) type);
		}
		xml_end_element(file, "type");
	}
	else if (tag == GI_TYPE_TAG_ERROR)
	{
		xml_start_element(file, "type");
		xml_printf(file, " name=\"GLib.Error\"");
		xml_end_element(file, "type");
	}
	else
	{
		g_printerr("Unhandled type tag %d\n", tag);
		g_assert_not_reached ();
	}
}
