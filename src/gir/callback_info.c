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

void write_callback_info(
		const gchar *namespace,
		GICallbackInfo *info,
		Xml *file)
{
	const gchar *name;
	gboolean deprecated;

	name = g_base_info_get_name((GIBaseInfo *) info);
	deprecated = g_base_info_is_deprecated((GIBaseInfo *) info);

	xml_start_element(file, "callback");
	xml_printf(file, " name=\"%s\"", name);

	if (deprecated)
		xml_printf(file, " deprecated=\"1\"");

	write_callable_info(namespace, (GICallableInfo*) info, file);
	xml_end_element(file, "callback");
}
