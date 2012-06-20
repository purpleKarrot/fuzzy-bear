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

void write_enum_info(
		const gchar *namespace,
		GIEnumInfo *info,
		Xml *file)
{
	const gchar *name;
	const gchar *type_name;
	const gchar *type_init;
	const gchar *error_domain;
	gboolean deprecated;
	gint i;

	name = g_base_info_get_name((GIBaseInfo *) info);
	deprecated = g_base_info_is_deprecated((GIBaseInfo *) info);

	type_name = g_registered_type_info_get_type_name((GIRegisteredTypeInfo*) info);
	type_init = g_registered_type_info_get_type_init((GIRegisteredTypeInfo*) info);
	error_domain = g_enum_info_get_error_domain(info);

	if (g_base_info_get_type((GIBaseInfo *) info) == GI_INFO_TYPE_ENUM)
		xml_start_element(file, "enumeration");
	else
		xml_start_element(file, "bitfield");
	xml_printf(file, " name=\"%s\"", name);

	if (type_init)
		xml_printf(file, " glib:type-name=\"%s\" glib:get-type=\"%s\"", type_name, type_init);
	if (error_domain)
		xml_printf(file, " glib:error-domain=\"%s\"", error_domain);

	if (deprecated)
		xml_printf(file, " deprecated=\"1\"");

	write_attributes(file, (GIBaseInfo*) info);

	for (i = 0; i < g_enum_info_get_n_values(info); i++)
	{
		GIValueInfo *value = g_enum_info_get_value(info, i);
		write_value_info(namespace, value, file);
		g_base_info_unref((GIBaseInfo *) value);
	}

	xml_end_element_unchecked(file);
}
