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

void write_property_info(
		const gchar *namespace,
		GIPropertyInfo *info,
		Xml *file)
{
	GParamFlags flags;
	const gchar *name;
	gboolean deprecated;
	GITypeInfo *type;

	name = g_base_info_get_name((GIBaseInfo *) info);
	flags = g_property_info_get_flags(info);
	deprecated = g_base_info_is_deprecated((GIBaseInfo *) info);

	xml_start_element(file, "property");
	xml_printf(file, " name=\"%s\"", name);

	if (deprecated)
		xml_printf(file, " deprecated=\"1\"");

	/* Properties are assumed to be read-only (see also girwriter.py) */
	if (!(flags & G_PARAM_READABLE))
		xml_printf(file, " readable=\"0\"");
	if (flags & G_PARAM_WRITABLE)
		xml_printf(file, " writable=\"1\"");

	if (flags & G_PARAM_CONSTRUCT)
		xml_printf(file, " construct=\"1\"");

	if (flags & G_PARAM_CONSTRUCT_ONLY)
		xml_printf(file, " construct-only=\"1\"");

	write_ownership_transfer(g_property_info_get_ownership_transfer(info), file);

	write_attributes(file, (GIBaseInfo*) info);

	type = g_property_info_get_type(info);

	write_type_info(namespace, type, file);

	xml_end_element(file, "property");
}
