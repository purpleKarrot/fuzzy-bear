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

void write_object_info(
		const gchar *namespace,
		GIObjectInfo *info,
		Xml *file)
{
	const gchar *name;
	const gchar *type_name;
	const gchar *type_init;
	const gchar *func;
	gboolean deprecated;
	gboolean is_abstract;
	gboolean is_fundamental;
	GIObjectInfo *pnode;
	GIStructInfo *class_struct;
	gint i;

	name = g_base_info_get_name((GIBaseInfo *) info);
	deprecated = g_base_info_is_deprecated((GIBaseInfo *) info);
	is_abstract = g_object_info_get_abstract(info);
	is_fundamental = g_object_info_get_fundamental(info);

	type_name = g_registered_type_info_get_type_name((GIRegisteredTypeInfo*) info);
	type_init = g_registered_type_info_get_type_init((GIRegisteredTypeInfo*) info);
	xml_start_element(file, "class");
	xml_printf(file, " name=\"%s\"", name);

	pnode = g_object_info_get_parent(info);
	if (pnode)
	{
		write_type_name_attribute(namespace, (GIBaseInfo *) pnode, "parent", file);
		g_base_info_unref((GIBaseInfo *) pnode);
	}

	class_struct = g_object_info_get_class_struct(info);
	if (class_struct)
	{
		write_type_name_attribute(namespace, (GIBaseInfo*) class_struct, "glib:type-struct", file);
		g_base_info_unref((GIBaseInfo*) class_struct);
	}

	if (is_abstract)
		xml_printf(file, " abstract=\"1\"");

	xml_printf(file, " glib:type-name=\"%s\" glib:get-type=\"%s\"", type_name, type_init);

	if (is_fundamental)
		xml_printf(file, " glib:fundamental=\"1\"");

	func = g_object_info_get_unref_function(info);
	if (func)
		xml_printf(file, " glib:unref-function=\"%s\"", func);

	func = g_object_info_get_ref_function(info);
	if (func)
		xml_printf(file, " glib:ref-function=\"%s\"", func);

	func = g_object_info_get_set_value_function(info);
	if (func)
		xml_printf(file, " glib:set-value-function=\"%s\"", func);

	func = g_object_info_get_get_value_function(info);
	if (func)
		xml_printf(file, " glib:get-value-function=\"%s\"", func);

	if (deprecated)
		xml_printf(file, " deprecated=\"1\"");

	write_attributes(file, (GIBaseInfo*) info);

	if (g_object_info_get_n_interfaces(info) > 0)
	{
		for (i = 0; i < g_object_info_get_n_interfaces(info); i++)
		{
			GIInterfaceInfo *imp = g_object_info_get_interface(info, i);
			xml_start_element(file, "implements");
			write_type_name_attribute(namespace, (GIBaseInfo *) imp, "name", file);
			xml_end_element(file, "implements");
			g_base_info_unref((GIBaseInfo*) imp);
		}
	}

	for (i = 0; i < g_object_info_get_n_fields(info); i++)
	{
		GIFieldInfo *field = g_object_info_get_field(info, i);
		write_field_info(namespace, field, NULL, file);
		g_base_info_unref((GIBaseInfo *) field);
	}

	for (i = 0; i < g_object_info_get_n_methods(info); i++)
	{
		GIFunctionInfo *function = g_object_info_get_method(info, i);
		write_function_info(namespace, function, file);
		g_base_info_unref((GIBaseInfo *) function);
	}

	for (i = 0; i < g_object_info_get_n_properties(info); i++)
	{
		GIPropertyInfo *prop = g_object_info_get_property(info, i);
		write_property_info(namespace, prop, file);
		g_base_info_unref((GIBaseInfo *) prop);
	}

	for (i = 0; i < g_object_info_get_n_signals(info); i++)
	{
		GISignalInfo *signal = g_object_info_get_signal(info, i);
		write_signal_info(namespace, signal, file);
		g_base_info_unref((GIBaseInfo *) signal);
	}

	for (i = 0; i < g_object_info_get_n_vfuncs(info); i++)
	{
		GIVFuncInfo *vfunc = g_object_info_get_vfunc(info, i);
		write_vfunc_info(namespace, vfunc, file);
		g_base_info_unref((GIBaseInfo *) vfunc);
	}

	for (i = 0; i < g_object_info_get_n_constants(info); i++)
	{
		GIConstantInfo *constant = g_object_info_get_constant(info, i);
		write_constant_info(namespace, constant, file);
		g_base_info_unref((GIBaseInfo *) constant);
	}

	xml_end_element(file, "class");
}
