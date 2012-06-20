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

void write_field_info(
		const gchar *namespace,
		GIFieldInfo *info,
		GIConstantInfo *branch,
		Xml *file)
{
	const gchar *name;
	GIFieldInfoFlags flags;
	gint size;
	gint offset;
	GITypeInfo *type;
	GIBaseInfo *interface;
	GIArgument value;

	name = g_base_info_get_name((GIBaseInfo *) info);
	flags = g_field_info_get_flags(info);
	size = g_field_info_get_size(info);
	offset = g_field_info_get_offset(info);

	xml_start_element(file, "field");
	xml_printf(file, " name=\"%s\"", name);

	/* Fields are assumed to be read-only
	 * (see also girwriter.py and girparser.c)
	 */
	if (!(flags & GI_FIELD_IS_READABLE))
		xml_printf(file, " readable=\"0\"");
	if (flags & GI_FIELD_IS_WRITABLE)
		xml_printf(file, " writable=\"1\"");

	if (size)
		xml_printf(file, " bits=\"%d\"", size);

	write_attributes(file, (GIBaseInfo*) info);

	type = g_field_info_get_type(info);

	if (branch)
	{
		xml_printf(file, " branch=\"");
		type = g_constant_info_get_type(branch);
		g_constant_info_get_value(branch, &value);
		write_constant_value(namespace, type, &value, file);
		xml_printf(file, "\"");
	}

	if (file->show_all)
	{
		if (offset >= 0)
			xml_printf(file, "offset=\"%d\"", offset);
	}

	interface = g_type_info_get_interface(type);
	if (interface && g_base_info_get_type(interface) == GI_INFO_TYPE_CALLBACK)
		write_callback_info(namespace, (GICallbackInfo *) interface, file);
	else
		write_type_info(namespace, type, file);

	if (interface)
		g_base_info_unref(interface);

	g_base_info_unref((GIBaseInfo *) type);

	xml_end_element(file, "field");
}
