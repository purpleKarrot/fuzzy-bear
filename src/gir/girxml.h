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

#include <stdio.h>
#include <glib.h>

typedef struct
{
	FILE *file;
	GSList *stack;
	gboolean show_all;
} Xml;

typedef struct
{
	char *name;
	guint has_children :1;
} XmlElement;

XmlElement* xml_element_new(const char *name);

void xml_element_free(XmlElement *elem);

void xml_printf(Xml *xml, const char *fmt, ...);

void xml_start_element(Xml *xml, const char *element_name);

void xml_end_element(Xml *xml, const char *name);

void xml_end_element_unchecked(Xml *xml);

Xml* xml_open(FILE *file);

void xml_close(Xml *xml);

void xml_free(Xml *xml);
