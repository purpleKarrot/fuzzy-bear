<?xml version="1.0"?>
<repository version="1.0"
            xmlns="http://www.gtk.org/introspection/core/1.0"
            xmlns:c="http://www.gtk.org/introspection/c/1.0"
            xmlns:glib="http://www.gtk.org/introspection/glib/1.0">
  <include name="GLib" version="2.0"/>
namespace GObject
{
  <callback name="BaseFinalizeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="BaseInitFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <class name="Binding" parent="Object" glib:type-name="GBinding" glib:get-type="g_binding_get_type">
    <method name="get_flags" c:identifier="g_binding_get_flags">
      <return-value transfer-ownership="none">
        <type name="BindingFlags"/>
      </return-value>
    </method>
    <method name="get_source" c:identifier="g_binding_get_source">
      <return-value transfer-ownership="none">
        <type name="Object"/>
      </return-value>
    </method>
    <method name="get_source_property" c:identifier="g_binding_get_source_property">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_target" c:identifier="g_binding_get_target">
      <return-value transfer-ownership="none">
        <type name="Object"/>
      </return-value>
    </method>
    <method name="get_target_property" c:identifier="g_binding_get_target_property">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <property name="flags" writable="1" construct-only="1" transfer-ownership="none">
      <type name="BindingFlags"/>
    </property>
    <property name="source" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Object"/>
    </property>
    <property name="source-property" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="target" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Object"/>
    </property>
    <property name="target-property" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
  </class>
  <bitfield name="BindingFlags" glib:type-name="GBindingFlags" glib:get-type="g_binding_flags_get_type">
    <member name="default" value="0">
      <attribute name="c:identifier" value="G_BINDING_DEFAULT"/>
    </member>
    <member name="bidirectional" value="1">
      <attribute name="c:identifier" value="G_BINDING_BIDIRECTIONAL"/>
    </member>
    <member name="sync_create" value="2">
      <attribute name="c:identifier" value="G_BINDING_SYNC_CREATE"/>
    </member>
    <member name="invert_boolean" value="4">
      <attribute name="c:identifier" value="G_BINDING_INVERT_BOOLEAN"/>
    </member>
  </bitfield>
  <callback name="BindingTransformFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="binding" transfer-ownership="none">
        <type name="Binding"/>
      </parameter>
      <parameter name="source_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="target_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="3">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="BoxedFreeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="boxed" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct CClosure
{
  <field name="closure" writable="1">
    <type name="Closure"/>
  </field>
  <field name="callback" writable="1">
    <type name="any"/>
  </field>
  <function name="marshal_BOOLEAN__BOXED_BOXED" c:identifier="g_cclosure_marshal_BOOLEAN__BOXED_BOXED">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_BOOLEAN__FLAGS" c:identifier="g_cclosure_marshal_BOOLEAN__FLAGS">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_STRING__OBJECT_POINTER" c:identifier="g_cclosure_marshal_STRING__OBJECT_POINTER">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__BOOLEAN" c:identifier="g_cclosure_marshal_VOID__BOOLEAN">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__BOXED" c:identifier="g_cclosure_marshal_VOID__BOXED">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__CHAR" c:identifier="g_cclosure_marshal_VOID__CHAR">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__DOUBLE" c:identifier="g_cclosure_marshal_VOID__DOUBLE">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__ENUM" c:identifier="g_cclosure_marshal_VOID__ENUM">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__FLAGS" c:identifier="g_cclosure_marshal_VOID__FLAGS">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__FLOAT" c:identifier="g_cclosure_marshal_VOID__FLOAT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__INT" c:identifier="g_cclosure_marshal_VOID__INT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__LONG" c:identifier="g_cclosure_marshal_VOID__LONG">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__OBJECT" c:identifier="g_cclosure_marshal_VOID__OBJECT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__PARAM" c:identifier="g_cclosure_marshal_VOID__PARAM">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__POINTER" c:identifier="g_cclosure_marshal_VOID__POINTER">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__STRING" c:identifier="g_cclosure_marshal_VOID__STRING">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__UCHAR" c:identifier="g_cclosure_marshal_VOID__UCHAR">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__UINT" c:identifier="g_cclosure_marshal_VOID__UINT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__UINT_POINTER" c:identifier="g_cclosure_marshal_VOID__UINT_POINTER">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__ULONG" c:identifier="g_cclosure_marshal_VOID__ULONG">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__VARIANT" c:identifier="g_cclosure_marshal_VOID__VARIANT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_VOID__VOID" c:identifier="g_cclosure_marshal_VOID__VOID">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="marshal_generic" c:identifier="g_cclosure_marshal_generic">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_gvalue" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
};
  <callback name="Callback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </callback>
  <callback name="ClassFinalizeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="class_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="ClassInitFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="class_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct Closure
{
 glib:type-name="GClosure" glib:get-type="g_closure_get_type"  <field name="ref_count">
    <type name="guint32"/>
  </field>
  <field name="meta_marshal_nouse">
    <type name="guint32"/>
  </field>
  <field name="n_guards">
    <type name="guint32"/>
  </field>
  <field name="n_fnotifiers">
    <type name="guint32"/>
  </field>
  <field name="n_inotifiers">
    <type name="guint32"/>
  </field>
  <field name="in_inotify">
    <type name="guint32"/>
  </field>
  <field name="floating">
    <type name="guint32"/>
  </field>
  <field name="derivative_flag">
    <type name="guint32"/>
  </field>
  <field name="in_marshal" writable="1">
    <type name="guint32"/>
  </field>
  <field name="is_invalid" writable="1">
    <type name="guint32"/>
  </field>
  <field name="marshal">
    <callback name="marshal">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="closure" transfer-ownership="none">
          <type name="Closure"/>
        </parameter>
        <parameter name="return_value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="n_param_values" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="param_values" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="invocation_hint" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="marshal_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="data">
    <type name="any"/>
  </field>
  <field name="notifiers">
    <type name="ClosureNotifyData"/>
  </field>
  <constructor name="new_object" c:identifier="g_closure_new_object">
    <return-value transfer-ownership="full">
      <type name="Closure"/>
    </return-value>
    <parameters>
      <parameter name="sizeof_closure" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="object" transfer-ownership="none">
        <type name="Object"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_simple" c:identifier="g_closure_new_simple">
    <return-value transfer-ownership="full">
      <type name="Closure"/>
    </return-value>
    <parameters>
      <parameter name="sizeof_closure" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="invalidate" c:identifier="g_closure_invalidate">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="invoke" c:identifier="g_closure_invoke">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="return_value" transfer-ownership="none" allow-none="1">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <array length="1">
          <type name="Value"/>
        </array>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref" c:identifier="g_closure_ref">
    <return-value transfer-ownership="none">
      <type name="Closure"/>
    </return-value>
  </method>
  <method name="sink" c:identifier="g_closure_sink">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_closure_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <callback name="ClosureMarshal">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none" allow-none="1">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <array length="2">
          <type name="Value"/>
        </array>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="ClosureNotify">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
    </parameters>
  </callback>
struct ClosureNotifyData
{
  <field name="data" writable="1">
    <type name="any"/>
  </field>
  <field name="notify" writable="1">
    <callback name="ClosureNotify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="closure" transfer-ownership="none">
          <type name="Closure"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <bitfield name="ConnectFlags">
    <member name="after" value="1">
      <attribute name="c:identifier" value="G_CONNECT_AFTER"/>
    </member>
    <member name="swapped" value="2">
      <attribute name="c:identifier" value="G_CONNECT_SWAPPED"/>
    </member>
  </bitfield>
struct EnumClass
{
  <field name="g_type_class" writable="1">
    <type name="TypeClass"/>
  </field>
  <field name="minimum" writable="1">
    <type name="gint32"/>
  </field>
  <field name="maximum" writable="1">
    <type name="gint32"/>
  </field>
  <field name="n_values" writable="1">
    <type name="guint32"/>
  </field>
  <field name="values" writable="1">
    <type name="EnumValue"/>
  </field>
};
struct EnumValue
{
  <field name="value" writable="1">
    <type name="gint32"/>
  </field>
  <field name="value_name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="value_nick" writable="1">
    <type name="utf8"/>
  </field>
};
struct FlagsClass
{
  <field name="g_type_class" writable="1">
    <type name="TypeClass"/>
  </field>
  <field name="mask" writable="1">
    <type name="guint32"/>
  </field>
  <field name="n_values" writable="1">
    <type name="guint32"/>
  </field>
  <field name="values" writable="1">
    <type name="FlagsValue"/>
  </field>
};
struct FlagsValue
{
  <field name="value" writable="1">
    <type name="guint32"/>
  </field>
  <field name="value_name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="value_nick" writable="1">
    <type name="utf8"/>
  </field>
};
  <class name="InitiallyUnowned" parent="Object" glib:type-struct="InitiallyUnownedClass" glib:type-name="GInitiallyUnowned" glib:get-type="g_initially_unowned_get_type">
    <field name="g_type_instance">
      <type name="TypeInstance"/>
    </field>
    <field name="ref_count">
      <type name="guint32"/>
    </field>
    <field name="qdata">
      <type name="GLib.Data"/>
    </field>
  </class>
struct InitiallyUnownedClass
{
 glib:is-gtype-struct="1"  <field name="g_type_class">
    <type name="TypeClass"/>
  </field>
  <field name="construct_properties">
    <type name="GLib.SList">
      <type name="any"/>
    </type>
  </field>
  <field name="constructor">
    <type name="any"/>
  </field>
  <field name="set_property">
    <callback name="set_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="property_id" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get_property">
    <callback name="get_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="property_id" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dispose">
    <callback name="dispose">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="finalize">
    <callback name="finalize">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dispatch_properties_changed">
    <callback name="dispatch_properties_changed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="n_pspecs" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="pspecs" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="notify">
    <callback name="notify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="constructed">
    <callback name="constructed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="flags">
    <type name="guint64"/>
  </field>
  <field name="pdummy">
    <array fixed-size="6">
      <type name="any"/>
    </array>
  </field>
};
  <callback name="InstanceInitFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="TypeInstance"/>
      </parameter>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="InterfaceFinalizeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_iface" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="iface_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct InterfaceInfo
{
  <field name="interface_init" writable="1">
    <callback name="InterfaceInitFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_iface" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="iface_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="interface_finalize" writable="1">
    <callback name="InterfaceFinalizeFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_iface" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="iface_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="interface_data" writable="1">
    <type name="any"/>
  </field>
};
  <callback name="InterfaceInitFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_iface" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="iface_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <class name="Object" glib:type-struct="ObjectClass" glib:type-name="GObject" glib:get-type="g_object_get_type">
    <field name="g_type_instance">
      <type name="TypeInstance"/>
    </field>
    <field name="ref_count">
      <type name="guint32"/>
    </field>
    <field name="qdata">
      <type name="GLib.Data"/>
    </field>
    <constructor name="new" c:identifier="g_object_newv">
      <return-value transfer-ownership="full">
        <type name="Object"/>
      </return-value>
      <parameters>
        <parameter name="object_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="n_parameters" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="parameters" transfer-ownership="none">
          <array length="1">
            <type name="Parameter"/>
          </array>
        </parameter>
      </parameters>
    </constructor>
    <function name="compat_control" c:identifier="g_object_compat_control">
      <return-value transfer-ownership="none">
        <type name="guint64"/>
      </return-value>
      <parameters>
        <parameter name="what" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </function>
    <function name="interface_find_property" c:identifier="g_object_interface_find_property">
      <return-value transfer-ownership="none">
        <type name="ParamSpec"/>
      </return-value>
      <parameters>
        <parameter name="g_iface" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="property_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </function>
    <function name="interface_install_property" c:identifier="g_object_interface_install_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_iface" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </function>
    <function name="interface_list_properties" c:identifier="g_object_interface_list_properties">
      <return-value transfer-ownership="container">
        <array length="1">
          <type name="ParamSpec"/>
        </array>
      </return-value>
      <parameters>
        <parameter name="g_iface" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="n_properties_p" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </function>
    <method name="bind_property" c:identifier="g_object_bind_property">
      <return-value transfer-ownership="none">
        <type name="Binding"/>
      </return-value>
      <parameters>
        <parameter name="source_property" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="target" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="target_property" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="BindingFlags"/>
        </parameter>
      </parameters>
    </method>
    <method name="bind_property_full" c:identifier="g_object_bind_property_with_closures">
      <return-value transfer-ownership="none">
        <type name="Binding"/>
      </return-value>
      <parameters>
        <parameter name="source_property" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="target" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="target_property" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="BindingFlags"/>
        </parameter>
        <parameter name="transform_to" transfer-ownership="none">
          <type name="Closure"/>
        </parameter>
        <parameter name="transform_from" transfer-ownership="none">
          <type name="Closure"/>
        </parameter>
      </parameters>
    </method>
    <method name="force_floating" c:identifier="g_object_force_floating">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="freeze_notify" c:identifier="g_object_freeze_notify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="get_data" c:identifier="g_object_get_data">
      <return-value transfer-ownership="none">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="key" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_property" c:identifier="g_object_get_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="property_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_qdata" c:identifier="g_object_get_qdata">
      <return-value transfer-ownership="none">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="quark" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="is_floating" c:identifier="g_object_is_floating">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="notify" c:identifier="g_object_notify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="property_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="notify_by_pspec" c:identifier="g_object_notify_by_pspec">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </method>
    <method name="ref" c:identifier="g_object_ref">
      <return-value transfer-ownership="none">
        <type name="Object"/>
      </return-value>
    </method>
    <method name="ref_sink" c:identifier="g_object_ref_sink">
      <return-value transfer-ownership="none">
        <type name="Object"/>
      </return-value>
    </method>
    <method name="run_dispose" c:identifier="g_object_run_dispose">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="set_data" c:identifier="g_object_set_data">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="key" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_property" c:identifier="g_object_set_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="property_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </method>
    <method name="steal_data" c:identifier="g_object_steal_data">
      <return-value transfer-ownership="full">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="key" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="steal_qdata" c:identifier="g_object_steal_qdata">
      <return-value transfer-ownership="full">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="quark" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="thaw_notify" c:identifier="g_object_thaw_notify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="unref" c:identifier="g_object_unref">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="watch_closure" c:identifier="g_object_watch_closure">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="closure" transfer-ownership="none">
          <type name="Closure"/>
        </parameter>
      </parameters>
    </method>
    <glib:signal name="notify" when="CLEANUP" no-recurse="1" detailed="1" action="1" no-hooks="1">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="constructed" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="dispatch_properties_changed" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="n_pspecs" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="pspecs" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="dispose" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="finalize" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="get_property" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="property_id" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="notify" offset="65535" invoker="notify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="set_property" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="property_id" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
struct ObjectClass
{
 glib:is-gtype-struct="1"  <field name="g_type_class">
    <type name="TypeClass"/>
  </field>
  <field name="construct_properties">
    <type name="GLib.SList">
      <type name="any"/>
    </type>
  </field>
  <field name="constructor">
    <type name="any"/>
  </field>
  <field name="set_property">
    <callback name="set_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="property_id" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get_property">
    <callback name="get_property">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="property_id" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dispose">
    <callback name="dispose">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="finalize">
    <callback name="finalize">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dispatch_properties_changed">
    <callback name="dispatch_properties_changed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="n_pspecs" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="pspecs" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="notify">
    <callback name="notify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="constructed">
    <callback name="constructed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="object" transfer-ownership="none">
          <type name="Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="flags">
    <type name="guint64"/>
  </field>
  <field name="pdummy">
    <array fixed-size="6">
      <type name="any"/>
    </array>
  </field>
  <method name="find_property" c:identifier="g_object_class_find_property">
    <return-value transfer-ownership="none">
      <type name="ParamSpec"/>
    </return-value>
    <parameters>
      <parameter name="property_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="install_properties" c:identifier="g_object_class_install_properties">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_pspecs" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="pspecs" transfer-ownership="none">
        <array length="0">
          <type name="ParamSpec"/>
        </array>
      </parameter>
    </parameters>
  </method>
  <method name="install_property" c:identifier="g_object_class_install_property">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="property_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
    </parameters>
  </method>
  <method name="list_properties" c:identifier="g_object_class_list_properties">
    <return-value transfer-ownership="container">
      <array length="0">
        <type name="ParamSpec"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="n_properties" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="override_property" c:identifier="g_object_class_override_property">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="property_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
};
struct ObjectConstructParam
{
  <field name="pspec" writable="1">
    <type name="ParamSpec"/>
  </field>
  <field name="value" writable="1">
    <type name="Value"/>
  </field>
};
  <callback name="ObjectFinalizeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="object" transfer-ownership="none">
        <type name="Object"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="ObjectGetPropertyFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="object" transfer-ownership="none">
        <type name="Object"/>
      </parameter>
      <parameter name="property_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="ObjectSetPropertyFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="object" transfer-ownership="none">
        <type name="Object"/>
      </parameter>
      <parameter name="property_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
    </parameters>
  </callback>
  <constant name="PARAM_MASK" value="255">
    <type name="gint32"/>
  </constant>
  <constant name="PARAM_READWRITE" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="PARAM_STATIC_STRINGS" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="PARAM_USER_SHIFT" value="8">
    <type name="gint32"/>
  </constant>
  <bitfield name="ParamFlags">
    <member name="readable" value="1">
      <attribute name="c:identifier" value="G_PARAM_READABLE"/>
    </member>
    <member name="writable" value="2">
      <attribute name="c:identifier" value="G_PARAM_WRITABLE"/>
    </member>
    <member name="construct" value="4">
      <attribute name="c:identifier" value="G_PARAM_CONSTRUCT"/>
    </member>
    <member name="construct_only" value="8">
      <attribute name="c:identifier" value="G_PARAM_CONSTRUCT_ONLY"/>
    </member>
    <member name="lax_validation" value="16">
      <attribute name="c:identifier" value="G_PARAM_LAX_VALIDATION"/>
    </member>
    <member name="static_name" value="32">
      <attribute name="c:identifier" value="G_PARAM_STATIC_NAME"/>
    </member>
    <member name="private" value="32">
      <attribute name="c:identifier" value="G_PARAM_PRIVATE"/>
    </member>
    <member name="static_nick" value="64">
      <attribute name="c:identifier" value="G_PARAM_STATIC_NICK"/>
    </member>
    <member name="static_blurb" value="128">
      <attribute name="c:identifier" value="G_PARAM_STATIC_BLURB"/>
    </member>
    <member name="deprecated" value="2147483648">
      <attribute name="c:identifier" value="G_PARAM_DEPRECATED"/>
    </member>
  </bitfield>
  <class name="ParamSpec" glib:type-struct="ParamSpecClass" abstract="1" glib:type-name="GParam" glib:get-type="intern" glib:fundamental="1">
    <field name="g_type_instance">
      <type name="TypeInstance"/>
    </field>
    <field name="name">
      <type name="utf8"/>
    </field>
    <field name="flags">
      <type name="ParamFlags"/>
    </field>
    <field name="value_type">
      <type name="GType"/>
    </field>
    <field name="owner_type">
      <type name="GType"/>
    </field>
    <field name="_nick">
      <type name="utf8"/>
    </field>
    <field name="_blurb">
      <type name="utf8"/>
    </field>
    <field name="qdata">
      <type name="GLib.Data"/>
    </field>
    <field name="ref_count">
      <type name="guint32"/>
    </field>
    <field name="param_id">
      <type name="guint32"/>
    </field>
    <method name="get_blurb" c:identifier="g_param_spec_get_blurb">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_name" c:identifier="g_param_spec_get_name">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_nick" c:identifier="g_param_spec_get_nick">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_qdata" c:identifier="g_param_spec_get_qdata">
      <return-value transfer-ownership="none">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="quark" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_redirect_target" c:identifier="g_param_spec_get_redirect_target">
      <return-value transfer-ownership="none">
        <type name="ParamSpec"/>
      </return-value>
    </method>
    <method name="set_qdata" c:identifier="g_param_spec_set_qdata">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="quark" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="sink" c:identifier="g_param_spec_sink">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="steal_qdata" c:identifier="g_param_spec_steal_qdata">
      <return-value transfer-ownership="none">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="quark" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <virtual-method name="finalize" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="value_set_default" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="value_validate" offset="65535">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="values_cmp" offset="65535">
      <return-value transfer-ownership="none">
        <type name="gint32"/>
      </return-value>
      <parameters>
        <parameter name="value1" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="value2" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
  <class name="ParamSpecBoolean" parent="ParamSpec" glib:type-name="GParamBoolean" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="default_value">
      <type name="gboolean"/>
    </field>
  </class>
  <class name="ParamSpecBoxed" parent="ParamSpec" glib:type-name="GParamBoxed" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
  </class>
  <class name="ParamSpecChar" parent="ParamSpec" glib:type-name="GParamChar" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="gint8"/>
    </field>
    <field name="maximum">
      <type name="gint8"/>
    </field>
    <field name="default_value">
      <type name="gint8"/>
    </field>
  </class>
struct ParamSpecClass
{
 glib:is-gtype-struct="1"  <field name="g_type_class">
    <type name="TypeClass"/>
  </field>
  <field name="value_type">
    <type name="GType"/>
  </field>
  <field name="finalize">
    <callback name="finalize">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_set_default">
    <callback name="value_set_default">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_validate">
    <callback name="value_validate">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="values_cmp">
    <callback name="values_cmp">
      <return-value transfer-ownership="none">
        <type name="gint32"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
        <parameter name="value1" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="value2" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dummy">
    <array fixed-size="4">
      <type name="any"/>
    </array>
  </field>
};
  <class name="ParamSpecDouble" parent="ParamSpec" glib:type-name="GParamDouble" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="gdouble"/>
    </field>
    <field name="maximum">
      <type name="gdouble"/>
    </field>
    <field name="default_value">
      <type name="gdouble"/>
    </field>
    <field name="epsilon">
      <type name="gdouble"/>
    </field>
  </class>
  <class name="ParamSpecEnum" parent="ParamSpec" glib:type-name="GParamEnum" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="enum_class">
      <type name="EnumClass"/>
    </field>
    <field name="default_value">
      <type name="gint32"/>
    </field>
  </class>
  <class name="ParamSpecFlags" parent="ParamSpec" glib:type-name="GParamFlags" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="flags_class">
      <type name="FlagsClass"/>
    </field>
    <field name="default_value">
      <type name="guint32"/>
    </field>
  </class>
  <class name="ParamSpecFloat" parent="ParamSpec" glib:type-name="GParamFloat" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="gfloat"/>
    </field>
    <field name="maximum">
      <type name="gfloat"/>
    </field>
    <field name="default_value">
      <type name="gfloat"/>
    </field>
    <field name="epsilon">
      <type name="gfloat"/>
    </field>
  </class>
  <class name="ParamSpecGType" parent="ParamSpec" glib:type-name="GParamGType" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="is_a_type">
      <type name="GType"/>
    </field>
  </class>
  <class name="ParamSpecInt" parent="ParamSpec" glib:type-name="GParamInt" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="gint32"/>
    </field>
    <field name="maximum">
      <type name="gint32"/>
    </field>
    <field name="default_value">
      <type name="gint32"/>
    </field>
  </class>
  <class name="ParamSpecInt64" parent="ParamSpec" glib:type-name="GParamInt64" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="gint64"/>
    </field>
    <field name="maximum">
      <type name="gint64"/>
    </field>
    <field name="default_value">
      <type name="gint64"/>
    </field>
  </class>
  <class name="ParamSpecLong" parent="ParamSpec" glib:type-name="GParamLong" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="gint64"/>
    </field>
    <field name="maximum">
      <type name="gint64"/>
    </field>
    <field name="default_value">
      <type name="gint64"/>
    </field>
  </class>
  <class name="ParamSpecObject" parent="ParamSpec" glib:type-name="GParamObject" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
  </class>
  <class name="ParamSpecOverride" parent="ParamSpec" glib:type-name="GParamOverride" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="overridden">
      <type name="ParamSpec"/>
    </field>
  </class>
  <class name="ParamSpecParam" parent="ParamSpec" glib:type-name="GParamParam" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
  </class>
  <class name="ParamSpecPointer" parent="ParamSpec" glib:type-name="GParamPointer" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
  </class>
struct ParamSpecPool
{
  <method name="insert" c:identifier="g_param_spec_pool_insert">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
      <parameter name="owner_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </method>
  <method name="list" c:identifier="g_param_spec_pool_list">
    <return-value transfer-ownership="container">
      <array length="1">
        <type name="ParamSpec"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="owner_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="n_pspecs_p" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="list_owned" c:identifier="g_param_spec_pool_list_owned">
    <return-value transfer-ownership="container">
      <type name="GLib.List">
        <type name="ParamSpec"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="owner_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </method>
  <method name="lookup" c:identifier="g_param_spec_pool_lookup">
    <return-value transfer-ownership="none">
      <type name="ParamSpec"/>
    </return-value>
    <parameters>
      <parameter name="param_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="owner_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="walk_ancestors" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove" c:identifier="g_param_spec_pool_remove">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
    </parameters>
  </method>
  <function name="new" c:identifier="g_param_spec_pool_new">
    <return-value transfer-ownership="none">
      <type name="ParamSpecPool"/>
    </return-value>
    <parameters>
      <parameter name="type_prefixing" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
};
  <class name="ParamSpecString" parent="ParamSpec" glib:type-name="GParamString" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="default_value">
      <type name="utf8"/>
    </field>
    <field name="cset_first">
      <type name="utf8"/>
    </field>
    <field name="cset_nth">
      <type name="utf8"/>
    </field>
    <field name="substitutor">
      <type name="guint8"/>
    </field>
    <field name="null_fold_if_empty">
      <type name="guint32"/>
    </field>
    <field name="ensure_non_null">
      <type name="guint32"/>
    </field>
  </class>
struct ParamSpecTypeInfo
{
  <field name="instance_size" writable="1">
    <type name="guint16"/>
  </field>
  <field name="n_preallocs" writable="1">
    <type name="guint16"/>
  </field>
  <field name="instance_init">
    <callback name="instance_init">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_type" writable="1">
    <type name="GType"/>
  </field>
  <field name="finalize">
    <callback name="finalize">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_set_default">
    <callback name="value_set_default">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_validate">
    <callback name="value_validate">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="values_cmp">
    <callback name="values_cmp">
      <return-value transfer-ownership="none">
        <type name="gint32"/>
      </return-value>
      <parameters>
        <parameter name="pspec" transfer-ownership="none">
          <type name="ParamSpec"/>
        </parameter>
        <parameter name="value1" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="value2" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <class name="ParamSpecUChar" parent="ParamSpec" glib:type-name="GParamUChar" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="guint8"/>
    </field>
    <field name="maximum">
      <type name="guint8"/>
    </field>
    <field name="default_value">
      <type name="guint8"/>
    </field>
  </class>
  <class name="ParamSpecUInt" parent="ParamSpec" glib:type-name="GParamUInt" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="guint32"/>
    </field>
    <field name="maximum">
      <type name="guint32"/>
    </field>
    <field name="default_value">
      <type name="guint32"/>
    </field>
  </class>
  <class name="ParamSpecUInt64" parent="ParamSpec" glib:type-name="GParamUInt64" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="guint64"/>
    </field>
    <field name="maximum">
      <type name="guint64"/>
    </field>
    <field name="default_value">
      <type name="guint64"/>
    </field>
  </class>
  <class name="ParamSpecULong" parent="ParamSpec" glib:type-name="GParamULong" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="minimum">
      <type name="guint64"/>
    </field>
    <field name="maximum">
      <type name="guint64"/>
    </field>
    <field name="default_value">
      <type name="guint64"/>
    </field>
  </class>
  <class name="ParamSpecUnichar" parent="ParamSpec" glib:type-name="GParamUnichar" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="default_value">
      <type name="gunichar"/>
    </field>
  </class>
  <class name="ParamSpecValueArray" parent="ParamSpec" glib:type-name="GParamValueArray" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="element_spec">
      <type name="ParamSpec"/>
    </field>
    <field name="fixed_n_elements">
      <type name="guint32"/>
    </field>
  </class>
  <class name="ParamSpecVariant" parent="ParamSpec" glib:type-name="GParamVariant" glib:get-type="intern" glib:fundamental="1">
    <field name="parent_instance">
      <type name="ParamSpec"/>
    </field>
    <field name="type">
      <type name="GLib.VariantType"/>
    </field>
    <field name="default_value">
      <type name="GLib.Variant"/>
    </field>
    <field name="padding">
      <array fixed-size="4">
        <type name="any"/>
      </array>
    </field>
  </class>
struct Parameter
{
  <field name="name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="value" writable="1">
    <type name="Value"/>
  </field>
};
  <constant name="SIGNAL_FLAGS_MASK" value="511">
    <type name="gint32"/>
  </constant>
  <constant name="SIGNAL_MATCH_MASK" value="63">
    <type name="gint32"/>
  </constant>
  <callback name="SignalAccumulator">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ihint" transfer-ownership="none">
        <type name="SignalInvocationHint"/>
      </parameter>
      <parameter name="return_accu" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="handler_return" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="SignalEmissionHook">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ihint" transfer-ownership="none">
        <type name="SignalInvocationHint"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <array length="1">
          <type name="Value"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="SignalFlags">
    <member name="run_first" value="1">
      <attribute name="c:identifier" value="G_SIGNAL_RUN_FIRST"/>
    </member>
    <member name="run_last" value="2">
      <attribute name="c:identifier" value="G_SIGNAL_RUN_LAST"/>
    </member>
    <member name="run_cleanup" value="4">
      <attribute name="c:identifier" value="G_SIGNAL_RUN_CLEANUP"/>
    </member>
    <member name="no_recurse" value="8">
      <attribute name="c:identifier" value="G_SIGNAL_NO_RECURSE"/>
    </member>
    <member name="detailed" value="16">
      <attribute name="c:identifier" value="G_SIGNAL_DETAILED"/>
    </member>
    <member name="action" value="32">
      <attribute name="c:identifier" value="G_SIGNAL_ACTION"/>
    </member>
    <member name="no_hooks" value="64">
      <attribute name="c:identifier" value="G_SIGNAL_NO_HOOKS"/>
    </member>
    <member name="must_collect" value="128">
      <attribute name="c:identifier" value="G_SIGNAL_MUST_COLLECT"/>
    </member>
    <member name="deprecated" value="256">
      <attribute name="c:identifier" value="G_SIGNAL_DEPRECATED"/>
    </member>
  </bitfield>
struct SignalInvocationHint
{
  <field name="signal_id" writable="1">
    <type name="guint32"/>
  </field>
  <field name="detail" writable="1">
    <type name="guint32"/>
  </field>
  <field name="run_type" writable="1">
    <type name="SignalFlags"/>
  </field>
};
  <bitfield name="SignalMatchType">
    <member name="id" value="1">
      <attribute name="c:identifier" value="G_SIGNAL_MATCH_ID"/>
    </member>
    <member name="detail" value="2">
      <attribute name="c:identifier" value="G_SIGNAL_MATCH_DETAIL"/>
    </member>
    <member name="closure" value="4">
      <attribute name="c:identifier" value="G_SIGNAL_MATCH_CLOSURE"/>
    </member>
    <member name="func" value="8">
      <attribute name="c:identifier" value="G_SIGNAL_MATCH_FUNC"/>
    </member>
    <member name="data" value="16">
      <attribute name="c:identifier" value="G_SIGNAL_MATCH_DATA"/>
    </member>
    <member name="unblocked" value="32">
      <attribute name="c:identifier" value="G_SIGNAL_MATCH_UNBLOCKED"/>
    </member>
  </bitfield>
struct SignalQuery
{
  <field name="signal_id" writable="1">
    <type name="guint32"/>
  </field>
  <field name="signal_name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="itype" writable="1">
    <type name="GType"/>
  </field>
  <field name="signal_flags" writable="1">
    <type name="SignalFlags"/>
  </field>
  <field name="return_type" writable="1">
    <type name="GType"/>
  </field>
  <field name="n_params" writable="1">
    <type name="guint32"/>
  </field>
  <field name="param_types" writable="1">
    <type name="GType"/>
  </field>
};
  <constant name="TYPE_FUNDAMENTAL_MAX" value="255">
    <type name="gint32"/>
  </constant>
  <constant name="TYPE_FUNDAMENTAL_SHIFT" value="2">
    <type name="gint32"/>
  </constant>
  <constant name="TYPE_RESERVED_BSE_FIRST" value="32">
    <type name="gint32"/>
  </constant>
  <constant name="TYPE_RESERVED_BSE_LAST" value="48">
    <type name="gint32"/>
  </constant>
  <constant name="TYPE_RESERVED_GLIB_FIRST" value="22">
    <type name="gint32"/>
  </constant>
  <constant name="TYPE_RESERVED_GLIB_LAST" value="31">
    <type name="gint32"/>
  </constant>
  <constant name="TYPE_RESERVED_USER_FIRST" value="49">
    <type name="gint32"/>
  </constant>
  <callback name="ToggleNotify">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="object" transfer-ownership="none">
        <type name="Object"/>
      </parameter>
      <parameter name="is_last_ref" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </callback>
  <union name="TypeCValue">
    <field name="v_int" writable="1">
      <type name="gint32"/>
    </field>
    <field name="v_long" writable="1">
      <type name="gint64"/>
    </field>
    <field name="v_int64" writable="1">
      <type name="gint64"/>
    </field>
    <field name="v_double" writable="1">
      <type name="gdouble"/>
    </field>
    <field name="v_pointer" writable="1">
      <type name="any"/>
    </field>
  </union>
struct TypeClass
{
  <field name="g_type">
    <type name="GType"/>
  </field>
  <method name="peek_parent" c:identifier="g_type_class_peek_parent">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_type_class_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="add_private" c:identifier="g_type_class_add_private">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="private_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="peek" c:identifier="g_type_class_peek">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="peek_static" c:identifier="g_type_class_peek_static">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="ref" c:identifier="g_type_class_ref">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
};
  <callback name="TypeClassCacheFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="cache_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="g_class" transfer-ownership="none">
        <type name="TypeClass"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="TypeDebugFlags">
    <member name="none" value="0">
      <attribute name="c:identifier" value="G_TYPE_DEBUG_NONE"/>
    </member>
    <member name="objects" value="1">
      <attribute name="c:identifier" value="G_TYPE_DEBUG_OBJECTS"/>
    </member>
    <member name="signals" value="2">
      <attribute name="c:identifier" value="G_TYPE_DEBUG_SIGNALS"/>
    </member>
    <member name="mask" value="3">
      <attribute name="c:identifier" value="G_TYPE_DEBUG_MASK"/>
    </member>
  </bitfield>
  <bitfield name="TypeFlags">
    <member name="abstract" value="16">
      <attribute name="c:identifier" value="G_TYPE_FLAG_ABSTRACT"/>
    </member>
    <member name="value_abstract" value="32">
      <attribute name="c:identifier" value="G_TYPE_FLAG_VALUE_ABSTRACT"/>
    </member>
  </bitfield>
  <bitfield name="TypeFundamentalFlags">
    <member name="classed" value="1">
      <attribute name="c:identifier" value="G_TYPE_FLAG_CLASSED"/>
    </member>
    <member name="instantiatable" value="2">
      <attribute name="c:identifier" value="G_TYPE_FLAG_INSTANTIATABLE"/>
    </member>
    <member name="derivable" value="4">
      <attribute name="c:identifier" value="G_TYPE_FLAG_DERIVABLE"/>
    </member>
    <member name="deep_derivable" value="8">
      <attribute name="c:identifier" value="G_TYPE_FLAG_DEEP_DERIVABLE"/>
    </member>
  </bitfield>
struct TypeFundamentalInfo
{
  <field name="type_flags" writable="1">
    <type name="TypeFundamentalFlags"/>
  </field>
};
struct TypeInfo
{
  <field name="class_size" writable="1">
    <type name="guint16"/>
  </field>
  <field name="base_init" writable="1">
    <callback name="BaseInitFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_class" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="base_finalize" writable="1">
    <callback name="BaseFinalizeFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_class" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="class_init" writable="1">
    <callback name="ClassInitFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_class" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="class_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="class_finalize" writable="1">
    <callback name="ClassFinalizeFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_class" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="class_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="class_data" writable="1">
    <type name="any"/>
  </field>
  <field name="instance_size" writable="1">
    <type name="guint16"/>
  </field>
  <field name="n_preallocs" writable="1">
    <type name="guint16"/>
  </field>
  <field name="instance_init" writable="1">
    <callback name="InstanceInitFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="instance" transfer-ownership="none">
          <type name="TypeInstance"/>
        </parameter>
        <parameter name="g_class" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_table" writable="1">
    <type name="TypeValueTable"/>
  </field>
};
struct TypeInstance
{
  <field name="g_class">
    <type name="TypeClass"/>
  </field>
};
struct TypeInterface
{
  <field name="g_type">
    <type name="GType"/>
  </field>
  <field name="g_instance_type">
    <type name="GType"/>
  </field>
  <method name="peek_parent" c:identifier="g_type_interface_peek_parent">
    <return-value transfer-ownership="none">
      <type name="TypeInterface"/>
    </return-value>
  </method>
  <function name="add_prerequisite" c:identifier="g_type_interface_add_prerequisite">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="prerequisite_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_plugin" c:identifier="g_type_interface_get_plugin">
    <return-value transfer-ownership="none">
      <type name="TypePlugin"/>
    </return-value>
    <parameters>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="peek" c:identifier="g_type_interface_peek">
    <return-value transfer-ownership="none">
      <type name="TypeInterface"/>
    </return-value>
    <parameters>
      <parameter name="instance_class" transfer-ownership="none">
        <type name="TypeClass"/>
      </parameter>
      <parameter name="iface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="prerequisites" c:identifier="g_type_interface_prerequisites">
    <return-value transfer-ownership="full">
      <array length="1">
        <type name="GType"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="n_prerequisites" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
};
  <callback name="TypeInterfaceCheckFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="check_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="g_iface" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <class name="TypeModule" parent="Object" glib:type-struct="TypeModuleClass" abstract="1" glib:type-name="GTypeModule" glib:get-type="g_type_module_get_type">
    <implements name="TypePlugin"/>
    <field name="parent_instance">
      <type name="Object"/>
    </field>
    <field name="use_count">
      <type name="guint32"/>
    </field>
    <field name="type_infos">
      <type name="GLib.SList">
        <type name="any"/>
      </type>
    </field>
    <field name="interface_infos">
      <type name="GLib.SList">
        <type name="any"/>
      </type>
    </field>
    <field name="name">
      <type name="utf8"/>
    </field>
    <method name="add_interface" c:identifier="g_type_module_add_interface">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="instance_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="interface_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="interface_info" transfer-ownership="none">
          <type name="InterfaceInfo"/>
        </parameter>
      </parameters>
    </method>
    <method name="register_enum" c:identifier="g_type_module_register_enum">
      <return-value transfer-ownership="none">
        <type name="GType"/>
      </return-value>
      <parameters>
        <parameter name="name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="const_static_values" transfer-ownership="none">
          <type name="EnumValue"/>
        </parameter>
      </parameters>
    </method>
    <method name="register_flags" c:identifier="g_type_module_register_flags">
      <return-value transfer-ownership="none">
        <type name="GType"/>
      </return-value>
      <parameters>
        <parameter name="name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="const_static_values" transfer-ownership="none">
          <type name="FlagsValue"/>
        </parameter>
      </parameters>
    </method>
    <method name="register_type" c:identifier="g_type_module_register_type">
      <return-value transfer-ownership="none">
        <type name="GType"/>
      </return-value>
      <parameters>
        <parameter name="parent_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="type_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="type_info" transfer-ownership="none">
          <type name="TypeInfo"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="TypeFlags"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_name" c:identifier="g_type_module_set_name">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="unuse" c:identifier="g_type_module_unuse">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="use" c:identifier="g_type_module_use">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <virtual-method name="load" offset="65535">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </virtual-method>
    <virtual-method name="unload" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
  </class>
struct TypeModuleClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="ObjectClass"/>
  </field>
  <field name="load">
    <callback name="load">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="module" transfer-ownership="none">
          <type name="TypeModule"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="unload">
    <callback name="unload">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="module" transfer-ownership="none">
          <type name="TypeModule"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="reserved1">
    <callback name="reserved1">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </callback>
  </field>
  <field name="reserved2">
    <callback name="reserved2">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </callback>
  </field>
  <field name="reserved3">
    <callback name="reserved3">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </callback>
  </field>
  <field name="reserved4">
    <callback name="reserved4">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </callback>
  </field>
};
  <interface name="TypePlugin" glib:type-name="GTypePlugin" glib:get-type="g_type_plugin_get_type">
    <method name="complete_interface_info" c:identifier="g_type_plugin_complete_interface_info">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="instance_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="interface_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="InterfaceInfo"/>
        </parameter>
      </parameters>
    </method>
    <method name="complete_type_info" c:identifier="g_type_plugin_complete_type_info">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="g_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="TypeInfo"/>
        </parameter>
        <parameter name="value_table" transfer-ownership="none">
          <type name="TypeValueTable"/>
        </parameter>
      </parameters>
    </method>
    <method name="unuse" c:identifier="g_type_plugin_unuse">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="use" c:identifier="g_type_plugin_use">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
  </interface>
struct TypePluginClass
{
  <field name="base_iface">
    <type name="TypeInterface"/>
  </field>
  <field name="use_plugin" writable="1">
    <callback name="TypePluginUse">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="plugin" transfer-ownership="none">
          <type name="TypePlugin"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="unuse_plugin" writable="1">
    <callback name="TypePluginUnuse">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="plugin" transfer-ownership="none">
          <type name="TypePlugin"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="complete_type_info" writable="1">
    <callback name="TypePluginCompleteTypeInfo">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="plugin" transfer-ownership="none">
          <type name="TypePlugin"/>
        </parameter>
        <parameter name="g_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="TypeInfo"/>
        </parameter>
        <parameter name="value_table" transfer-ownership="none">
          <type name="TypeValueTable"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="complete_interface_info" writable="1">
    <callback name="TypePluginCompleteInterfaceInfo">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="plugin" transfer-ownership="none">
          <type name="TypePlugin"/>
        </parameter>
        <parameter name="instance_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="interface_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="InterfaceInfo"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <callback name="TypePluginCompleteInterfaceInfo">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="plugin" transfer-ownership="none">
        <type name="TypePlugin"/>
      </parameter>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="InterfaceInfo"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="TypePluginCompleteTypeInfo">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="plugin" transfer-ownership="none">
        <type name="TypePlugin"/>
      </parameter>
      <parameter name="g_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="TypeInfo"/>
      </parameter>
      <parameter name="value_table" transfer-ownership="none">
        <type name="TypeValueTable"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="TypePluginUnuse">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="plugin" transfer-ownership="none">
        <type name="TypePlugin"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="TypePluginUse">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="plugin" transfer-ownership="none">
        <type name="TypePlugin"/>
      </parameter>
    </parameters>
  </callback>
struct TypeQuery
{
  <field name="type" writable="1">
    <type name="GType"/>
  </field>
  <field name="type_name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="class_size" writable="1">
    <type name="guint32"/>
  </field>
  <field name="instance_size" writable="1">
    <type name="guint32"/>
  </field>
};
struct TypeValueTable
{
  <field name="value_init">
    <callback name="value_init">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_free">
    <callback name="value_free">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_copy">
    <callback name="value_copy">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="src_value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="dest_value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="value_peek_pointer">
    <type name="any"/>
  </field>
  <field name="collect_format" writable="1">
    <type name="utf8"/>
  </field>
  <field name="collect_value">
    <callback name="collect_value">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="n_collect_values" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="collect_values" transfer-ownership="none">
          <type name="TypeCValue"/>
        </parameter>
        <parameter name="collect_flags" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="lcopy_format" writable="1">
    <type name="utf8"/>
  </field>
  <field name="lcopy_value">
    <callback name="lcopy_value">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="value" transfer-ownership="none">
          <type name="Value"/>
        </parameter>
        <parameter name="n_collect_values" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="collect_values" transfer-ownership="none">
          <type name="TypeCValue"/>
        </parameter>
        <parameter name="collect_flags" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <constant name="VALUE_COLLECT_FORMAT_MAX_LENGTH" value="8">
    <type name="gint32"/>
  </constant>
  <constant name="VALUE_NOCOPY_CONTENTS" value="134217728">
    <type name="gint32"/>
  </constant>
struct Value
{
 glib:type-name="GValue" glib:get-type="g_value_get_type"  <field name="g_type">
    <type name="GType"/>
  </field>
  <field name="data" writable="1">
    <array fixed-size="2">
      <type name="_Value__data__union"/>
    </array>
  </field>
  <method name="copy" c:identifier="g_value_copy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dest_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </method>
  <method name="dup_object" c:identifier="g_value_dup_object">
    <return-value transfer-ownership="full">
      <type name="Object"/>
    </return-value>
  </method>
  <method name="dup_string" c:identifier="g_value_dup_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="dup_variant" c:identifier="g_value_dup_variant">
    <return-value transfer-ownership="full">
      <type name="GLib.Variant"/>
    </return-value>
  </method>
  <method name="fits_pointer" c:identifier="g_value_fits_pointer">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_boolean" c:identifier="g_value_get_boolean">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_boxed" c:identifier="g_value_get_boxed">
    <return-value transfer-ownership="none">
      <type name="any"/>
    </return-value>
  </method>
  <method name="get_char" c:identifier="g_value_get_char" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
  </method>
  <method name="get_double" c:identifier="g_value_get_double">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </method>
  <method name="get_enum" c:identifier="g_value_get_enum">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_flags" c:identifier="g_value_get_flags">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_float" c:identifier="g_value_get_float">
    <return-value transfer-ownership="none">
      <type name="gfloat"/>
    </return-value>
  </method>
  <method name="get_gtype" c:identifier="g_value_get_gtype">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
  </method>
  <method name="get_int" c:identifier="g_value_get_int">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_int64" c:identifier="g_value_get_int64">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="get_long" c:identifier="g_value_get_long">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="get_object" c:identifier="g_value_get_object">
    <return-value transfer-ownership="none">
      <type name="Object"/>
    </return-value>
  </method>
  <method name="get_param" c:identifier="g_value_get_param">
    <return-value transfer-ownership="none">
      <type name="ParamSpec"/>
    </return-value>
  </method>
  <method name="get_pointer" c:identifier="g_value_get_pointer">
    <return-value transfer-ownership="none">
      <type name="any"/>
    </return-value>
  </method>
  <method name="get_schar" c:identifier="g_value_get_schar">
    <return-value transfer-ownership="none">
      <type name="gint8"/>
    </return-value>
  </method>
  <method name="get_string" c:identifier="g_value_get_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_uchar" c:identifier="g_value_get_uchar">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
  </method>
  <method name="get_uint" c:identifier="g_value_get_uint">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_uint64" c:identifier="g_value_get_uint64">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="get_ulong" c:identifier="g_value_get_ulong">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="get_variant" c:identifier="g_value_get_variant">
    <return-value transfer-ownership="full">
      <type name="GLib.Variant"/>
    </return-value>
  </method>
  <method name="init" c:identifier="g_value_init">
    <return-value transfer-ownership="none">
      <type name="Value"/>
    </return-value>
    <parameters>
      <parameter name="g_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </method>
  <method name="peek_pointer" c:identifier="g_value_peek_pointer">
    <return-value transfer-ownership="none">
      <type name="any"/>
    </return-value>
  </method>
  <method name="reset" c:identifier="g_value_reset">
    <return-value transfer-ownership="full">
      <type name="Value"/>
    </return-value>
  </method>
  <method name="set_boolean" c:identifier="g_value_set_boolean">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_boolean" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_boxed" c:identifier="g_value_set_boxed">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_boxed" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_boxed_take_ownership" c:identifier="g_value_set_boxed_take_ownership" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_boxed" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_char" c:identifier="g_value_set_char" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_char" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_double" c:identifier="g_value_set_double">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_double" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_enum" c:identifier="g_value_set_enum">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_enum" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_flags" c:identifier="g_value_set_flags">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_flags" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_float" c:identifier="g_value_set_float">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_float" transfer-ownership="none">
        <type name="gfloat"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_gtype" c:identifier="g_value_set_gtype">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_gtype" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_instance" c:identifier="g_value_set_instance">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_int" c:identifier="g_value_set_int">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_int" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_int64" c:identifier="g_value_set_int64">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_int64" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_long" c:identifier="g_value_set_long">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_long" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_object" c:identifier="g_value_set_object">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_object" transfer-ownership="none" allow-none="1">
        <type name="Object"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_param" c:identifier="g_value_set_param">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="param" transfer-ownership="none" allow-none="1">
        <type name="ParamSpec"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_pointer" c:identifier="g_value_set_pointer">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_pointer" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_schar" c:identifier="g_value_set_schar">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_char" transfer-ownership="none">
        <type name="gint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_static_boxed" c:identifier="g_value_set_static_boxed">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_boxed" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_static_string" c:identifier="g_value_set_static_string">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_string" c:identifier="g_value_set_string">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_string_take_ownership" c:identifier="g_value_set_string_take_ownership" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_uchar" c:identifier="g_value_set_uchar">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_uchar" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_uint" c:identifier="g_value_set_uint">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_uint" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_uint64" c:identifier="g_value_set_uint64">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_uint64" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_ulong" c:identifier="g_value_set_ulong">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_ulong" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_variant" c:identifier="g_value_set_variant">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="variant" transfer-ownership="none" allow-none="1">
        <type name="GLib.Variant"/>
      </parameter>
    </parameters>
  </method>
  <method name="take_boxed" c:identifier="g_value_take_boxed">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_boxed" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="take_string" c:identifier="g_value_take_string">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="v_string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="take_variant" c:identifier="g_value_take_variant">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="variant" transfer-ownership="none" allow-none="1">
        <type name="GLib.Variant"/>
      </parameter>
    </parameters>
  </method>
  <method name="transform" c:identifier="g_value_transform">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="dest_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </method>
  <method name="unset" c:identifier="g_value_unset">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="type_compatible" c:identifier="g_value_type_compatible">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="src_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="dest_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_transformable" c:identifier="g_value_type_transformable">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="src_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="dest_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
};
struct ValueArray
{
 glib:type-name="GValueArray" glib:get-type="g_value_array_get_type"  <field name="n_values" writable="1">
    <type name="guint32"/>
  </field>
  <field name="values" writable="1">
    <type name="Value"/>
  </field>
  <field name="n_prealloced">
    <type name="guint32"/>
  </field>
  <constructor name="new" c:identifier="g_value_array_new" deprecated="1">
    <return-value transfer-ownership="full">
      <type name="ValueArray"/>
    </return-value>
    <parameters>
      <parameter name="n_prealloced" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="append" c:identifier="g_value_array_append" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="ValueArray"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none" allow-none="1">
        <type name="Value"/>
      </parameter>
    </parameters>
  </method>
  <method name="copy" c:identifier="g_value_array_copy" deprecated="1">
    <return-value transfer-ownership="full">
      <type name="ValueArray"/>
    </return-value>
  </method>
  <method name="free" c:identifier="g_value_array_free" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_nth" c:identifier="g_value_array_get_nth" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="Value"/>
    </return-value>
    <parameters>
      <parameter name="index_" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="insert" c:identifier="g_value_array_insert" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="ValueArray"/>
    </return-value>
    <parameters>
      <parameter name="index_" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" allow-none="1">
        <type name="Value"/>
      </parameter>
    </parameters>
  </method>
  <method name="prepend" c:identifier="g_value_array_prepend" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="ValueArray"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none" allow-none="1">
        <type name="Value"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove" c:identifier="g_value_array_remove" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="ValueArray"/>
    </return-value>
    <parameters>
      <parameter name="index_" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="sort" c:identifier="g_value_array_sort_with_data" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="ValueArray"/>
    </return-value>
    <parameters>
      <parameter name="compare_func" transfer-ownership="none" scope="call" closure="1">
        <type name="GLib.CompareDataFunc"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
};
  <callback name="ValueTransform">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="src_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="dest_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="WeakNotify">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="where_the_object_was" transfer-ownership="none">
        <type name="Object"/>
      </parameter>
    </parameters>
  </callback>
struct WeakRef
{
};
  <union name="_Value__data__union">
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
    <field name="v_pointer" writable="1">
      <type name="any"/>
    </field>
  </union>
  <function name="boxed_free" c:identifier="g_boxed_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="boxed_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="boxed" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_BOOLEAN__BOXED_BOXED" c:identifier="g_cclosure_marshal_BOOLEAN__BOXED_BOXED">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_BOOLEAN__FLAGS" c:identifier="g_cclosure_marshal_BOOLEAN__FLAGS">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_STRING__OBJECT_POINTER" c:identifier="g_cclosure_marshal_STRING__OBJECT_POINTER">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__BOOLEAN" c:identifier="g_cclosure_marshal_VOID__BOOLEAN">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__BOXED" c:identifier="g_cclosure_marshal_VOID__BOXED">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__CHAR" c:identifier="g_cclosure_marshal_VOID__CHAR">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__DOUBLE" c:identifier="g_cclosure_marshal_VOID__DOUBLE">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__ENUM" c:identifier="g_cclosure_marshal_VOID__ENUM">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__FLAGS" c:identifier="g_cclosure_marshal_VOID__FLAGS">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__FLOAT" c:identifier="g_cclosure_marshal_VOID__FLOAT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__INT" c:identifier="g_cclosure_marshal_VOID__INT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__LONG" c:identifier="g_cclosure_marshal_VOID__LONG">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__OBJECT" c:identifier="g_cclosure_marshal_VOID__OBJECT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__PARAM" c:identifier="g_cclosure_marshal_VOID__PARAM">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__POINTER" c:identifier="g_cclosure_marshal_VOID__POINTER">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__STRING" c:identifier="g_cclosure_marshal_VOID__STRING">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__UCHAR" c:identifier="g_cclosure_marshal_VOID__UCHAR">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__UINT" c:identifier="g_cclosure_marshal_VOID__UINT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__UINT_POINTER" c:identifier="g_cclosure_marshal_VOID__UINT_POINTER">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__ULONG" c:identifier="g_cclosure_marshal_VOID__ULONG">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__VARIANT" c:identifier="g_cclosure_marshal_VOID__VARIANT">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_VOID__VOID" c:identifier="g_cclosure_marshal_VOID__VOID">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="cclosure_marshal_generic" c:identifier="g_cclosure_marshal_generic">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="return_gvalue" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="n_param_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="param_values" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="invocation_hint" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_complete_type_info" c:identifier="g_enum_complete_type_info">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_enum_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="TypeInfo"/>
      </parameter>
      <parameter name="const_values" transfer-ownership="none">
        <type name="EnumValue"/>
      </parameter>
    </parameters>
  </function>
  <function name="enum_register_static" c:identifier="g_enum_register_static">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="const_static_values" transfer-ownership="none">
        <type name="EnumValue"/>
      </parameter>
    </parameters>
  </function>
  <function name="flags_complete_type_info" c:identifier="g_flags_complete_type_info">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_flags_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="TypeInfo"/>
      </parameter>
      <parameter name="const_values" transfer-ownership="none">
        <type name="FlagsValue"/>
      </parameter>
    </parameters>
  </function>
  <function name="flags_register_static" c:identifier="g_flags_register_static">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="const_static_values" transfer-ownership="none">
        <type name="FlagsValue"/>
      </parameter>
    </parameters>
  </function>
  <function name="gtype_get_type" c:identifier="g_gtype_get_type">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
  </function>
  <function name="param_spec_pool_new" c:identifier="g_param_spec_pool_new">
    <return-value transfer-ownership="none">
      <type name="ParamSpecPool"/>
    </return-value>
    <parameters>
      <parameter name="type_prefixing" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="param_type_register_static" c:identifier="g_param_type_register_static">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="pspec_info" transfer-ownership="none">
        <type name="ParamSpecTypeInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="param_value_convert" c:identifier="g_param_value_convert">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
      <parameter name="src_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="dest_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="strict_validation" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="param_value_defaults" c:identifier="g_param_value_defaults">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="param_value_set_default" c:identifier="g_param_value_set_default">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="param_value_validate" c:identifier="g_param_value_validate">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="param_values_cmp" c:identifier="g_param_values_cmp">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="ParamSpec"/>
      </parameter>
      <parameter name="value1" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="value2" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="pointer_type_register_static" c:identifier="g_pointer_type_register_static">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_accumulator_first_wins" c:identifier="g_signal_accumulator_first_wins">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ihint" transfer-ownership="none">
        <type name="SignalInvocationHint"/>
      </parameter>
      <parameter name="return_accu" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="handler_return" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="dummy" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_accumulator_true_handled" c:identifier="g_signal_accumulator_true_handled">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ihint" transfer-ownership="none">
        <type name="SignalInvocationHint"/>
      </parameter>
      <parameter name="return_accu" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="handler_return" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="dummy" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_add_emission_hook" c:identifier="g_signal_add_emission_hook">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="hook_func" transfer-ownership="none" scope="notified" closure="3" destroy="4">
        <type name="SignalEmissionHook"/>
      </parameter>
      <parameter name="hook_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="data_destroy" transfer-ownership="none" scope="async">
        <type name="GLib.DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_chain_from_overridden" c:identifier="g_signal_chain_from_overridden">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance_and_params" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_connect_closure" c:identifier="g_signal_connect_closure">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="detailed_signal" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="after" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_connect_closure_by_id" c:identifier="g_signal_connect_closure_by_id">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
      <parameter name="after" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_emitv" c:identifier="g_signal_emitv">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance_and_params" transfer-ownership="none">
        <array>
          <type name="Value"/>
        </array>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="return_value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_get_invocation_hint" c:identifier="g_signal_get_invocation_hint">
    <return-value transfer-ownership="none">
      <type name="SignalInvocationHint"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handler_block" c:identifier="g_signal_handler_block">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="handler_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handler_disconnect" c:identifier="g_signal_handler_disconnect">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="handler_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handler_find" c:identifier="g_signal_handler_find">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="mask" transfer-ownership="none">
        <type name="SignalMatchType"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none" allow-none="1">
        <type name="Closure"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handler_is_connected" c:identifier="g_signal_handler_is_connected">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="handler_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handler_unblock" c:identifier="g_signal_handler_unblock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="handler_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handlers_block_matched" c:identifier="g_signal_handlers_block_matched">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="mask" transfer-ownership="none">
        <type name="SignalMatchType"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none" allow-none="1">
        <type name="Closure"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handlers_destroy" c:identifier="g_signal_handlers_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handlers_disconnect_matched" c:identifier="g_signal_handlers_disconnect_matched">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="mask" transfer-ownership="none">
        <type name="SignalMatchType"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none" allow-none="1">
        <type name="Closure"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_handlers_unblock_matched" c:identifier="g_signal_handlers_unblock_matched">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="mask" transfer-ownership="none">
        <type name="SignalMatchType"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none" allow-none="1">
        <type name="Closure"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_has_handler_pending" c:identifier="g_signal_has_handler_pending">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="may_be_blocked" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_list_ids" c:identifier="g_signal_list_ids">
    <return-value transfer-ownership="none">
      <array length="1">
        <type name="guint32"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="itype" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="n_ids" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_lookup" c:identifier="g_signal_lookup">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="itype" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_name" c:identifier="g_signal_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_override_class_closure" c:identifier="g_signal_override_class_closure">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="class_closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_parse_name" c:identifier="g_signal_parse_name">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="detailed_signal" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="itype" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="signal_id_p" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail_p" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint32"/>
      </parameter>
      <parameter name="force_detail_quark" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_query" c:identifier="g_signal_query">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="query" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="SignalQuery"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_remove_emission_hook" c:identifier="g_signal_remove_emission_hook">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="hook_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_set_va_marshaller" c:identifier="g_signal_set_va_marshaller">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="va_marshaller" transfer-ownership="none">
        <type name="VaClosureMarshal"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_stop_emission" c:identifier="g_signal_stop_emission">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="signal_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="detail" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_stop_emission_by_name" c:identifier="g_signal_stop_emission_by_name">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="detailed_signal" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="signal_type_cclosure_new" c:identifier="g_signal_type_cclosure_new">
    <return-value transfer-ownership="full">
      <type name="Closure"/>
    </return-value>
    <parameters>
      <parameter name="itype" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="struct_offset" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="source_set_closure" c:identifier="g_source_set_closure">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="source" transfer-ownership="none">
        <type name="GLib.Source"/>
      </parameter>
      <parameter name="closure" transfer-ownership="none">
        <type name="Closure"/>
      </parameter>
    </parameters>
  </function>
  <function name="source_set_dummy_callback" c:identifier="g_source_set_dummy_callback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="source" transfer-ownership="none">
        <type name="GLib.Source"/>
      </parameter>
    </parameters>
  </function>
  <function name="strdup_value_contents" c:identifier="g_strdup_value_contents">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_add_class_private" c:identifier="g_type_add_class_private">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="class_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="private_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_add_interface_dynamic" c:identifier="g_type_add_interface_dynamic">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="plugin" transfer-ownership="none">
        <type name="TypePlugin"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_add_interface_static" c:identifier="g_type_add_interface_static">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="InterfaceInfo"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_check_class_is_a" c:identifier="g_type_check_class_is_a">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="TypeClass"/>
      </parameter>
      <parameter name="is_a_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_check_instance" c:identifier="g_type_check_instance">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="TypeInstance"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_check_instance_is_a" c:identifier="g_type_check_instance_is_a">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="TypeInstance"/>
      </parameter>
      <parameter name="iface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_check_is_value_type" c:identifier="g_type_check_is_value_type">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_check_value" c:identifier="g_type_check_value">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_check_value_holds" c:identifier="g_type_check_value_holds">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="Value"/>
      </parameter>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_children" c:identifier="g_type_children">
    <return-value transfer-ownership="full">
      <array length="1">
        <type name="GType"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="n_children" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_class_add_private" c:identifier="g_type_class_add_private">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="private_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_class_peek" c:identifier="g_type_class_peek">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_class_peek_static" c:identifier="g_type_class_peek_static">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_class_ref" c:identifier="g_type_class_ref">
    <return-value transfer-ownership="none">
      <type name="TypeClass"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_default_interface_peek" c:identifier="g_type_default_interface_peek">
    <return-value transfer-ownership="none">
      <type name="TypeInterface"/>
    </return-value>
    <parameters>
      <parameter name="g_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_default_interface_ref" c:identifier="g_type_default_interface_ref">
    <return-value transfer-ownership="none">
      <type name="TypeInterface"/>
    </return-value>
    <parameters>
      <parameter name="g_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_default_interface_unref" c:identifier="g_type_default_interface_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="g_iface" transfer-ownership="none">
        <type name="TypeInterface"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_depth" c:identifier="g_type_depth">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_free_instance" c:identifier="g_type_free_instance">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="TypeInstance"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_from_name" c:identifier="g_type_from_name">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_fundamental" c:identifier="g_type_fundamental">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="type_id" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_fundamental_next" c:identifier="g_type_fundamental_next">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
  </function>
  <function name="type_get_plugin" c:identifier="g_type_get_plugin">
    <return-value transfer-ownership="none">
      <type name="TypePlugin"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_get_qdata" c:identifier="g_type_get_qdata">
    <return-value transfer-ownership="none">
      <type name="any"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="quark" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_init" c:identifier="g_type_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="type_init_with_debug_flags" c:identifier="g_type_init_with_debug_flags">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="debug_flags" transfer-ownership="none">
        <type name="TypeDebugFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_interface_add_prerequisite" c:identifier="g_type_interface_add_prerequisite">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="prerequisite_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_interface_get_plugin" c:identifier="g_type_interface_get_plugin">
    <return-value transfer-ownership="none">
      <type name="TypePlugin"/>
    </return-value>
    <parameters>
      <parameter name="instance_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_interface_peek" c:identifier="g_type_interface_peek">
    <return-value transfer-ownership="none">
      <type name="TypeInterface"/>
    </return-value>
    <parameters>
      <parameter name="instance_class" transfer-ownership="none">
        <type name="TypeClass"/>
      </parameter>
      <parameter name="iface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_interface_prerequisites" c:identifier="g_type_interface_prerequisites">
    <return-value transfer-ownership="full">
      <array length="1">
        <type name="GType"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="interface_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="n_prerequisites" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_interfaces" c:identifier="g_type_interfaces">
    <return-value transfer-ownership="full">
      <array length="1">
        <type name="GType"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="n_interfaces" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_is_a" c:identifier="g_type_is_a">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="is_a_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_name" c:identifier="g_type_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_name_from_class" c:identifier="g_type_name_from_class">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="g_class" transfer-ownership="none">
        <type name="TypeClass"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_name_from_instance" c:identifier="g_type_name_from_instance">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="instance" transfer-ownership="none">
        <type name="TypeInstance"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_next_base" c:identifier="g_type_next_base">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="leaf_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="root_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_parent" c:identifier="g_type_parent">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_qname" c:identifier="g_type_qname">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_query" c:identifier="g_type_query">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="query" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="TypeQuery"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_register_dynamic" c:identifier="g_type_register_dynamic">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="parent_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="type_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="plugin" transfer-ownership="none">
        <type name="TypePlugin"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="TypeFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_register_fundamental" c:identifier="g_type_register_fundamental">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="type_id" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="type_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="TypeInfo"/>
      </parameter>
      <parameter name="finfo" transfer-ownership="none">
        <type name="TypeFundamentalInfo"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="TypeFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_register_static" c:identifier="g_type_register_static">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
    <parameters>
      <parameter name="parent_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="type_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="TypeInfo"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="TypeFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_set_qdata" c:identifier="g_type_set_qdata">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="quark" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="type_test_flags" c:identifier="g_type_test_flags">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="value_type_compatible" c:identifier="g_value_type_compatible">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="src_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="dest_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
  <function name="value_type_transformable" c:identifier="g_value_type_transformable">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="src_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
      <parameter name="dest_type" transfer-ownership="none">
        <type name="GType"/>
      </parameter>
    </parameters>
  </function>
} // namespace GObject
</repository>
