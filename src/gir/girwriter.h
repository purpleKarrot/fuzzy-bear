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

#ifndef __GIRWRITER_H__
#define __GIRWRITER_H__

#include <glib.h>
#include <girepository.h>
#include "girxml.h"

void check_unresolved(
		GIBaseInfo *info);

void write_type_name(
		const gchar *namespace,
		GIBaseInfo *info,
		Xml *file);

void write_type_name_attribute(
		const gchar *namespace,
		GIBaseInfo *info,
		const char *attr_name,
		Xml *file);

void write_ownership_transfer(
		GITransfer transfer,
		Xml *file);

void write_attributes(
		Xml *file,
		GIBaseInfo *info);

void write_return_value_attributes(
		Xml *file,
		GICallableInfo *info);

void write_callable_info(
		const gchar *namespace,
		GICallableInfo *info,
		Xml *file);

void write_callback_info(
		const gchar *namespace,
		GICallbackInfo *info,
		Xml *file);

void write_constant_info(
		const gchar *namespace,
		GIConstantInfo *info,
		Xml *file);

void write_constant_value(
		const gchar *namespace,
		GITypeInfo *type,
		GIArgument *value,
		Xml *file);

void write_enum_info(
		const gchar *namespace,
		GIEnumInfo *info,
		Xml *file);

void write_field_info(
		const gchar *namespace,
		GIFieldInfo *info,
		GIConstantInfo *branch,
		Xml *file);

void write_function_info(
		const gchar *namespace,
		GIFunctionInfo *info,
		Xml *file);

void write_interface_info(
		const gchar *namespace,
		GIInterfaceInfo *info,
		Xml *file);

void write_object_info(
		const gchar *namespace,
		GIObjectInfo *info,
		Xml *file);

void write_property_info(
		const gchar *namespace,
		GIPropertyInfo *info,
		Xml *file);

void write_signal_info(
		const gchar *namespace,
		GISignalInfo *info,
		Xml *file);

void write_struct_info(
		const gchar *namespace,
		GIStructInfo *info,
		Xml *file);

void write_type_info(
		const gchar *namespace,
		GITypeInfo *info,
		Xml *file);

void write_union_info(
		const gchar *namespace,
		GIUnionInfo *info,
		Xml *file);

void write_value_info(
		const gchar *namespace,
		GIValueInfo *info,
		Xml *file);

void write_vfunc_info(
		const gchar *namespace,
		GIVFuncInfo *info,
		Xml *file);

void gir_writer_write(
		const char *filename,
		const char *namespace,
		gboolean needs_prefix,
		gboolean show_all);

#endif  /* __GIRWRITER_H__ */
