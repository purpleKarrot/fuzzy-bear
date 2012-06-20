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

void write_constant_value(
		const gchar *namespace,
		GITypeInfo *type,
		GIArgument *value,
		Xml *file)
{
	switch (g_type_info_get_tag(type))
	{
	case GI_TYPE_TAG_BOOLEAN:
		xml_printf(file, "%d", value->v_boolean);
		break;
	case GI_TYPE_TAG_INT8:
		xml_printf(file, "%d", value->v_int8);
		break;
	case GI_TYPE_TAG_UINT8:
		xml_printf(file, "%d", value->v_uint8);
		break;
	case GI_TYPE_TAG_INT16:
		xml_printf (file, "%" G_GINT16_FORMAT, value->v_int16);
		break;
	case GI_TYPE_TAG_UINT16:
		xml_printf (file, "%" G_GUINT16_FORMAT, value->v_uint16);
		break;
	case GI_TYPE_TAG_INT32:
		xml_printf (file, "%" G_GINT32_FORMAT, value->v_int32);
		break;
	case GI_TYPE_TAG_UINT32:
		xml_printf (file, "%" G_GUINT32_FORMAT, value->v_uint32);
		break;
	case GI_TYPE_TAG_INT64:
		xml_printf (file, "%" G_GINT64_FORMAT, value->v_int64);
		break;
	case GI_TYPE_TAG_UINT64:
		xml_printf (file, "%" G_GUINT64_FORMAT, value->v_uint64);
		break;
	case GI_TYPE_TAG_FLOAT:
		xml_printf(file, "%f", value->v_float);
		break;
	case GI_TYPE_TAG_DOUBLE:
		xml_printf(file, "%f", value->v_double);
		break;
	case GI_TYPE_TAG_UTF8:
	case GI_TYPE_TAG_FILENAME:
		xml_printf(file, "%s", value->v_string);
		break;
	default:
		g_assert_not_reached ();
	}
}
