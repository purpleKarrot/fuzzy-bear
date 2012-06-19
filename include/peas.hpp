<?xml version="1.0"?>
<repository version="1.0"
            xmlns="http://www.gtk.org/introspection/core/1.0"
            xmlns:c="http://www.gtk.org/introspection/c/1.0"
            xmlns:glib="http://www.gtk.org/introspection/glib/1.0">
  <include name="Gio" version="2.0"/>
  <include name="GObject" version="2.0"/>
  <include name="GModule" version="2.0"/>
  <include name="GLib" version="2.0"/>
  <include name="GIRepository" version="2.0"/>
namespace Peas
{
  <interface name="Activatable" glib:type-name="PeasActivatable" glib:get-type="peas_activatable_get_type" glib:type-struct="ActivatableInterface">
    <method name="activate" c:identifier="peas_activatable_activate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="deactivate" c:identifier="peas_activatable_deactivate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="update_state" c:identifier="peas_activatable_update_state">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <property name="object" writable="1" construct-only="1" transfer-ownership="none">
      <type name="GObject.Object"/>
    </property>
    <virtual-method name="activate" offset="65535" invoker="activate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="deactivate" offset="65535" invoker="deactivate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="update_state" offset="65535" invoker="update_state">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
  </interface>
struct ActivatableInterface
{
 glib:is-gtype-struct="1"  <field name="g_iface">
    <type name="GObject.TypeInterface"/>
  </field>
  <field name="activate">
    <callback name="activate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="activatable" transfer-ownership="none">
          <type name="Activatable"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="deactivate">
    <callback name="deactivate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="activatable" transfer-ownership="none">
          <type name="Activatable"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="update_state">
    <callback name="update_state">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="activatable" transfer-ownership="none">
          <type name="Activatable"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <class name="Engine" parent="GObject.Object" glib:type-struct="EngineClass" glib:type-name="PeasEngine" glib:get-type="peas_engine_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="priv">
      <type name="EnginePrivate"/>
    </field>
    <constructor name="new" c:identifier="peas_engine_new">
      <return-value transfer-ownership="full">
        <type name="Engine"/>
      </return-value>
    </constructor>
    <function name="get_default" c:identifier="peas_engine_get_default">
      <return-value transfer-ownership="none">
        <type name="Engine"/>
      </return-value>
    </function>
    <method name="add_search_path" c:identifier="peas_engine_add_search_path">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="module_dir" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="data_dir" transfer-ownership="none" allow-none="1">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="create_extension" c:identifier="peas_engine_create_extensionv">
      <return-value transfer-ownership="full">
        <type name="GObject.Object"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="extension_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="n_parameters" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="parameters" transfer-ownership="none" allow-none="1">
          <array length="2">
            <type name="GObject.Parameter"/>
          </array>
        </parameter>
      </parameters>
    </method>
    <method name="enable_loader" c:identifier="peas_engine_enable_loader">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="loader_id" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="garbage_collect" c:identifier="peas_engine_garbage_collect">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="get_loaded_plugins" c:identifier="peas_engine_get_loaded_plugins">
      <return-value transfer-ownership="full">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </return-value>
    </method>
    <method name="get_plugin_info" c:identifier="peas_engine_get_plugin_info">
      <return-value transfer-ownership="none">
        <type name="PluginInfo"/>
      </return-value>
      <parameters>
        <parameter name="plugin_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_plugin_list" c:identifier="peas_engine_get_plugin_list">
      <return-value transfer-ownership="none">
        <type name="GLib.List">
          <type name="PluginInfo"/>
        </type>
      </return-value>
    </method>
    <method name="load_plugin" c:identifier="peas_engine_load_plugin">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </method>
    <method name="provides_extension" c:identifier="peas_engine_provides_extension">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="extension_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="rescan_plugins" c:identifier="peas_engine_rescan_plugins">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="set_loaded_plugins" c:identifier="peas_engine_set_loaded_plugins">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="plugin_names" transfer-ownership="none" allow-none="1">
          <array zero-terminated="1">
            <type name="utf8"/>
          </array>
        </parameter>
      </parameters>
    </method>
    <method name="unload_plugin" c:identifier="peas_engine_unload_plugin">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </method>
    <property name="loaded-plugins" writable="1" transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </property>
    <property name="plugin-list" transfer-ownership="none">
      <type name="any"/>
    </property>
    <glib:signal name="load-plugin" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="unload-plugin" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="load_plugin" offset="65535" invoker="load_plugin">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="unload_plugin" offset="65535" invoker="unload_plugin">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
struct EngineClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="load_plugin">
    <callback name="load_plugin">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="engine" transfer-ownership="none">
          <type name="Engine"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="unload_plugin">
    <callback name="unload_plugin">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="engine" transfer-ownership="none">
          <type name="Engine"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="padding">
    <array fixed-size="8">
      <type name="any"/>
    </array>
  </field>
};
struct EnginePrivate
{
};
  <class name="ExtensionBase" parent="GObject.Object" glib:type-struct="ExtensionBaseClass" abstract="1" glib:type-name="PeasExtensionBase" glib:get-type="peas_extension_base_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="priv">
      <type name="ExtensionBasePrivate"/>
    </field>
    <method name="get_data_dir" c:identifier="peas_extension_base_get_data_dir">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_plugin_info" c:identifier="peas_extension_base_get_plugin_info">
      <return-value transfer-ownership="none">
        <type name="PluginInfo"/>
      </return-value>
    </method>
    <property name="data-dir" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="plugin-info" writable="1" construct-only="1" transfer-ownership="none">
      <type name="PluginInfo"/>
    </property>
  </class>
struct ExtensionBaseClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="padding">
    <array fixed-size="8">
      <type name="any"/>
    </array>
  </field>
};
struct ExtensionBasePrivate
{
};
  <class name="ExtensionSet" parent="GObject.Object" glib:type-struct="ExtensionSetClass" glib:type-name="PeasExtensionSet" glib:get-type="peas_extension_set_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="priv">
      <type name="ExtensionSetPrivate"/>
    </field>
    <constructor name="new" c:identifier="peas_extension_set_newv">
      <return-value transfer-ownership="full">
        <type name="ExtensionSet"/>
      </return-value>
      <parameters>
        <parameter name="engine" transfer-ownership="none" allow-none="1">
          <type name="Engine"/>
        </parameter>
        <parameter name="exten_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="n_parameters" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="parameters" transfer-ownership="none">
          <array length="2">
            <type name="GObject.Parameter"/>
          </array>
        </parameter>
      </parameters>
    </constructor>
    <method name="foreach" c:identifier="peas_extension_set_foreach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="func" transfer-ownership="none" scope="call" closure="1">
          <type name="ExtensionSetForeachFunc"/>
        </parameter>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_extension" c:identifier="peas_extension_set_get_extension">
      <return-value transfer-ownership="none">
        <type name="GObject.Object"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
      </parameters>
    </method>
    <property name="construct-properties" readable="0" writable="1" construct-only="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="engine" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Engine"/>
    </property>
    <property name="extension-type" writable="1" construct-only="1" transfer-ownership="none">
      <type name="GType"/>
    </property>
    <glib:signal name="extension-added" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="exten" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="extension-removed" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="exten" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="extension_added" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="exten" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="extension_removed" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="exten" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
struct ExtensionSetClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="call">
    <type name="any"/>
  </field>
  <field name="extension_added">
    <callback name="extension_added">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="set" transfer-ownership="none">
          <type name="ExtensionSet"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="exten" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="extension_removed">
    <callback name="extension_removed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="set" transfer-ownership="none">
          <type name="ExtensionSet"/>
        </parameter>
        <parameter name="info" transfer-ownership="none">
          <type name="PluginInfo"/>
        </parameter>
        <parameter name="exten" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="padding">
    <array fixed-size="8">
      <type name="any"/>
    </array>
  </field>
};
  <callback name="ExtensionSetForeachFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="set" transfer-ownership="none">
        <type name="ExtensionSet"/>
      </parameter>
      <parameter name="info" transfer-ownership="none">
        <type name="PluginInfo"/>
      </parameter>
      <parameter name="exten" transfer-ownership="none">
        <type name="GObject.Object"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct ExtensionSetPrivate
{
};
  <callback name="FactoryFunc">
    <return-value transfer-ownership="full">
      <type name="GObject.Object"/>
    </return-value>
    <parameters>
      <parameter name="n_parameters" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="parameters" transfer-ownership="none">
        <array length="0">
          <type name="GObject.Parameter"/>
        </array>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <class name="ObjectModule" parent="GObject.TypeModule" glib:type-struct="ObjectModuleClass" glib:type-name="PeasObjectModule" glib:get-type="peas_object_module_get_type">
    <implements name="GObject.TypePlugin"/>
    <field name="parent">
      <type name="GObject.TypeModule"/>
    </field>
    <field name="priv">
      <type name="ObjectModulePrivate"/>
    </field>
    <method name="register_extension_factory" c:identifier="peas_object_module_register_extension_factory">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="iface_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="factory_func" transfer-ownership="none" scope="notified" closure="2" destroy="3">
          <type name="FactoryFunc"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="destroy_func" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="register_extension_type" c:identifier="peas_object_module_register_extension_type">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="iface_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="extension_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <property name="module-name" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="path" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="resident" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
  </class>
struct ObjectModuleClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.TypeModuleClass"/>
  </field>
  <field name="padding">
    <array fixed-size="8">
      <type name="any"/>
    </array>
  </field>
};
struct ObjectModulePrivate
{
};
struct PluginInfo
{
 glib:type-name="PeasPluginInfo" glib:get-type="peas_plugin_info_get_type"  <method name="get_authors" c:identifier="peas_plugin_info_get_authors">
    <return-value transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </method>
  <method name="get_copyright" c:identifier="peas_plugin_info_get_copyright">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_data_dir" c:identifier="peas_plugin_info_get_data_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_dependencies" c:identifier="peas_plugin_info_get_dependencies">
    <return-value transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </method>
  <method name="get_description" c:identifier="peas_plugin_info_get_description">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_help_uri" c:identifier="peas_plugin_info_get_help_uri">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_icon_name" c:identifier="peas_plugin_info_get_icon_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_module_dir" c:identifier="peas_plugin_info_get_module_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_module_name" c:identifier="peas_plugin_info_get_module_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_name" c:identifier="peas_plugin_info_get_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_settings" c:identifier="peas_plugin_info_get_settings">
    <return-value transfer-ownership="full">
      <type name="Gio.Settings"/>
    </return-value>
    <parameters>
      <parameter name="schema_id" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_version" c:identifier="peas_plugin_info_get_version">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_website" c:identifier="peas_plugin_info_get_website">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="has_dependency" c:identifier="peas_plugin_info_has_dependency">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="module_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="is_available" c:identifier="peas_plugin_info_is_available" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_builtin" c:identifier="peas_plugin_info_is_builtin">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_hidden" c:identifier="peas_plugin_info_is_hidden">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_loaded" c:identifier="peas_plugin_info_is_loaded">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <function name="error_quark" c:identifier="peas_plugin_info_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
};
  <enumeration name="PluginInfoError" glib:error-domain="peas-plugin-info-error">
    <member name="loading_failed" value="0">
      <attribute name="c:identifier" value="PEAS_PLUGIN_INFO_ERROR_LOADING_FAILED"/>
    </member>
    <member name="loader_not_found" value="1">
      <attribute name="c:identifier" value="PEAS_PLUGIN_INFO_ERROR_LOADER_NOT_FOUND"/>
    </member>
    <member name="dep_not_found" value="2">
      <attribute name="c:identifier" value="PEAS_PLUGIN_INFO_ERROR_DEP_NOT_FOUND"/>
    </member>
    <member name="dep_loading_failed" value="3">
      <attribute name="c:identifier" value="PEAS_PLUGIN_INFO_ERROR_DEP_LOADING_FAILED"/>
    </member>
  </enumeration>
  <function name="plugin_info_error_quark" c:identifier="peas_plugin_info_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
} // namespace Peas
</repository>
