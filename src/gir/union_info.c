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

void write_union_info(
		const gchar *namespace,
		GIUnionInfo *info,
		Xml *file)
{
	const gchar *name;
	const gchar *type_name;
	const gchar *type_init;
	gboolean deprecated;
	gint i;
	gint size;

	name = g_base_info_get_name((GIBaseInfo *) info);
	deprecated = g_base_info_is_deprecated((GIBaseInfo *) info);

	type_name = g_registered_type_info_get_type_name((GIRegisteredTypeInfo*) info);
	type_init = g_registered_type_info_get_type_init((GIRegisteredTypeInfo*) info);

	xml_start_element(file, "union");
	xml_printf(file, " name=\"%s\"", name);

	if (type_name)
		xml_printf(file, " type-name=\"%s\" get-type=\"%s\"", type_name, type_init);

	if (deprecated)
		xml_printf(file, " deprecated=\"1\"");

	size = g_union_info_get_size(info);
	if (file->show_all && size >= 0)
		xml_printf(file, " size=\"%d\"", size);

	write_attributes(file, (GIBaseInfo*) info);

	if (g_union_info_is_discriminated(info))
	{
		gint offset;
		GITypeInfo *type;

		offset = g_union_info_get_discriminator_offset(info);
		type = g_union_info_get_discriminator_type(info);

		xml_start_element(file, "discriminator");
		xml_printf(file, " offset=\"%d\" type=\"", offset);
		write_type_info(namespace, type, file);
		xml_end_element(file, "discriminator");
		g_base_info_unref((GIBaseInfo *) type);
	}

	for (i = 0; i < g_union_info_get_n_fields(info); i++)
	{
		GIFieldInfo *field = g_union_info_get_field(info, i);
		GIConstantInfo *constant = g_union_info_get_discriminator(info, i);
		write_field_info(namespace, field, constant, file);
		g_base_info_unref((GIBaseInfo *) field);
		if (constant)
			g_base_info_unref((GIBaseInfo *) constant);
	}

	for (i = 0; i < g_union_info_get_n_methods(info); i++)
	{
		GIFunctionInfo *function = g_union_info_get_method(info, i);
		write_function_info(namespace, function, file);
		g_base_info_unref((GIBaseInfo *) function);
	}

	xml_end_element(file, "union");
}
