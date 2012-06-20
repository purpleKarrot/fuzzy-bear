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

void write_constant_info(
		const gchar *namespace,
		GIConstantInfo *info,
		Xml *file)
{
	GITypeInfo *type;
	const gchar *name;
	GIArgument value;

	name = g_base_info_get_name((GIBaseInfo *) info);

	xml_start_element(file, "constant");
	xml_printf(file, " name=\"%s\"", name);

	type = g_constant_info_get_type(info);
	xml_printf(file, " value=\"");

	g_constant_info_get_value(info, &value);
	write_constant_value(namespace, type, &value, file);
	xml_printf(file, "\"");

	write_type_info(namespace, type, file);

	write_attributes(file, (GIBaseInfo*) info);

	xml_end_element(file, "constant");

	g_base_info_unref((GIBaseInfo *) type);
}
