<?xml version="1.0"?>
<repository version="1.0"
            xmlns="http://www.gtk.org/introspection/core/1.0"
            xmlns:c="http://www.gtk.org/introspection/c/1.0"
            xmlns:glib="http://www.gtk.org/introspection/glib/1.0">
  <include name="GLib" version="2.0"/>
namespace GModule
{
struct Module
{
  <method name="close" c:identifier="g_module_close">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="make_resident" c:identifier="g_module_make_resident">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="name" c:identifier="g_module_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="symbol" c:identifier="g_module_symbol">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="symbol_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="symbol" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <function name="build_path" c:identifier="g_module_build_path">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="directory" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="module_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="error" c:identifier="g_module_error">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="supported" c:identifier="g_module_supported">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </function>
};
  <callback name="ModuleCheckInit">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="module" transfer-ownership="none">
        <type name="Module"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="ModuleFlags">
    <member name="lazy" value="1">
      <attribute name="c:identifier" value="G_MODULE_BIND_LAZY"/>
    </member>
    <member name="local" value="2">
      <attribute name="c:identifier" value="G_MODULE_BIND_LOCAL"/>
    </member>
    <member name="mask" value="3">
      <attribute name="c:identifier" value="G_MODULE_BIND_MASK"/>
    </member>
  </bitfield>
  <callback name="ModuleUnload">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="module" transfer-ownership="none">
        <type name="Module"/>
      </parameter>
    </parameters>
  </callback>
  <function name="module_build_path" c:identifier="g_module_build_path">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="directory" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="module_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="module_error" c:identifier="g_module_error">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="module_supported" c:identifier="g_module_supported">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </function>
} // namespace GModule
</repository>
