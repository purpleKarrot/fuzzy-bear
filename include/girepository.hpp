<?xml version="1.0"?>
<repository version="1.0"
            xmlns="http://www.gtk.org/introspection/core/1.0"
            xmlns:c="http://www.gtk.org/introspection/c/1.0"
            xmlns:glib="http://www.gtk.org/introspection/glib/1.0">
  <include name="GObject" version="2.0"/>
  <include name="GLib" version="2.0"/>
namespace GIRepository
{
  <enumeration name="ArrayType">
    <member name="c" value="0">
      <attribute name="c:identifier" value="GI_ARRAY_TYPE_C"/>
    </member>
    <member name="array" value="1">
      <attribute name="c:identifier" value="GI_ARRAY_TYPE_ARRAY"/>
    </member>
    <member name="ptr_array" value="2">
      <attribute name="c:identifier" value="GI_ARRAY_TYPE_PTR_ARRAY"/>
    </member>
    <member name="byte_array" value="3">
      <attribute name="c:identifier" value="GI_ARRAY_TYPE_BYTE_ARRAY"/>
    </member>
  </enumeration>
struct AttributeIter
{
  <field name="data">
    <type name="any"/>
  </field>
  <field name="data2">
    <type name="any"/>
  </field>
  <field name="data3">
    <type name="any"/>
  </field>
  <field name="data4">
    <type name="any"/>
  </field>
};
struct BaseInfo
{
 glib:type-name="GIBaseInfo" glib:get-type="g_base_info_gtype_get_type"  <method name="equal" c:identifier="g_base_info_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info2" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_attribute" c:identifier="g_base_info_get_attribute">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_container" c:identifier="g_base_info_get_container">
    <return-value transfer-ownership="none">
      <type name="BaseInfo"/>
    </return-value>
  </method>
  <method name="get_name" c:identifier="g_base_info_get_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_namespace" c:identifier="g_base_info_get_namespace">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_type" c:identifier="g_base_info_get_type">
    <return-value transfer-ownership="none">
      <type name="InfoType"/>
    </return-value>
  </method>
  <method name="get_typelib" c:identifier="g_base_info_get_typelib">
    <return-value transfer-ownership="none">
      <type name="Typelib"/>
    </return-value>
  </method>
  <method name="is_deprecated" c:identifier="g_base_info_is_deprecated">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="iterate_attributes" c:identifier="g_base_info_iterate_attributes">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="iterator" transfer-ownership="none">
        <type name="AttributeIter"/>
      </parameter>
      <parameter name="name" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
};
  <enumeration name="Direction">
    <member name="in" value="0">
      <attribute name="c:identifier" value="GI_DIRECTION_IN"/>
    </member>
    <member name="out" value="1">
      <attribute name="c:identifier" value="GI_DIRECTION_OUT"/>
    </member>
    <member name="inout" value="2">
      <attribute name="c:identifier" value="GI_DIRECTION_INOUT"/>
    </member>
  </enumeration>
  <bitfield name="FieldInfoFlags">
    <member name="readable" value="1">
      <attribute name="c:identifier" value="GI_FIELD_IS_READABLE"/>
    </member>
    <member name="writable" value="2">
      <attribute name="c:identifier" value="GI_FIELD_IS_WRITABLE"/>
    </member>
  </bitfield>
  <bitfield name="FunctionInfoFlags">
    <member name="is_method" value="1">
      <attribute name="c:identifier" value="GI_FUNCTION_IS_METHOD"/>
    </member>
    <member name="is_constructor" value="2">
      <attribute name="c:identifier" value="GI_FUNCTION_IS_CONSTRUCTOR"/>
    </member>
    <member name="is_getter" value="4">
      <attribute name="c:identifier" value="GI_FUNCTION_IS_GETTER"/>
    </member>
    <member name="is_setter" value="8">
      <attribute name="c:identifier" value="GI_FUNCTION_IS_SETTER"/>
    </member>
    <member name="wraps_vfunc" value="16">
      <attribute name="c:identifier" value="GI_FUNCTION_WRAPS_VFUNC"/>
    </member>
    <member name="throws" value="32">
      <attribute name="c:identifier" value="GI_FUNCTION_THROWS"/>
    </member>
  </bitfield>
  <enumeration name="InfoType">
    <member name="invalid" value="0">
      <attribute name="c:identifier" value="GI_INFO_TYPE_INVALID"/>
    </member>
    <member name="function" value="1">
      <attribute name="c:identifier" value="GI_INFO_TYPE_FUNCTION"/>
    </member>
    <member name="callback" value="2">
      <attribute name="c:identifier" value="GI_INFO_TYPE_CALLBACK"/>
    </member>
    <member name="struct" value="3">
      <attribute name="c:identifier" value="GI_INFO_TYPE_STRUCT"/>
    </member>
    <member name="boxed" value="4">
      <attribute name="c:identifier" value="GI_INFO_TYPE_BOXED"/>
    </member>
    <member name="enum" value="5">
      <attribute name="c:identifier" value="GI_INFO_TYPE_ENUM"/>
    </member>
    <member name="flags" value="6">
      <attribute name="c:identifier" value="GI_INFO_TYPE_FLAGS"/>
    </member>
    <member name="object" value="7">
      <attribute name="c:identifier" value="GI_INFO_TYPE_OBJECT"/>
    </member>
    <member name="interface" value="8">
      <attribute name="c:identifier" value="GI_INFO_TYPE_INTERFACE"/>
    </member>
    <member name="constant" value="9">
      <attribute name="c:identifier" value="GI_INFO_TYPE_CONSTANT"/>
    </member>
    <member name="invalid_0" value="10">
      <attribute name="c:identifier" value="GI_INFO_TYPE_INVALID_0"/>
    </member>
    <member name="union" value="11">
      <attribute name="c:identifier" value="GI_INFO_TYPE_UNION"/>
    </member>
    <member name="value" value="12">
      <attribute name="c:identifier" value="GI_INFO_TYPE_VALUE"/>
    </member>
    <member name="signal" value="13">
      <attribute name="c:identifier" value="GI_INFO_TYPE_SIGNAL"/>
    </member>
    <member name="vfunc" value="14">
      <attribute name="c:identifier" value="GI_INFO_TYPE_VFUNC"/>
    </member>
    <member name="property" value="15">
      <attribute name="c:identifier" value="GI_INFO_TYPE_PROPERTY"/>
    </member>
    <member name="field" value="16">
      <attribute name="c:identifier" value="GI_INFO_TYPE_FIELD"/>
    </member>
    <member name="arg" value="17">
      <attribute name="c:identifier" value="GI_INFO_TYPE_ARG"/>
    </member>
    <member name="type" value="18">
      <attribute name="c:identifier" value="GI_INFO_TYPE_TYPE"/>
    </member>
    <member name="unresolved" value="19">
      <attribute name="c:identifier" value="GI_INFO_TYPE_UNRESOLVED"/>
    </member>
  </enumeration>
  <class name="Repository" parent="GObject.Object" glib:type-struct="RepositoryClass" glib:type-name="GIRepository" glib:get-type="g_irepository_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="priv">
      <type name="RepositoryPrivate"/>
    </field>
    <function name="dump" c:identifier="g_irepository_dump" throws="1">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="arg" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </function>
    <function name="error_quark" c:identifier="g_irepository_error_quark">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
    </function>
    <function name="get_default" c:identifier="g_irepository_get_default">
      <return-value transfer-ownership="none">
        <type name="Repository"/>
      </return-value>
    </function>
    <function name="get_search_path" c:identifier="g_irepository_get_search_path">
      <return-value transfer-ownership="none">
        <type name="GLib.SList">
          <type name="filename"/>
        </type>
      </return-value>
    </function>
    <function name="prepend_search_path" c:identifier="g_irepository_prepend_search_path">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="directory" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </function>
    <method name="enumerate_versions" c:identifier="g_irepository_enumerate_versions">
      <return-value transfer-ownership="full">
        <type name="GLib.List">
          <type name="utf8"/>
        </type>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="find_by_error_domain" c:identifier="g_irepository_find_by_error_domain">
      <return-value transfer-ownership="full">
        <type name="BaseInfo"/>
      </return-value>
      <parameters>
        <parameter name="domain" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="find_by_gtype" c:identifier="g_irepository_find_by_gtype">
      <return-value transfer-ownership="full">
        <type name="BaseInfo"/>
      </return-value>
      <parameters>
        <parameter name="gtype" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="find_by_name" c:identifier="g_irepository_find_by_name">
      <return-value transfer-ownership="full">
        <type name="BaseInfo"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_c_prefix" c:identifier="g_irepository_get_c_prefix">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_dependencies" c:identifier="g_irepository_get_dependencies">
      <return-value transfer-ownership="full">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_info" c:identifier="g_irepository_get_info">
      <return-value transfer-ownership="full">
        <type name="BaseInfo"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="index" transfer-ownership="none">
          <type name="gint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_loaded_namespaces" c:identifier="g_irepository_get_loaded_namespaces">
      <return-value transfer-ownership="full">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </return-value>
    </method>
    <method name="get_n_infos" c:identifier="g_irepository_get_n_infos">
      <return-value transfer-ownership="none">
        <type name="gint32"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_shared_library" c:identifier="g_irepository_get_shared_library">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_typelib_path" c:identifier="g_irepository_get_typelib_path">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_version" c:identifier="g_irepository_get_version">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="is_registered" c:identifier="g_irepository_is_registered">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="version" transfer-ownership="none" allow-none="1">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="load_typelib" c:identifier="g_irepository_load_typelib" throws="1">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="typelib" transfer-ownership="none">
          <type name="Typelib"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="RepositoryLoadFlags"/>
        </parameter>
      </parameters>
    </method>
    <method name="require" c:identifier="g_irepository_require" throws="1">
      <return-value transfer-ownership="none">
        <type name="Typelib"/>
      </return-value>
      <parameters>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="version" transfer-ownership="none" allow-none="1">
          <type name="utf8"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="RepositoryLoadFlags"/>
        </parameter>
      </parameters>
    </method>
    <method name="require_private" c:identifier="g_irepository_require_private" throws="1">
      <return-value transfer-ownership="none">
        <type name="Typelib"/>
      </return-value>
      <parameters>
        <parameter name="typelib_dir" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="namespace_" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="version" transfer-ownership="none" allow-none="1">
          <type name="utf8"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="RepositoryLoadFlags"/>
        </parameter>
      </parameters>
    </method>
  </class>
struct RepositoryClass
{
 glib:is-gtype-struct="1"  <field name="parent">
    <type name="GObject.ObjectClass"/>
  </field>
};
  <enumeration name="RepositoryError">
    <member name="typelib_not_found" value="0">
      <attribute name="c:identifier" value="G_IREPOSITORY_ERROR_TYPELIB_NOT_FOUND"/>
    </member>
    <member name="namespace_mismatch" value="1">
      <attribute name="c:identifier" value="G_IREPOSITORY_ERROR_NAMESPACE_MISMATCH"/>
    </member>
    <member name="namespace_version_conflict" value="2">
      <attribute name="c:identifier" value="G_IREPOSITORY_ERROR_NAMESPACE_VERSION_CONFLICT"/>
    </member>
    <member name="library_not_found" value="3">
      <attribute name="c:identifier" value="G_IREPOSITORY_ERROR_LIBRARY_NOT_FOUND"/>
    </member>
  </enumeration>
  <bitfield name="RepositoryLoadFlags">
    <member name="irepository_load_flag_lazy" value="1">
      <attribute name="c:identifier" value="G_IREPOSITORY_LOAD_FLAG_LAZY"/>
    </member>
  </bitfield>
struct RepositoryPrivate
{
};
  <enumeration name="ScopeType">
    <member name="invalid" value="0">
      <attribute name="c:identifier" value="GI_SCOPE_TYPE_INVALID"/>
    </member>
    <member name="call" value="1">
      <attribute name="c:identifier" value="GI_SCOPE_TYPE_CALL"/>
    </member>
    <member name="async" value="2">
      <attribute name="c:identifier" value="GI_SCOPE_TYPE_ASYNC"/>
    </member>
    <member name="notified" value="3">
      <attribute name="c:identifier" value="GI_SCOPE_TYPE_NOTIFIED"/>
    </member>
  </enumeration>
  <enumeration name="Transfer">
    <member name="nothing" value="0">
      <attribute name="c:identifier" value="GI_TRANSFER_NOTHING"/>
    </member>
    <member name="container" value="1">
      <attribute name="c:identifier" value="GI_TRANSFER_CONTAINER"/>
    </member>
    <member name="everything" value="2">
      <attribute name="c:identifier" value="GI_TRANSFER_EVERYTHING"/>
    </member>
  </enumeration>
  <enumeration name="TypeTag">
    <member name="void" value="0">
      <attribute name="c:identifier" value="GI_TYPE_TAG_VOID"/>
    </member>
    <member name="boolean" value="1">
      <attribute name="c:identifier" value="GI_TYPE_TAG_BOOLEAN"/>
    </member>
    <member name="int8" value="2">
      <attribute name="c:identifier" value="GI_TYPE_TAG_INT8"/>
    </member>
    <member name="uint8" value="3">
      <attribute name="c:identifier" value="GI_TYPE_TAG_UINT8"/>
    </member>
    <member name="int16" value="4">
      <attribute name="c:identifier" value="GI_TYPE_TAG_INT16"/>
    </member>
    <member name="uint16" value="5">
      <attribute name="c:identifier" value="GI_TYPE_TAG_UINT16"/>
    </member>
    <member name="int32" value="6">
      <attribute name="c:identifier" value="GI_TYPE_TAG_INT32"/>
    </member>
    <member name="uint32" value="7">
      <attribute name="c:identifier" value="GI_TYPE_TAG_UINT32"/>
    </member>
    <member name="int64" value="8">
      <attribute name="c:identifier" value="GI_TYPE_TAG_INT64"/>
    </member>
    <member name="uint64" value="9">
      <attribute name="c:identifier" value="GI_TYPE_TAG_UINT64"/>
    </member>
    <member name="float" value="10">
      <attribute name="c:identifier" value="GI_TYPE_TAG_FLOAT"/>
    </member>
    <member name="double" value="11">
      <attribute name="c:identifier" value="GI_TYPE_TAG_DOUBLE"/>
    </member>
    <member name="gtype" value="12">
      <attribute name="c:identifier" value="GI_TYPE_TAG_GTYPE"/>
    </member>
    <member name="utf8" value="13">
      <attribute name="c:identifier" value="GI_TYPE_TAG_UTF8"/>
    </member>
    <member name="filename" value="14">
      <attribute name="c:identifier" value="GI_TYPE_TAG_FILENAME"/>
    </member>
    <member name="array" value="15">
      <attribute name="c:identifier" value="GI_TYPE_TAG_ARRAY"/>
    </member>
    <member name="interface" value="16">
      <attribute name="c:identifier" value="GI_TYPE_TAG_INTERFACE"/>
    </member>
    <member name="glist" value="17">
      <attribute name="c:identifier" value="GI_TYPE_TAG_GLIST"/>
    </member>
    <member name="gslist" value="18">
      <attribute name="c:identifier" value="GI_TYPE_TAG_GSLIST"/>
    </member>
    <member name="ghash" value="19">
      <attribute name="c:identifier" value="GI_TYPE_TAG_GHASH"/>
    </member>
    <member name="error" value="20">
      <attribute name="c:identifier" value="GI_TYPE_TAG_ERROR"/>
    </member>
    <member name="unichar" value="21">
      <attribute name="c:identifier" value="GI_TYPE_TAG_UNICHAR"/>
    </member>
  </enumeration>
struct Typelib
{
  <method name="free" c:identifier="g_typelib_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_namespace" c:identifier="g_typelib_get_namespace">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="symbol" c:identifier="g_typelib_symbol">
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
};
struct UnresolvedInfo
{
};
  <bitfield name="VFuncInfoFlags">
    <member name="must_chain_up" value="1">
      <attribute name="c:identifier" value="GI_VFUNC_MUST_CHAIN_UP"/>
    </member>
    <member name="must_override" value="2">
      <attribute name="c:identifier" value="GI_VFUNC_MUST_OVERRIDE"/>
    </member>
    <member name="must_not_override" value="4">
      <attribute name="c:identifier" value="GI_VFUNC_MUST_NOT_OVERRIDE"/>
    </member>
    <member name="throws" value="8">
      <attribute name="c:identifier" value="GI_VFUNC_THROWS"/>
    </member>
  </bitfield>
  <union name="_Argument">
    <field name="v_boolean" writable="1">
      <type name="gboolean"/>
    </field>
    <field name="v_int8" writable="1">
      <type name="gint8"/>
    </field>
    <field name="v_uint8" writable="1">
      <type name="guint8"/>
    </field>
    <field name="v_int16" writable="1">
      <type name="gint16"/>
    </field>
    <field name="v_uint16" writable="1">
      <type name="guint16"/>
    </field>
    <field name="v_int32" writable="1">
      <type name="gint32"/>
    </field>
    <field name="v_uint32" writable="1">
      <type name="guint32"/>
    </field>
    <field name="v_int64" writable="1">
      <type name="gint64"/>
    </field>
    <field name="v_uint64" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_float" writable="1">
      <type name="gfloat"/>
    </field>
    <field name="v_double" writable="1">
      <type name="gdouble"/>
    </field>
    <field name="v_short" writable="1">
      <type name="gint16"/>
    </field>
    <field name="v_ushort" writable="1">
      <type name="guint16"/>
    </field>
    <field name="v_int" writable="1">
      <type name="gint32"/>
    </field>
    <field name="v_uint" writable="1">
      <type name="guint32"/>
    </field>
    <field name="v_long" writable="1">
      <type name="gint64"/>
    </field>
    <field name="v_ulong" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_ssize" writable="1">
      <type name="gint64"/>
    </field>
    <field name="v_size" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_string" writable="1">
      <type name="utf8"/>
    </field>
    <field name="v_pointer" writable="1">
      <type name="any"/>
    </field>
  </union>
struct _BaseInfoStub
{
  <field name="dummy1">
    <type name="gint32"/>
  </field>
  <field name="dummy2">
    <type name="gint32"/>
  </field>
  <field name="dummy3">
    <type name="any"/>
  </field>
  <field name="dummy4">
    <type name="any"/>
  </field>
  <field name="dummy5">
    <type name="any"/>
  </field>
  <field name="dummy6">
    <type name="guint32"/>
  </field>
  <field name="dummy7">
    <type name="guint32"/>
  </field>
  <field name="padding">
    <array fixed-size="4">
      <type name="any"/>
    </array>
  </field>
};
  <function name="arg_info_get_closure" c:identifier="g_arg_info_get_closure">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_get_destroy" c:identifier="g_arg_info_get_destroy">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_get_direction" c:identifier="g_arg_info_get_direction">
    <return-value transfer-ownership="none">
      <type name="Direction"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_get_ownership_transfer" c:identifier="g_arg_info_get_ownership_transfer">
    <return-value transfer-ownership="none">
      <type name="Transfer"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_get_scope" c:identifier="g_arg_info_get_scope">
    <return-value transfer-ownership="none">
      <type name="ScopeType"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_get_type" c:identifier="g_arg_info_get_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_is_caller_allocates" c:identifier="g_arg_info_is_caller_allocates">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_is_optional" c:identifier="g_arg_info_is_optional">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_is_return_value" c:identifier="g_arg_info_is_return_value">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_is_skip" c:identifier="g_arg_info_is_skip">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_load_type" c:identifier="g_arg_info_load_type">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="type" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="arg_info_may_be_null" c:identifier="g_arg_info_may_be_null">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_get_arg" c:identifier="g_callable_info_get_arg">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_get_caller_owns" c:identifier="g_callable_info_get_caller_owns">
    <return-value transfer-ownership="none">
      <type name="Transfer"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_get_n_args" c:identifier="g_callable_info_get_n_args">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_get_return_attribute" c:identifier="g_callable_info_get_return_attribute">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_get_return_type" c:identifier="g_callable_info_get_return_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_iterate_return_attributes" c:identifier="g_callable_info_iterate_return_attributes">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="iterator" transfer-ownership="none">
        <type name="AttributeIter"/>
      </parameter>
      <parameter name="name" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_load_arg" c:identifier="g_callable_info_load_arg">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="arg" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_load_return_type" c:identifier="g_callable_info_load_return_type">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="type" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_may_return_null" c:identifier="g_callable_info_may_return_null">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="callable_info_skip_return" c:identifier="g_callable_info_skip_return">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="constant_info_get_type" c:identifier="g_constant_info_get_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_info_get_error_domain" c:identifier="g_enum_info_get_error_domain">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_info_get_method" c:identifier="g_enum_info_get_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_info_get_n_methods" c:identifier="g_enum_info_get_n_methods">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_info_get_n_values" c:identifier="g_enum_info_get_n_values">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_info_get_storage_type" c:identifier="g_enum_info_get_storage_type">
    <return-value transfer-ownership="none">
      <type name="TypeTag"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_info_get_value" c:identifier="g_enum_info_get_value">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="field_info_get_flags" c:identifier="g_field_info_get_flags">
    <return-value transfer-ownership="none">
      <type name="FieldInfoFlags"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="field_info_get_offset" c:identifier="g_field_info_get_offset">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="field_info_get_size" c:identifier="g_field_info_get_size">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="field_info_get_type" c:identifier="g_field_info_get_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="function_info_get_flags" c:identifier="g_function_info_get_flags">
    <return-value transfer-ownership="none">
      <type name="FunctionInfoFlags"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="function_info_get_property" c:identifier="g_function_info_get_property">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="function_info_get_symbol" c:identifier="g_function_info_get_symbol">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="function_info_get_vfunc" c:identifier="g_function_info_get_vfunc">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="info_new" c:identifier="g_info_new">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="InfoType"/>
      </parameter>
      <parameter name="container" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="typelib" transfer-ownership="none">
        <type name="Typelib"/>
      </parameter>
      <parameter name="offset" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="info_type_to_string" c:identifier="g_info_type_to_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="InfoType"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_find_method" c:identifier="g_interface_info_find_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_find_vfunc" c:identifier="g_interface_info_find_vfunc">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_constant" c:identifier="g_interface_info_get_constant">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_iface_struct" c:identifier="g_interface_info_get_iface_struct">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_method" c:identifier="g_interface_info_get_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_n_constants" c:identifier="g_interface_info_get_n_constants">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_n_methods" c:identifier="g_interface_info_get_n_methods">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_n_prerequisites" c:identifier="g_interface_info_get_n_prerequisites">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_n_properties" c:identifier="g_interface_info_get_n_properties">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_n_signals" c:identifier="g_interface_info_get_n_signals">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_n_vfuncs" c:identifier="g_interface_info_get_n_vfuncs">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_prerequisite" c:identifier="g_interface_info_get_prerequisite">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_property" c:identifier="g_interface_info_get_property">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_signal" c:identifier="g_interface_info_get_signal">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="interface_info_get_vfunc" c:identifier="g_interface_info_get_vfunc">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="invoke_error_quark" c:identifier="g_invoke_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <enumeration name="nvokeError" glib:error-domain="g-invoke-error-quark">
    <member name="failed" value="0">
      <attribute name="c:identifier" value="G_INVOKE_ERROR_FAILED"/>
    </member>
    <member name="symbol_not_found" value="1">
      <attribute name="c:identifier" value="G_INVOKE_ERROR_SYMBOL_NOT_FOUND"/>
    </member>
    <member name="argument_mismatch" value="2">
      <attribute name="c:identifier" value="G_INVOKE_ERROR_ARGUMENT_MISMATCH"/>
    </member>
  </enumeration>
  <function name="object_info_find_method" c:identifier="g_object_info_find_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_find_method_using_interfaces" c:identifier="g_object_info_find_method_using_interfaces">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="implementor" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_find_vfunc" c:identifier="g_object_info_find_vfunc">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_find_vfunc_using_interfaces" c:identifier="g_object_info_find_vfunc_using_interfaces">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="implementor" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_abstract" c:identifier="g_object_info_get_abstract">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_class_struct" c:identifier="g_object_info_get_class_struct">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_constant" c:identifier="g_object_info_get_constant">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_field" c:identifier="g_object_info_get_field">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_fundamental" c:identifier="g_object_info_get_fundamental">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_get_value_function" c:identifier="g_object_info_get_get_value_function">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_interface" c:identifier="g_object_info_get_interface">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_method" c:identifier="g_object_info_get_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_constants" c:identifier="g_object_info_get_n_constants">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_fields" c:identifier="g_object_info_get_n_fields">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_interfaces" c:identifier="g_object_info_get_n_interfaces">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_methods" c:identifier="g_object_info_get_n_methods">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_properties" c:identifier="g_object_info_get_n_properties">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_signals" c:identifier="g_object_info_get_n_signals">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_n_vfuncs" c:identifier="g_object_info_get_n_vfuncs">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_parent" c:identifier="g_object_info_get_parent">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_property" c:identifier="g_object_info_get_property">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_ref_function" c:identifier="g_object_info_get_ref_function">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_set_value_function" c:identifier="g_object_info_get_set_value_function">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_signal" c:identifier="g_object_info_get_signal">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_type_init" c:identifier="g_object_info_get_type_init">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_type_name" c:identifier="g_object_info_get_type_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_unref_function" c:identifier="g_object_info_get_unref_function">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="object_info_get_vfunc" c:identifier="g_object_info_get_vfunc">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="property_info_get_flags" c:identifier="g_property_info_get_flags">
    <return-value transfer-ownership="none">
      <type name="GObject.ParamFlags"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="property_info_get_ownership_transfer" c:identifier="g_property_info_get_ownership_transfer">
    <return-value transfer-ownership="none">
      <type name="Transfer"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="property_info_get_type" c:identifier="g_property_info_get_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="registered_type_info_get_g_type" c:identifier="g_registered_type_info_get_g_type">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="registered_type_info_get_type_init" c:identifier="g_registered_type_info_get_type_init">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="registered_type_info_get_type_name" c:identifier="g_registered_type_info_get_type_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_info_get_class_closure" c:identifier="g_signal_info_get_class_closure">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_info_get_flags" c:identifier="g_signal_info_get_flags">
    <return-value transfer-ownership="none">
      <type name="GObject.SignalFlags"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_info_true_stops_emit" c:identifier="g_signal_info_true_stops_emit">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_find_method" c:identifier="g_struct_info_find_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_get_alignment" c:identifier="g_struct_info_get_alignment">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_get_field" c:identifier="g_struct_info_get_field">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_get_method" c:identifier="g_struct_info_get_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_get_n_fields" c:identifier="g_struct_info_get_n_fields">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_get_n_methods" c:identifier="g_struct_info_get_n_methods">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_get_size" c:identifier="g_struct_info_get_size">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_is_foreign" c:identifier="g_struct_info_is_foreign">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="struct_info_is_gtype_struct" c:identifier="g_struct_info_is_gtype_struct">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_get_array_fixed_size" c:identifier="g_type_info_get_array_fixed_size">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_get_array_length" c:identifier="g_type_info_get_array_length">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_get_array_type" c:identifier="g_type_info_get_array_type">
    <return-value transfer-ownership="none">
      <type name="ArrayType"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_get_interface" c:identifier="g_type_info_get_interface">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_get_param_type" c:identifier="g_type_info_get_param_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_get_tag" c:identifier="g_type_info_get_tag">
    <return-value transfer-ownership="none">
      <type name="TypeTag"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_is_pointer" c:identifier="g_type_info_is_pointer">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_info_is_zero_terminated" c:identifier="g_type_info_is_zero_terminated">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_tag_to_string" c:identifier="g_type_tag_to_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="TypeTag"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_find_method" c:identifier="g_union_info_find_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_alignment" c:identifier="g_union_info_get_alignment">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_discriminator" c:identifier="g_union_info_get_discriminator">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_discriminator_offset" c:identifier="g_union_info_get_discriminator_offset">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_discriminator_type" c:identifier="g_union_info_get_discriminator_type">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_field" c:identifier="g_union_info_get_field">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_method" c:identifier="g_union_info_get_method">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_n_fields" c:identifier="g_union_info_get_n_fields">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_n_methods" c:identifier="g_union_info_get_n_methods">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_get_size" c:identifier="g_union_info_get_size">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="union_info_is_discriminated" c:identifier="g_union_info_is_discriminated">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="value_info_get_value" c:identifier="g_value_info_get_value">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="vfunc_info_get_flags" c:identifier="g_vfunc_info_get_flags">
    <return-value transfer-ownership="none">
      <type name="VFuncInfoFlags"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="vfunc_info_get_invoker" c:identifier="g_vfunc_info_get_invoker">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="vfunc_info_get_offset" c:identifier="g_vfunc_info_get_offset">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="vfunc_info_get_signal" c:identifier="g_vfunc_info_get_signal">
    <return-value transfer-ownership="full">
      <type name="BaseInfo"/>
    </return-value>
    <parameters>
      <parameter name="info" transfer-ownership="none">
        <type name="BaseInfo"/>
      </parameter>
    </parameters>
  </function>
} // namespace GIRepository
</repository>
