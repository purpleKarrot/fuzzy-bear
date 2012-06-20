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

void write_callable_info(
		const gchar *namespace,
		GICallableInfo *info,
		Xml *file)
{
	GITypeInfo *type;
	gint i;

	write_attributes(file, (GIBaseInfo*) info);

	type = g_callable_info_get_return_type(info);

	xml_start_element(file, "return-value");

	write_ownership_transfer(g_callable_info_get_caller_owns(info), file);

	if (g_callable_info_may_return_null(info))
		xml_printf(file, " allow-none=\"1\"");

	if (g_callable_info_skip_return(info))
		xml_printf(file, " skip=\"1\"");

	write_return_value_attributes(file, info);

	write_type_info(namespace, type, file);

	xml_end_element(file, "return-value");

	if (g_callable_info_get_n_args(info) <= 0)
		return;

	xml_start_element(file, "parameters");
	for (i = 0; i < g_callable_info_get_n_args(info); i++)
	{
		GIArgInfo *arg = g_callable_info_get_arg(info, i);

		xml_start_element(file, "parameter");
		xml_printf(file, " name=\"%s\"", g_base_info_get_name((GIBaseInfo *) arg));

		write_ownership_transfer(g_arg_info_get_ownership_transfer(arg), file);

		switch (g_arg_info_get_direction(arg))
		{
		case GI_DIRECTION_IN:
			break;
		case GI_DIRECTION_OUT:
			xml_printf(file, " direction=\"out\" caller-allocates=\"%s\"", g_arg_info_is_caller_allocates(arg) ? "1" : "0");
			break;
		case GI_DIRECTION_INOUT:
			xml_printf(file, " direction=\"inout\"");
			break;
		}

		if (g_arg_info_may_be_null(arg))
			xml_printf(file, " allow-none=\"1\"");

		if (g_arg_info_is_return_value(arg))
			xml_printf(file, " retval=\"1\"");

		if (g_arg_info_is_optional(arg))
			xml_printf(file, " optional=\"1\"");

		switch (g_arg_info_get_scope(arg))
		{
		case GI_SCOPE_TYPE_INVALID:
			break;
		case GI_SCOPE_TYPE_CALL:
			xml_printf(file, " scope=\"call\"");
			break;
		case GI_SCOPE_TYPE_ASYNC:
			xml_printf(file, " scope=\"async\"");
			break;
		case GI_SCOPE_TYPE_NOTIFIED:
			xml_printf(file, " scope=\"notified\"");
			break;
		}

		if (g_arg_info_get_closure(arg) >= 0)
			xml_printf(file, " closure=\"%d\"", g_arg_info_get_closure(arg));

		if (g_arg_info_get_destroy(arg) >= 0)
			xml_printf(file, " destroy=\"%d\"", g_arg_info_get_destroy(arg));

		if (g_arg_info_is_skip(arg))
			xml_printf(file, " skip=\"1\"");

		write_attributes(file, (GIBaseInfo*) arg);

		type = g_arg_info_get_type(arg);
		write_type_info(namespace, type, file);

		xml_end_element(file, "parameter");

		g_base_info_unref((GIBaseInfo *) arg);
	}

	xml_end_element(file, "parameters");
	g_base_info_unref((GIBaseInfo *) type);
}
