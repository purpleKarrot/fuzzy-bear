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

#include "girxml.h"

XmlElement* xml_element_new(const char *name)
{
	XmlElement *elem;

	elem = g_slice_new (XmlElement);
	elem->name = g_strdup(name);
	elem->has_children = FALSE;
	return elem;
}

void xml_element_free(XmlElement *elem)
{
	g_free(elem->name);
	g_slice_free(XmlElement, elem);
}

void xml_printf(Xml *xml, const char *fmt, ...)
{
	va_list ap;
	char *s;

	va_start(ap, fmt);
	s = g_markup_vprintf_escaped(fmt, ap);
	fputs(s, xml->file);
	g_free(s);
	va_end(ap);
}

void xml_start_element(Xml *xml, const char *element_name)
{
	XmlElement *parent = NULL;

	if (xml->stack)
	{
		parent = xml->stack->data;

		if (!parent->has_children)
			xml_printf(xml, ">\n");

		parent->has_children = TRUE;
	}

	xml_printf(xml, "%*s<%s", g_slist_length(xml->stack) * 2, "", element_name);

	xml->stack = g_slist_prepend(xml->stack, xml_element_new(element_name));
}

void xml_end_element(Xml *xml, const char *name)
{
	XmlElement *elem;

	g_assert(xml->stack != NULL);

	elem = xml->stack->data;
	xml->stack = g_slist_delete_link(xml->stack, xml->stack);

	if (name != NULL)
		g_assert_cmpstr(name, ==, elem->name);

	if (elem->has_children)
		xml_printf(xml, "%*s</%s>\n", g_slist_length(xml->stack) * 2, "", elem->name);
	else
		xml_printf(xml, "/>\n");

	xml_element_free(elem);
}

void xml_end_element_unchecked(Xml *xml)
{
	xml_end_element(xml, NULL);
}

Xml* xml_open(FILE *file)
{
	Xml *xml;

	xml = g_slice_new (Xml);
	xml->file = file;
	xml->stack = NULL;

	return xml;
}

void xml_close(Xml *xml)
{
	g_assert(xml->stack == NULL);
	if (xml->file != NULL)
	{
		fflush(xml->file);
		if (xml->file != stdout)
			fclose(xml->file);
		xml->file = NULL;
	}
}

void xml_free(Xml *xml)
{
	xml_close(xml);
	g_slice_free(Xml, xml);
}
