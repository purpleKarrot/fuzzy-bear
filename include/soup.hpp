<?xml version="1.0"?>
<repository version="1.0"
            xmlns="http://www.gtk.org/introspection/core/1.0"
            xmlns:c="http://www.gtk.org/introspection/c/1.0"
            xmlns:glib="http://www.gtk.org/introspection/glib/1.0">
  <include name="Gio" version="2.0"/>
  <include name="GObject" version="2.0"/>
  <include name="GLib" version="2.0"/>
namespace Soup
{
  <constant name="ADDRESS_ANY_PORT" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="ADDRESS_FAMILY" value="family">
    <type name="utf8"/>
  </constant>
  <constant name="ADDRESS_NAME" value="name">
    <type name="utf8"/>
  </constant>
  <constant name="ADDRESS_PHYSICAL" value="physical">
    <type name="utf8"/>
  </constant>
  <constant name="ADDRESS_PORT" value="port">
    <type name="utf8"/>
  </constant>
  <constant name="ADDRESS_SOCKADDR" value="sockaddr">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_ADD_PATH" value="add-path">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_BASIC_AUTH_CALLBACK" value="auth-callback">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_BASIC_AUTH_DATA" value="auth-data">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_BASIC_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="AUTH_DOMAIN_DIGEST_AUTH_CALLBACK" value="auth-callback">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_DIGEST_AUTH_DATA" value="auth-data">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_DIGEST_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="AUTH_DOMAIN_FILTER" value="filter">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_FILTER_DATA" value="filter-data">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_GENERIC_AUTH_CALLBACK" value="generic-auth-callback">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_GENERIC_AUTH_DATA" value="generic-auth-data">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="AUTH_DOMAIN_PROXY" value="proxy">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_REALM" value="realm">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_DOMAIN_REMOVE_PATH" value="remove-path">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="AUTH_HOST" value="host">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_IS_AUTHENTICATED" value="is-authenticated">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_IS_FOR_PROXY" value="is-for-proxy">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_REALM" value="realm">
    <type name="utf8"/>
  </constant>
  <constant name="AUTH_SCHEME_NAME" value="scheme-name">
    <type name="utf8"/>
  </constant>
  <class name="Address" parent="GObject.Object" glib:type-struct="AddressClass" glib:type-name="SoupAddress" glib:get-type="soup_address_get_type">
    <implements name="Gio.SocketConnectable"/>
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <constructor name="new" c:identifier="soup_address_new">
      <return-value transfer-ownership="full">
        <type name="Address"/>
      </return-value>
      <parameters>
        <parameter name="name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="port" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </constructor>
    <constructor name="new_any" c:identifier="soup_address_new_any">
      <return-value transfer-ownership="full">
        <type name="Address"/>
      </return-value>
      <parameters>
        <parameter name="family" transfer-ownership="none">
          <type name="AddressFamily"/>
        </parameter>
        <parameter name="port" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </constructor>
    <constructor name="new_from_sockaddr" c:identifier="soup_address_new_from_sockaddr">
      <return-value transfer-ownership="full">
        <type name="Address"/>
      </return-value>
      <parameters>
        <parameter name="sa" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="len" transfer-ownership="none">
          <type name="gint32"/>
        </parameter>
      </parameters>
    </constructor>
    <method name="equal_by_ip" c:identifier="soup_address_equal_by_ip">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="addr2" transfer-ownership="none">
          <type name="Address"/>
        </parameter>
      </parameters>
    </method>
    <method name="equal_by_name" c:identifier="soup_address_equal_by_name">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="addr2" transfer-ownership="none">
          <type name="Address"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_gsockaddr" c:identifier="soup_address_get_gsockaddr">
      <return-value transfer-ownership="full">
        <type name="Gio.SocketAddress"/>
      </return-value>
    </method>
    <method name="get_name" c:identifier="soup_address_get_name">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_physical" c:identifier="soup_address_get_physical">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_port" c:identifier="soup_address_get_port">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
    </method>
    <method name="get_sockaddr" c:identifier="soup_address_get_sockaddr">
      <return-value transfer-ownership="none">
        <type name="any"/>
      </return-value>
      <parameters>
        <parameter name="len" transfer-ownership="none">
          <type name="gint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="hash_by_ip" c:identifier="soup_address_hash_by_ip">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
    </method>
    <method name="hash_by_name" c:identifier="soup_address_hash_by_name">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
    </method>
    <method name="is_resolved" c:identifier="soup_address_is_resolved">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="resolve_async" c:identifier="soup_address_resolve_async">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="async_context" transfer-ownership="none" allow-none="1">
          <type name="GLib.MainContext"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" scope="async" closure="3">
          <type name="AddressCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="resolve_sync" c:identifier="soup_address_resolve_sync">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <property name="family" writable="1" construct-only="1" transfer-ownership="none">
      <type name="AddressFamily"/>
    </property>
    <property name="name" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="physical" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="port" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gint32"/>
    </property>
    <property name="sockaddr" writable="1" construct-only="1" transfer-ownership="none">
      <type name="any"/>
    </property>
  </class>
  <callback name="AddressCallback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="addr" transfer-ownership="none">
        <type name="Address"/>
      </parameter>
      <parameter name="status" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct AddressClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <enumeration name="AddressFamily" glib:type-name="SoupAddressFamily" glib:get-type="soup_address_family_get_type">
    <member name="invalid" value="-1">
      <attribute name="c:identifier" value="SOUP_ADDRESS_FAMILY_INVALID"/>
    </member>
    <member name="ipv4" value="2">
      <attribute name="c:identifier" value="SOUP_ADDRESS_FAMILY_IPV4"/>
    </member>
    <member name="ipv6" value="10">
      <attribute name="c:identifier" value="SOUP_ADDRESS_FAMILY_IPV6"/>
    </member>
  </enumeration>
  <class name="Auth" parent="GObject.Object" glib:type-struct="AuthClass" abstract="1" glib:type-name="SoupAuth" glib:get-type="soup_auth_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="realm">
      <type name="utf8"/>
    </field>
    <constructor name="new" c:identifier="soup_auth_new">
      <return-value transfer-ownership="full">
        <type name="Auth"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth_header" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </constructor>
    <method name="authenticate" c:identifier="soup_auth_authenticate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_authorization" c:identifier="soup_auth_get_authorization">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_host" c:identifier="soup_auth_get_host">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_info" c:identifier="soup_auth_get_info">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_protection_space" c:identifier="soup_auth_get_protection_space">
      <return-value transfer-ownership="full">
        <type name="GLib.SList">
          <type name="utf8"/>
        </type>
      </return-value>
      <parameters>
        <parameter name="source_uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_realm" c:identifier="soup_auth_get_realm">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="get_scheme_name" c:identifier="soup_auth_get_scheme_name">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="is_authenticated" c:identifier="soup_auth_is_authenticated">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="is_for_proxy" c:identifier="soup_auth_is_for_proxy">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="update" c:identifier="soup_auth_update">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth_header" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <property name="host" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="is-authenticated" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="is-for-proxy" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="realm" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="scheme-name" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <glib:signal name="save-password" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="authenticate" offset="65535" invoker="authenticate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="get_authorization" offset="65535" invoker="get_authorization">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="get_protection_space" offset="65535" invoker="get_protection_space">
      <return-value transfer-ownership="full">
        <type name="GLib.SList">
          <type name="utf8"/>
        </type>
      </return-value>
      <parameters>
        <parameter name="source_uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="is_authenticated" offset="65535" invoker="is_authenticated">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </virtual-method>
    <virtual-method name="update" offset="65535" invoker="update">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth_params" transfer-ownership="none">
          <type name="GLib.HashTable">
            <type name="any"/>
            <type name="any"/>
          </type>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
  <class name="AuthBasic" parent="Auth" glib:type-name="SoupAuthBasic" glib:get-type="soup_auth_basic_get_type"/>
struct AuthClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="scheme_name">
    <type name="utf8"/>
  </field>
  <field name="strength">
    <type name="guint32"/>
  </field>
  <field name="update">
    <callback name="update">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth_params" transfer-ownership="none">
          <type name="GLib.HashTable">
            <type name="any"/>
            <type name="any"/>
          </type>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get_protection_space">
    <callback name="get_protection_space">
      <return-value transfer-ownership="full">
        <type name="GLib.SList">
          <type name="utf8"/>
        </type>
      </return-value>
      <parameters>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="source_uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="authenticate">
    <callback name="authenticate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="is_authenticated">
    <callback name="is_authenticated">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get_authorization">
    <callback name="get_authorization">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <class name="AuthDigest" parent="Auth" glib:type-name="SoupAuthDigest" glib:get-type="soup_auth_digest_get_type"/>
  <class name="AuthDomain" parent="GObject.Object" glib:type-struct="AuthDomainClass" abstract="1" glib:type-name="SoupAuthDomain" glib:get-type="soup_auth_domain_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <method name="accepts" c:identifier="soup_auth_domain_accepts">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="add_path" c:identifier="soup_auth_domain_add_path">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="path" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="basic_set_auth_callback" c:identifier="soup_auth_domain_basic_set_auth_callback">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="callback" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="AuthDomainBasicAuthCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="dnotify" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="challenge" c:identifier="soup_auth_domain_challenge">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="check_password" c:identifier="soup_auth_domain_check_password">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="covers" c:identifier="soup_auth_domain_covers">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="digest_set_auth_callback" c:identifier="soup_auth_domain_digest_set_auth_callback">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="callback" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="AuthDomainDigestAuthCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="dnotify" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_realm" c:identifier="soup_auth_domain_get_realm">
      <return-value transfer-ownership="none">
        <type name="utf8"/>
      </return-value>
    </method>
    <method name="remove_path" c:identifier="soup_auth_domain_remove_path">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="path" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_filter" c:identifier="soup_auth_domain_set_filter">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="filter" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="AuthDomainFilter"/>
        </parameter>
        <parameter name="filter_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="dnotify" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_generic_auth_callback" c:identifier="soup_auth_domain_set_generic_auth_callback">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="auth_callback" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="AuthDomainGenericAuthCallback"/>
        </parameter>
        <parameter name="auth_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="dnotify" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="try_generic_auth_callback" c:identifier="soup_auth_domain_try_generic_auth_callback">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <property name="add-path" readable="0" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="filter" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="filter-data" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="generic-auth-callback" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="generic-auth-data" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="proxy" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="realm" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="remove-path" readable="0" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <virtual-method name="accepts" offset="65535">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="header" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="challenge" offset="65535">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="check_password" offset="65535" invoker="check_password">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
  <class name="AuthDomainBasic" parent="AuthDomain" glib:type-struct="AuthDomainBasicClass" glib:type-name="SoupAuthDomainBasic" glib:get-type="soup_auth_domain_basic_get_type">
    <field name="parent">
      <type name="AuthDomain"/>
    </field>
    <property name="auth-callback" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="auth-data" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
  </class>
  <callback name="AuthDomainBasicAuthCallback">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="AuthDomain"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="username" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="password" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="4">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct AuthDomainBasicClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="AuthDomainClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
struct AuthDomainClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="accepts">
    <callback name="accepts">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="domain" transfer-ownership="none">
          <type name="AuthDomain"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="header" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="challenge">
    <callback name="challenge">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="domain" transfer-ownership="none">
          <type name="AuthDomain"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="check_password">
    <callback name="check_password">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="domain" transfer-ownership="none">
          <type name="AuthDomain"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <class name="AuthDomainDigest" parent="AuthDomain" glib:type-struct="AuthDomainDigestClass" glib:type-name="SoupAuthDomainDigest" glib:get-type="soup_auth_domain_digest_get_type">
    <field name="parent">
      <type name="AuthDomain"/>
    </field>
    <function name="encode_password" c:identifier="soup_auth_domain_digest_encode_password">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="username" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="realm" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="password" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </function>
    <property name="auth-callback" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="auth-data" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
  </class>
  <callback name="AuthDomainDigestAuthCallback">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="AuthDomain"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="username" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="3">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct AuthDomainDigestClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="AuthDomainClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <callback name="AuthDomainFilter">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="AuthDomain"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="AuthDomainGenericAuthCallback">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="AuthDomain"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="username" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="3">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <class name="AuthNTLM" parent="Auth" glib:type-name="SoupAuthNTLM" glib:get-type="soup_auth_ntlm_get_type"/>
struct Buffer
{
 glib:type-name="SoupBuffer" glib:get-type="soup_buffer_get_type"  <field name="data" writable="1">
    <type name="any"/>
  </field>
  <field name="length" writable="1">
    <type name="guint64"/>
  </field>
  <constructor name="new" c:identifier="soup_buffer_new_take">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="full">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_with_owner" c:identifier="soup_buffer_new_with_owner">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="owner" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="owner_dnotify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="GLib.DestroyNotify"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="copy" c:identifier="soup_buffer_copy">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
  </method>
  <method name="free" c:identifier="soup_buffer_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_data" c:identifier="soup_buffer_get_data">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none" direction="out" caller-allocates="0">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_owner" c:identifier="soup_buffer_get_owner">
    <return-value transfer-ownership="none">
      <type name="any"/>
    </return-value>
  </method>
  <method name="new_subbuffer" c:identifier="soup_buffer_new_subbuffer">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
    <parameters>
      <parameter name="offset" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
};
struct ByteArray //boxed
{
 glib:type-name="SoupByteArray" glib:get-type="soup_byte_array_get_type"};
  <constant name="CACHE_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="CHAR_HTTP_CTL" value="16">
    <type name="gint32"/>
  </constant>
  <constant name="CHAR_HTTP_SEPARATOR" value="8">
    <type name="gint32"/>
  </constant>
  <constant name="CHAR_URI_GEN_DELIMS" value="2">
    <type name="gint32"/>
  </constant>
  <constant name="CHAR_URI_PERCENT_ENCODED" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="CHAR_URI_SUB_DELIMS" value="4">
    <type name="gint32"/>
  </constant>
  <constant name="CONTENT_DECODER_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="CONTENT_SNIFFER_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_JAR_ACCEPT_POLICY" value="accept-policy">
    <type name="utf8"/>
  </constant>
  <constant name="COOKIE_JAR_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_JAR_READ_ONLY" value="read-only">
    <type name="utf8"/>
  </constant>
  <constant name="COOKIE_JAR_TEXT_FILENAME" value="filename">
    <type name="utf8"/>
  </constant>
  <constant name="COOKIE_JAR_TEXT_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_MAX_AGE_ONE_DAY" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_MAX_AGE_ONE_HOUR" value="3600">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_MAX_AGE_ONE_WEEK" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="COOKIE_MAX_AGE_ONE_YEAR" value="0">
    <type name="gint32"/>
  </constant>
  <enumeration name="CacheResponse" glib:type-name="SoupCacheResponse" glib:get-type="soup_cache_response_get_type">
    <member name="fresh" value="0">
      <attribute name="c:identifier" value="SOUP_CACHE_RESPONSE_FRESH"/>
    </member>
    <member name="needs_validation" value="1">
      <attribute name="c:identifier" value="SOUP_CACHE_RESPONSE_NEEDS_VALIDATION"/>
    </member>
    <member name="stale" value="2">
      <attribute name="c:identifier" value="SOUP_CACHE_RESPONSE_STALE"/>
    </member>
  </enumeration>
  <enumeration name="CacheType" glib:type-name="SoupCacheType" glib:get-type="soup_cache_type_get_type">
    <member name="single_user" value="0">
      <attribute name="c:identifier" value="SOUP_CACHE_SINGLE_USER"/>
    </member>
    <member name="shared" value="1">
      <attribute name="c:identifier" value="SOUP_CACHE_SHARED"/>
    </member>
  </enumeration>
  <bitfield name="Cacheability" glib:type-name="SoupCacheability" glib:get-type="soup_cacheability_get_type">
    <member name="cacheable" value="1">
      <attribute name="c:identifier" value="SOUP_CACHE_CACHEABLE"/>
    </member>
    <member name="uncacheable" value="2">
      <attribute name="c:identifier" value="SOUP_CACHE_UNCACHEABLE"/>
    </member>
    <member name="invalidates" value="4">
      <attribute name="c:identifier" value="SOUP_CACHE_INVALIDATES"/>
    </member>
    <member name="validates" value="8">
      <attribute name="c:identifier" value="SOUP_CACHE_VALIDATES"/>
    </member>
  </bitfield>
  <callback name="ChunkAllocator">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
    <parameters>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="max_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct ClientContext
{
 glib:type-name="SoupClientContext" glib:get-type="soup_client_context_get_type"  <method name="get_address" c:identifier="soup_client_context_get_address">
    <return-value transfer-ownership="none">
      <type name="Address"/>
    </return-value>
  </method>
  <method name="get_auth_domain" c:identifier="soup_client_context_get_auth_domain">
    <return-value transfer-ownership="none">
      <type name="AuthDomain"/>
    </return-value>
  </method>
  <method name="get_auth_user" c:identifier="soup_client_context_get_auth_user">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_host" c:identifier="soup_client_context_get_host">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_socket" c:identifier="soup_client_context_get_socket">
    <return-value transfer-ownership="none">
      <type name="Socket"/>
    </return-value>
  </method>
};
struct Connection
{
};
  <enumeration name="ConnectionState" glib:type-name="SoupConnectionState" glib:get-type="soup_connection_state_get_type">
    <member name="new" value="0">
      <attribute name="c:identifier" value="SOUP_CONNECTION_NEW"/>
    </member>
    <member name="connecting" value="1">
      <attribute name="c:identifier" value="SOUP_CONNECTION_CONNECTING"/>
    </member>
    <member name="idle" value="2">
      <attribute name="c:identifier" value="SOUP_CONNECTION_IDLE"/>
    </member>
    <member name="in_use" value="3">
      <attribute name="c:identifier" value="SOUP_CONNECTION_IN_USE"/>
    </member>
    <member name="remote_disconnected" value="4">
      <attribute name="c:identifier" value="SOUP_CONNECTION_REMOTE_DISCONNECTED"/>
    </member>
    <member name="disconnected" value="5">
      <attribute name="c:identifier" value="SOUP_CONNECTION_DISCONNECTED"/>
    </member>
  </enumeration>
  <class name="ContentDecoder" parent="GObject.Object" glib:type-struct="ContentDecoderClass" glib:type-name="SoupContentDecoder" glib:get-type="soup_content_decoder_get_type">
    <implements name="SessionFeature"/>
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="priv">
      <type name="ContentDecoderPrivate"/>
    </field>
  </class>
struct ContentDecoderClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved5">
    <type name="any"/>
  </field>
};
struct ContentDecoderPrivate
{
};
  <class name="ContentSniffer" parent="GObject.Object" glib:type-struct="ContentSnifferClass" glib:type-name="SoupContentSniffer" glib:get-type="soup_content_sniffer_get_type">
    <implements name="SessionFeature"/>
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="priv">
      <type name="ContentSnifferPrivate"/>
    </field>
    <constructor name="new" c:identifier="soup_content_sniffer_new">
      <return-value transfer-ownership="full">
        <type name="ContentSniffer"/>
      </return-value>
    </constructor>
    <method name="sniff" c:identifier="soup_content_sniffer_sniff">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="buffer" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
        <parameter name="params" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
          <type name="GLib.HashTable">
            <type name="utf8"/>
            <type name="utf8"/>
          </type>
        </parameter>
      </parameters>
    </method>
    <virtual-method name="get_buffer_size" offset="65535">
      <return-value transfer-ownership="none">
        <type name="guint64"/>
      </return-value>
    </virtual-method>
    <virtual-method name="sniff" offset="65535" invoker="sniff">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="buffer" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
        <parameter name="params" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
          <type name="GLib.HashTable">
            <type name="utf8"/>
            <type name="utf8"/>
          </type>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
struct ContentSnifferClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="sniff">
    <callback name="sniff">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="sniffer" transfer-ownership="none">
          <type name="ContentSniffer"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="buffer" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
        <parameter name="params" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
          <type name="GLib.HashTable">
            <type name="utf8"/>
            <type name="utf8"/>
          </type>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get_buffer_size">
    <callback name="get_buffer_size">
      <return-value transfer-ownership="none">
        <type name="guint64"/>
      </return-value>
      <parameters>
        <parameter name="sniffer" transfer-ownership="none">
          <type name="ContentSniffer"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved5">
    <type name="any"/>
  </field>
};
struct ContentSnifferPrivate
{
};
struct Cookie
{
 glib:type-name="SoupCookie" glib:get-type="soup_cookie_get_type"  <field name="name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="value" writable="1">
    <type name="utf8"/>
  </field>
  <field name="domain" writable="1">
    <type name="utf8"/>
  </field>
  <field name="path" writable="1">
    <type name="utf8"/>
  </field>
  <field name="expires" writable="1">
    <type name="Date"/>
  </field>
  <field name="secure" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="http_only" writable="1">
    <type name="gboolean"/>
  </field>
  <constructor name="new" c:identifier="soup_cookie_new">
    <return-value transfer-ownership="full">
      <type name="Cookie"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="path" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="max_age" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="applies_to_uri" c:identifier="soup_cookie_applies_to_uri">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="URI"/>
      </parameter>
    </parameters>
  </method>
  <method name="copy" c:identifier="soup_cookie_copy">
    <return-value transfer-ownership="full">
      <type name="Cookie"/>
    </return-value>
  </method>
  <method name="domain_matches" c:identifier="soup_cookie_domain_matches">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="host" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="equal" c:identifier="soup_cookie_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="cookie2" transfer-ownership="none">
        <type name="Cookie"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="soup_cookie_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_domain" c:identifier="soup_cookie_get_domain">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_expires" c:identifier="soup_cookie_get_expires">
    <return-value transfer-ownership="none">
      <type name="Date"/>
    </return-value>
  </method>
  <method name="get_http_only" c:identifier="soup_cookie_get_http_only">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_name" c:identifier="soup_cookie_get_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_path" c:identifier="soup_cookie_get_path">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_secure" c:identifier="soup_cookie_get_secure">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_value" c:identifier="soup_cookie_get_value">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="set_domain" c:identifier="soup_cookie_set_domain">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_expires" c:identifier="soup_cookie_set_expires">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="expires" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_http_only" c:identifier="soup_cookie_set_http_only">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="http_only" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_max_age" c:identifier="soup_cookie_set_max_age">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="max_age" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_name" c:identifier="soup_cookie_set_name">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_path" c:identifier="soup_cookie_set_path">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="path" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_secure" c:identifier="soup_cookie_set_secure">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="secure" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_value" c:identifier="soup_cookie_set_value">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_cookie_header" c:identifier="soup_cookie_to_cookie_header">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="to_set_cookie_header" c:identifier="soup_cookie_to_set_cookie_header">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <function name="parse" c:identifier="soup_cookie_parse">
    <return-value transfer-ownership="full">
      <type name="Cookie"/>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="origin" transfer-ownership="none">
        <type name="URI"/>
      </parameter>
    </parameters>
  </function>
};
  <class name="CookieJar" parent="GObject.Object" glib:type-struct="CookieJarClass" glib:type-name="SoupCookieJar" glib:get-type="soup_cookie_jar_get_type">
    <implements name="SessionFeature"/>
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <constructor name="new" c:identifier="soup_cookie_jar_new">
      <return-value transfer-ownership="full">
        <type name="CookieJar"/>
      </return-value>
    </constructor>
    <method name="add_cookie" c:identifier="soup_cookie_jar_add_cookie">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
      </parameters>
    </method>
    <method name="all_cookies" c:identifier="soup_cookie_jar_all_cookies">
      <return-value transfer-ownership="full">
        <type name="GLib.SList">
          <type name="Cookie"/>
        </type>
      </return-value>
    </method>
    <method name="delete_cookie" c:identifier="soup_cookie_jar_delete_cookie">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_accept_policy" c:identifier="soup_cookie_jar_get_accept_policy">
      <return-value transfer-ownership="none">
        <type name="CookieJarAcceptPolicy"/>
      </return-value>
    </method>
    <method name="get_cookies" c:identifier="soup_cookie_jar_get_cookies">
      <return-value transfer-ownership="full">
        <type name="utf8"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="for_http" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </method>
    <method name="save" c:identifier="soup_cookie_jar_save">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="set_accept_policy" c:identifier="soup_cookie_jar_set_accept_policy">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="policy" transfer-ownership="none">
          <type name="CookieJarAcceptPolicy"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_cookie" c:identifier="soup_cookie_jar_set_cookie">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="cookie" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_cookie_with_first_party" c:identifier="soup_cookie_jar_set_cookie_with_first_party">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="first_party" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="cookie" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <property name="accept-policy" writable="1" transfer-ownership="none">
      <type name="CookieJarAcceptPolicy"/>
    </property>
    <property name="read-only" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <glib:signal name="changed" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="old_cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
        <parameter name="new_cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="changed" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="old_cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
        <parameter name="new_cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="save" offset="65535" invoker="save">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
  </class>
  <enumeration name="CookieJarAcceptPolicy" glib:type-name="SoupCookieJarAcceptPolicy" glib:get-type="soup_cookie_jar_accept_policy_get_type">
    <member name="always" value="0">
      <attribute name="c:identifier" value="SOUP_COOKIE_JAR_ACCEPT_ALWAYS"/>
    </member>
    <member name="never" value="1">
      <attribute name="c:identifier" value="SOUP_COOKIE_JAR_ACCEPT_NEVER"/>
    </member>
    <member name="no_third_party" value="2">
      <attribute name="c:identifier" value="SOUP_COOKIE_JAR_ACCEPT_NO_THIRD_PARTY"/>
    </member>
  </enumeration>
struct CookieJarClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="save">
    <callback name="save">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="jar" transfer-ownership="none">
          <type name="CookieJar"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="changed">
    <callback name="changed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="jar" transfer-ownership="none">
          <type name="CookieJar"/>
        </parameter>
        <parameter name="old_cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
        <parameter name="new_cookie" transfer-ownership="none">
          <type name="Cookie"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
};
  <class name="CookieJarText" parent="CookieJar" glib:type-struct="CookieJarTextClass" glib:type-name="SoupCookieJarText" glib:get-type="soup_cookie_jar_text_get_type">
    <implements name="SessionFeature"/>
    <field name="parent">
      <type name="CookieJar"/>
    </field>
    <constructor name="new" c:identifier="soup_cookie_jar_text_new">
      <return-value transfer-ownership="full">
        <type name="CookieJar"/>
      </return-value>
      <parameters>
        <parameter name="filename" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="read_only" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </constructor>
    <property name="filename" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
  </class>
struct CookieJarTextClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="CookieJarClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <constant name="DATE_H" value="1">
    <type name="gint32"/>
  </constant>
struct Date
{
 glib:type-name="SoupDate" glib:get-type="soup_date_get_type"  <field name="year" writable="1">
    <type name="gint32"/>
  </field>
  <field name="month" writable="1">
    <type name="gint32"/>
  </field>
  <field name="day" writable="1">
    <type name="gint32"/>
  </field>
  <field name="hour" writable="1">
    <type name="gint32"/>
  </field>
  <field name="minute" writable="1">
    <type name="gint32"/>
  </field>
  <field name="second" writable="1">
    <type name="gint32"/>
  </field>
  <field name="utc" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="offset" writable="1">
    <type name="gint32"/>
  </field>
  <constructor name="new" c:identifier="soup_date_new">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="month" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="day" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="hour" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="minute" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="second" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_now" c:identifier="soup_date_new_from_now">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
    <parameters>
      <parameter name="offset_seconds" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_string" c:identifier="soup_date_new_from_string">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
    <parameters>
      <parameter name="date_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_time_t" c:identifier="soup_date_new_from_time_t">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
    <parameters>
      <parameter name="when" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="copy" c:identifier="soup_date_copy">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
  </method>
  <method name="free" c:identifier="soup_date_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_day" c:identifier="soup_date_get_day">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_hour" c:identifier="soup_date_get_hour">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_minute" c:identifier="soup_date_get_minute">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_month" c:identifier="soup_date_get_month">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_offset" c:identifier="soup_date_get_offset">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_second" c:identifier="soup_date_get_second">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_utc" c:identifier="soup_date_get_utc">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_year" c:identifier="soup_date_get_year">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="is_past" c:identifier="soup_date_is_past">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="to_string" c:identifier="soup_date_to_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="format" transfer-ownership="none">
        <type name="DateFormat"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_time_t" c:identifier="soup_date_to_time_t">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="to_timeval" c:identifier="soup_date_to_timeval">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="time" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="GLib.TimeVal"/>
      </parameter>
    </parameters>
  </method>
};
  <enumeration name="DateFormat" glib:type-name="SoupDateFormat" glib:get-type="soup_date_format_get_type">
    <member name="http" value="1">
      <attribute name="c:identifier" value="SOUP_DATE_HTTP"/>
    </member>
    <member name="cookie" value="2">
      <attribute name="c:identifier" value="SOUP_DATE_COOKIE"/>
    </member>
    <member name="rfc2822" value="3">
      <attribute name="c:identifier" value="SOUP_DATE_RFC2822"/>
    </member>
    <member name="iso8601_compact" value="4">
      <attribute name="c:identifier" value="SOUP_DATE_ISO8601_COMPACT"/>
    </member>
    <member name="iso8601_full" value="5">
      <attribute name="c:identifier" value="SOUP_DATE_ISO8601_FULL"/>
    </member>
    <member name="iso8601" value="5">
      <attribute name="c:identifier" value="SOUP_DATE_ISO8601"/>
    </member>
    <member name="iso8601_xmlrpc" value="6">
      <attribute name="c:identifier" value="SOUP_DATE_ISO8601_XMLRPC"/>
    </member>
  </enumeration>
  <enumeration name="Encoding" glib:type-name="SoupEncoding" glib:get-type="soup_encoding_get_type">
    <member name="unrecognized" value="0">
      <attribute name="c:identifier" value="SOUP_ENCODING_UNRECOGNIZED"/>
    </member>
    <member name="none" value="1">
      <attribute name="c:identifier" value="SOUP_ENCODING_NONE"/>
    </member>
    <member name="content_length" value="2">
      <attribute name="c:identifier" value="SOUP_ENCODING_CONTENT_LENGTH"/>
    </member>
    <member name="eof" value="3">
      <attribute name="c:identifier" value="SOUP_ENCODING_EOF"/>
    </member>
    <member name="chunked" value="4">
      <attribute name="c:identifier" value="SOUP_ENCODING_CHUNKED"/>
    </member>
    <member name="byteranges" value="5">
      <attribute name="c:identifier" value="SOUP_ENCODING_BYTERANGES"/>
    </member>
  </enumeration>
  <bitfield name="Expectation" glib:type-name="SoupExpectation" glib:get-type="soup_expectation_get_type">
    <member name="unrecognized" value="1">
      <attribute name="c:identifier" value="SOUP_EXPECTATION_UNRECOGNIZED"/>
    </member>
    <member name="continue" value="2">
      <attribute name="c:identifier" value="SOUP_EXPECTATION_CONTINUE"/>
    </member>
  </bitfield>
  <constant name="FORM_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="FORM_MIME_TYPE_MULTIPART" value="multipart/form-data">
    <type name="utf8"/>
  </constant>
  <constant name="FORM_MIME_TYPE_URLENCODED" value="application/x-www-form-urlencoded">
    <type name="utf8"/>
  </constant>
  <constant name="HEADERS_H" value="1">
    <type name="gint32"/>
  </constant>
  <enumeration name="HTTPVersion" glib:type-name="SoupHTTPVersion" glib:get-type="soup_http_version_get_type">
    <member name="http_1_0" value="0">
      <attribute name="c:identifier" value="SOUP_HTTP_1_0"/>
    </member>
    <member name="http_1_1" value="1">
      <attribute name="c:identifier" value="SOUP_HTTP_1_1"/>
    </member>
  </enumeration>
  <enumeration name="KnownStatusCode" glib:type-name="SoupKnownStatusCode" glib:get-type="soup_known_status_code_get_type">
    <member name="none" value="0">
      <attribute name="c:identifier" value="SOUP_STATUS_NONE"/>
    </member>
    <member name="cancelled" value="1">
      <attribute name="c:identifier" value="SOUP_STATUS_CANCELLED"/>
    </member>
    <member name="cant_resolve" value="2">
      <attribute name="c:identifier" value="SOUP_STATUS_CANT_RESOLVE"/>
    </member>
    <member name="cant_resolve_proxy" value="3">
      <attribute name="c:identifier" value="SOUP_STATUS_CANT_RESOLVE_PROXY"/>
    </member>
    <member name="cant_connect" value="4">
      <attribute name="c:identifier" value="SOUP_STATUS_CANT_CONNECT"/>
    </member>
    <member name="cant_connect_proxy" value="5">
      <attribute name="c:identifier" value="SOUP_STATUS_CANT_CONNECT_PROXY"/>
    </member>
    <member name="ssl_failed" value="6">
      <attribute name="c:identifier" value="SOUP_STATUS_SSL_FAILED"/>
    </member>
    <member name="io_error" value="7">
      <attribute name="c:identifier" value="SOUP_STATUS_IO_ERROR"/>
    </member>
    <member name="malformed" value="8">
      <attribute name="c:identifier" value="SOUP_STATUS_MALFORMED"/>
    </member>
    <member name="try_again" value="9">
      <attribute name="c:identifier" value="SOUP_STATUS_TRY_AGAIN"/>
    </member>
    <member name="too_many_redirects" value="10">
      <attribute name="c:identifier" value="SOUP_STATUS_TOO_MANY_REDIRECTS"/>
    </member>
    <member name="tls_failed" value="11">
      <attribute name="c:identifier" value="SOUP_STATUS_TLS_FAILED"/>
    </member>
    <member name="continue" value="100">
      <attribute name="c:identifier" value="SOUP_STATUS_CONTINUE"/>
    </member>
    <member name="switching_protocols" value="101">
      <attribute name="c:identifier" value="SOUP_STATUS_SWITCHING_PROTOCOLS"/>
    </member>
    <member name="processing" value="102">
      <attribute name="c:identifier" value="SOUP_STATUS_PROCESSING"/>
    </member>
    <member name="ok" value="200">
      <attribute name="c:identifier" value="SOUP_STATUS_OK"/>
    </member>
    <member name="created" value="201">
      <attribute name="c:identifier" value="SOUP_STATUS_CREATED"/>
    </member>
    <member name="accepted" value="202">
      <attribute name="c:identifier" value="SOUP_STATUS_ACCEPTED"/>
    </member>
    <member name="non_authoritative" value="203">
      <attribute name="c:identifier" value="SOUP_STATUS_NON_AUTHORITATIVE"/>
    </member>
    <member name="no_content" value="204">
      <attribute name="c:identifier" value="SOUP_STATUS_NO_CONTENT"/>
    </member>
    <member name="reset_content" value="205">
      <attribute name="c:identifier" value="SOUP_STATUS_RESET_CONTENT"/>
    </member>
    <member name="partial_content" value="206">
      <attribute name="c:identifier" value="SOUP_STATUS_PARTIAL_CONTENT"/>
    </member>
    <member name="multi_status" value="207">
      <attribute name="c:identifier" value="SOUP_STATUS_MULTI_STATUS"/>
    </member>
    <member name="multiple_choices" value="300">
      <attribute name="c:identifier" value="SOUP_STATUS_MULTIPLE_CHOICES"/>
    </member>
    <member name="moved_permanently" value="301">
      <attribute name="c:identifier" value="SOUP_STATUS_MOVED_PERMANENTLY"/>
    </member>
    <member name="found" value="302">
      <attribute name="c:identifier" value="SOUP_STATUS_FOUND"/>
    </member>
    <member name="moved_temporarily" value="302">
      <attribute name="c:identifier" value="SOUP_STATUS_MOVED_TEMPORARILY"/>
    </member>
    <member name="see_other" value="303">
      <attribute name="c:identifier" value="SOUP_STATUS_SEE_OTHER"/>
    </member>
    <member name="not_modified" value="304">
      <attribute name="c:identifier" value="SOUP_STATUS_NOT_MODIFIED"/>
    </member>
    <member name="use_proxy" value="305">
      <attribute name="c:identifier" value="SOUP_STATUS_USE_PROXY"/>
    </member>
    <member name="not_appearing_in_this_protocol" value="306">
      <attribute name="c:identifier" value="SOUP_STATUS_NOT_APPEARING_IN_THIS_PROTOCOL"/>
    </member>
    <member name="temporary_redirect" value="307">
      <attribute name="c:identifier" value="SOUP_STATUS_TEMPORARY_REDIRECT"/>
    </member>
    <member name="bad_request" value="400">
      <attribute name="c:identifier" value="SOUP_STATUS_BAD_REQUEST"/>
    </member>
    <member name="unauthorized" value="401">
      <attribute name="c:identifier" value="SOUP_STATUS_UNAUTHORIZED"/>
    </member>
    <member name="payment_required" value="402">
      <attribute name="c:identifier" value="SOUP_STATUS_PAYMENT_REQUIRED"/>
    </member>
    <member name="forbidden" value="403">
      <attribute name="c:identifier" value="SOUP_STATUS_FORBIDDEN"/>
    </member>
    <member name="not_found" value="404">
      <attribute name="c:identifier" value="SOUP_STATUS_NOT_FOUND"/>
    </member>
    <member name="method_not_allowed" value="405">
      <attribute name="c:identifier" value="SOUP_STATUS_METHOD_NOT_ALLOWED"/>
    </member>
    <member name="not_acceptable" value="406">
      <attribute name="c:identifier" value="SOUP_STATUS_NOT_ACCEPTABLE"/>
    </member>
    <member name="proxy_authentication_required" value="407">
      <attribute name="c:identifier" value="SOUP_STATUS_PROXY_AUTHENTICATION_REQUIRED"/>
    </member>
    <member name="proxy_unauthorized" value="407">
      <attribute name="c:identifier" value="SOUP_STATUS_PROXY_UNAUTHORIZED"/>
    </member>
    <member name="request_timeout" value="408">
      <attribute name="c:identifier" value="SOUP_STATUS_REQUEST_TIMEOUT"/>
    </member>
    <member name="conflict" value="409">
      <attribute name="c:identifier" value="SOUP_STATUS_CONFLICT"/>
    </member>
    <member name="gone" value="410">
      <attribute name="c:identifier" value="SOUP_STATUS_GONE"/>
    </member>
    <member name="length_required" value="411">
      <attribute name="c:identifier" value="SOUP_STATUS_LENGTH_REQUIRED"/>
    </member>
    <member name="precondition_failed" value="412">
      <attribute name="c:identifier" value="SOUP_STATUS_PRECONDITION_FAILED"/>
    </member>
    <member name="request_entity_too_large" value="413">
      <attribute name="c:identifier" value="SOUP_STATUS_REQUEST_ENTITY_TOO_LARGE"/>
    </member>
    <member name="request_uri_too_long" value="414">
      <attribute name="c:identifier" value="SOUP_STATUS_REQUEST_URI_TOO_LONG"/>
    </member>
    <member name="unsupported_media_type" value="415">
      <attribute name="c:identifier" value="SOUP_STATUS_UNSUPPORTED_MEDIA_TYPE"/>
    </member>
    <member name="requested_range_not_satisfiable" value="416">
      <attribute name="c:identifier" value="SOUP_STATUS_REQUESTED_RANGE_NOT_SATISFIABLE"/>
    </member>
    <member name="invalid_range" value="416">
      <attribute name="c:identifier" value="SOUP_STATUS_INVALID_RANGE"/>
    </member>
    <member name="expectation_failed" value="417">
      <attribute name="c:identifier" value="SOUP_STATUS_EXPECTATION_FAILED"/>
    </member>
    <member name="unprocessable_entity" value="422">
      <attribute name="c:identifier" value="SOUP_STATUS_UNPROCESSABLE_ENTITY"/>
    </member>
    <member name="locked" value="423">
      <attribute name="c:identifier" value="SOUP_STATUS_LOCKED"/>
    </member>
    <member name="failed_dependency" value="424">
      <attribute name="c:identifier" value="SOUP_STATUS_FAILED_DEPENDENCY"/>
    </member>
    <member name="internal_server_error" value="500">
      <attribute name="c:identifier" value="SOUP_STATUS_INTERNAL_SERVER_ERROR"/>
    </member>
    <member name="not_implemented" value="501">
      <attribute name="c:identifier" value="SOUP_STATUS_NOT_IMPLEMENTED"/>
    </member>
    <member name="bad_gateway" value="502">
      <attribute name="c:identifier" value="SOUP_STATUS_BAD_GATEWAY"/>
    </member>
    <member name="service_unavailable" value="503">
      <attribute name="c:identifier" value="SOUP_STATUS_SERVICE_UNAVAILABLE"/>
    </member>
    <member name="gateway_timeout" value="504">
      <attribute name="c:identifier" value="SOUP_STATUS_GATEWAY_TIMEOUT"/>
    </member>
    <member name="http_version_not_supported" value="505">
      <attribute name="c:identifier" value="SOUP_STATUS_HTTP_VERSION_NOT_SUPPORTED"/>
    </member>
    <member name="insufficient_storage" value="507">
      <attribute name="c:identifier" value="SOUP_STATUS_INSUFFICIENT_STORAGE"/>
    </member>
    <member name="not_extended" value="510">
      <attribute name="c:identifier" value="SOUP_STATUS_NOT_EXTENDED"/>
    </member>
  </enumeration>
  <constant name="LOGGER_H" value="1">
    <type name="gint32"/>
  </constant>
  <class name="Logger" parent="GObject.Object" glib:type-struct="LoggerClass" glib:type-name="SoupLogger" glib:get-type="soup_logger_get_type">
    <implements name="SessionFeature"/>
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <constructor name="new" c:identifier="soup_logger_new">
      <return-value transfer-ownership="full">
        <type name="Logger"/>
      </return-value>
      <parameters>
        <parameter name="level" transfer-ownership="none">
          <type name="LoggerLogLevel"/>
        </parameter>
        <parameter name="max_body_size" transfer-ownership="none">
          <type name="gint32"/>
        </parameter>
      </parameters>
    </constructor>
    <method name="attach" c:identifier="soup_logger_attach" deprecated="1">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </method>
    <method name="detach" c:identifier="soup_logger_detach" deprecated="1">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_printer" c:identifier="soup_logger_set_printer">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="printer" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="LoggerPrinter"/>
        </parameter>
        <parameter name="printer_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="destroy" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_request_filter" c:identifier="soup_logger_set_request_filter">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="request_filter" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="LoggerFilter"/>
        </parameter>
        <parameter name="filter_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="destroy" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_response_filter" c:identifier="soup_logger_set_response_filter">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="response_filter" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="LoggerFilter"/>
        </parameter>
        <parameter name="filter_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="destroy" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
  </class>
struct LoggerClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <callback name="LoggerFilter">
    <return-value transfer-ownership="none">
      <type name="LoggerLogLevel"/>
    </return-value>
    <parameters>
      <parameter name="logger" transfer-ownership="none">
        <type name="Logger"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <enumeration name="LoggerLogLevel" glib:type-name="SoupLoggerLogLevel" glib:get-type="soup_logger_log_level_get_type">
    <member name="none" value="0">
      <attribute name="c:identifier" value="SOUP_LOGGER_LOG_NONE"/>
    </member>
    <member name="minimal" value="1">
      <attribute name="c:identifier" value="SOUP_LOGGER_LOG_MINIMAL"/>
    </member>
    <member name="headers" value="2">
      <attribute name="c:identifier" value="SOUP_LOGGER_LOG_HEADERS"/>
    </member>
    <member name="body" value="3">
      <attribute name="c:identifier" value="SOUP_LOGGER_LOG_BODY"/>
    </member>
  </enumeration>
  <callback name="LoggerPrinter">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="logger" transfer-ownership="none">
        <type name="Logger"/>
      </parameter>
      <parameter name="level" transfer-ownership="none">
        <type name="LoggerLogLevel"/>
      </parameter>
      <parameter name="direction" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="4">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <constant name="MESSAGE_BODY_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="MESSAGE_FIRST_PARTY" value="first-party">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_FLAGS" value="flags">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="MESSAGE_HEADERS_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="MESSAGE_HTTP_VERSION" value="http-version">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_METHOD" value="method">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_REASON_PHRASE" value="reason-phrase">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_REQUEST_BODY" value="request-body">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_REQUEST_HEADERS" value="request-headers">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_RESPONSE_BODY" value="response-body">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_RESPONSE_HEADERS" value="response-headers">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_SERVER_SIDE" value="server-side">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_STATUS_CODE" value="status-code">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_TLS_CERTIFICATE" value="tls-certificate">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_TLS_ERRORS" value="tls-errors">
    <type name="utf8"/>
  </constant>
  <constant name="MESSAGE_URI" value="uri">
    <type name="utf8"/>
  </constant>
  <constant name="METHOD_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="MISC_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="MULTIPART_H" value="1">
    <type name="gint32"/>
  </constant>
  <enumeration name="MemoryUse" glib:type-name="SoupMemoryUse" glib:get-type="soup_memory_use_get_type">
    <member name="static" value="0">
      <attribute name="c:identifier" value="SOUP_MEMORY_STATIC"/>
    </member>
    <member name="take" value="1">
      <attribute name="c:identifier" value="SOUP_MEMORY_TAKE"/>
    </member>
    <member name="copy" value="2">
      <attribute name="c:identifier" value="SOUP_MEMORY_COPY"/>
    </member>
    <member name="temporary" value="3">
      <attribute name="c:identifier" value="SOUP_MEMORY_TEMPORARY"/>
    </member>
  </enumeration>
  <class name="Message" parent="GObject.Object" glib:type-struct="MessageClass" glib:type-name="SoupMessage" glib:get-type="soup_message_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <field name="method">
      <type name="utf8"/>
    </field>
    <field name="status_code">
      <type name="guint32"/>
    </field>
    <field name="reason_phrase">
      <type name="utf8"/>
    </field>
    <field name="request_body">
      <type name="MessageBody"/>
    </field>
    <field name="request_headers">
      <type name="MessageHeaders"/>
    </field>
    <field name="response_body">
      <type name="MessageBody"/>
    </field>
    <field name="response_headers">
      <type name="MessageHeaders"/>
    </field>
    <constructor name="new" c:identifier="soup_message_new">
      <return-value transfer-ownership="full">
        <type name="Message"/>
      </return-value>
      <parameters>
        <parameter name="method" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="uri_string" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </constructor>
    <constructor name="new_from_uri" c:identifier="soup_message_new_from_uri">
      <return-value transfer-ownership="full">
        <type name="Message"/>
      </return-value>
      <parameters>
        <parameter name="method" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </constructor>
    <method name="content_sniffed" c:identifier="soup_message_content_sniffed">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="content_type" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="params" transfer-ownership="none">
          <type name="GLib.HashTable">
            <type name="any"/>
            <type name="any"/>
          </type>
        </parameter>
      </parameters>
    </method>
    <method name="disable_feature" c:identifier="soup_message_disable_feature">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="finished" c:identifier="soup_message_finished">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="get_address" c:identifier="soup_message_get_address">
      <return-value transfer-ownership="none">
        <type name="Address"/>
      </return-value>
    </method>
    <method name="get_first_party" c:identifier="soup_message_get_first_party">
      <return-value transfer-ownership="none">
        <type name="URI"/>
      </return-value>
    </method>
    <method name="get_flags" c:identifier="soup_message_get_flags">
      <return-value transfer-ownership="none">
        <type name="MessageFlags"/>
      </return-value>
    </method>
    <method name="get_http_version" c:identifier="soup_message_get_http_version">
      <return-value transfer-ownership="none">
        <type name="HTTPVersion"/>
      </return-value>
    </method>
    <method name="get_https_status" c:identifier="soup_message_get_https_status">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="certificate" transfer-ownership="none" direction="out" caller-allocates="0">
          <type name="Gio.TlsCertificate"/>
        </parameter>
        <parameter name="errors" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="Gio.TlsCertificateFlags"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_uri" c:identifier="soup_message_get_uri">
      <return-value transfer-ownership="none">
        <type name="URI"/>
      </return-value>
    </method>
    <method name="got_body" c:identifier="soup_message_got_body">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="got_chunk" c:identifier="soup_message_got_chunk">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="chunk" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
      </parameters>
    </method>
    <method name="got_headers" c:identifier="soup_message_got_headers">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="got_informational" c:identifier="soup_message_got_informational">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="is_keepalive" c:identifier="soup_message_is_keepalive">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="restarted" c:identifier="soup_message_restarted">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="set_chunk_allocator" c:identifier="soup_message_set_chunk_allocator">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="allocator" transfer-ownership="none" scope="notified" closure="1" destroy="2">
          <type name="ChunkAllocator"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="destroy_notify" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_first_party" c:identifier="soup_message_set_first_party">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="first_party" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_flags" c:identifier="soup_message_set_flags">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="flags" transfer-ownership="none">
          <type name="MessageFlags"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_http_version" c:identifier="soup_message_set_http_version">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="version" transfer-ownership="none">
          <type name="HTTPVersion"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_redirect" c:identifier="soup_message_set_redirect">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="status_code" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="redirect_uri" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_request" c:identifier="soup_message_set_request">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="content_type" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="req_use" transfer-ownership="none">
          <type name="MemoryUse"/>
        </parameter>
        <parameter name="req_body" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="req_length" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_response" c:identifier="soup_message_set_response">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="content_type" transfer-ownership="none" allow-none="1">
          <type name="utf8"/>
        </parameter>
        <parameter name="resp_use" transfer-ownership="none">
          <type name="MemoryUse"/>
        </parameter>
        <parameter name="resp_body" transfer-ownership="none">
          <array length="3">
            <type name="guint8"/>
          </array>
        </parameter>
        <parameter name="resp_length" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_status" c:identifier="soup_message_set_status">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="status_code" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_status_full" c:identifier="soup_message_set_status_full">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="status_code" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
        <parameter name="reason_phrase" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="set_uri" c:identifier="soup_message_set_uri">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </method>
    <method name="wrote_body" c:identifier="soup_message_wrote_body">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="wrote_body_data" c:identifier="soup_message_wrote_body_data">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="chunk" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
      </parameters>
    </method>
    <method name="wrote_chunk" c:identifier="soup_message_wrote_chunk">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="wrote_headers" c:identifier="soup_message_wrote_headers">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="wrote_informational" c:identifier="soup_message_wrote_informational">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <property name="first-party" writable="1" transfer-ownership="none">
      <type name="URI"/>
    </property>
    <property name="flags" writable="1" transfer-ownership="none">
      <type name="MessageFlags"/>
    </property>
    <property name="http-version" writable="1" transfer-ownership="none">
      <type name="HTTPVersion"/>
    </property>
    <property name="method" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="reason-phrase" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="request-body" transfer-ownership="none">
      <type name="MessageBody"/>
    </property>
    <property name="request-headers" transfer-ownership="none">
      <type name="MessageHeaders"/>
    </property>
    <property name="response-body" transfer-ownership="none">
      <type name="MessageBody"/>
    </property>
    <property name="response-headers" transfer-ownership="none">
      <type name="MessageHeaders"/>
    </property>
    <property name="server-side" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="status-code" writable="1" transfer-ownership="none">
      <type name="guint32"/>
    </property>
    <property name="tls-certificate" writable="1" transfer-ownership="none">
      <type name="Gio.TlsCertificate"/>
    </property>
    <property name="tls-errors" writable="1" transfer-ownership="none">
      <type name="Gio.TlsCertificateFlags"/>
    </property>
    <property name="uri" writable="1" transfer-ownership="none">
      <type name="URI"/>
    </property>
    <glib:signal name="content-sniffed" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="params" transfer-ownership="none">
          <type name="GLib.HashTable">
            <type name="utf8"/>
            <type name="utf8"/>
          </type>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="finished" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="got-body" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="got-chunk" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="chunk" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="got-headers" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="got-informational" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="network-event" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="event" transfer-ownership="none">
          <type name="Gio.SocketClientEvent"/>
        </parameter>
        <parameter name="connection" transfer-ownership="none">
          <type name="Gio.IOStream"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="restarted" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="wrote-body" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="wrote-body-data" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="chunk" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="wrote-chunk" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="wrote-headers" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="wrote-informational" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <virtual-method name="finished" offset="65535" invoker="finished">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="got_body" offset="65535" invoker="got_body">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="got_chunk" offset="65535" invoker="got_chunk">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="chunk" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="got_headers" offset="65535" invoker="got_headers">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="got_informational" offset="65535" invoker="got_informational">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="restarted" offset="65535" invoker="restarted">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="wrote_body" offset="65535" invoker="wrote_body">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="wrote_chunk" offset="65535" invoker="wrote_chunk">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="wrote_headers" offset="65535" invoker="wrote_headers">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="wrote_informational" offset="65535" invoker="wrote_informational">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
  </class>
struct MessageBody
{
 glib:type-name="SoupMessageBody" glib:get-type="soup_message_body_get_type"  <field name="data" writable="1">
    <type name="utf8"/>
  </field>
  <field name="length" writable="1">
    <type name="gint64"/>
  </field>
  <constructor name="new" c:identifier="soup_message_body_new">
    <return-value transfer-ownership="full">
      <type name="MessageBody"/>
    </return-value>
  </constructor>
  <method name="append_buffer" c:identifier="soup_message_body_append_buffer">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="buffer" transfer-ownership="none">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </method>
  <method name="append" c:identifier="soup_message_body_append_take">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="full">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="complete" c:identifier="soup_message_body_complete">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="flatten" c:identifier="soup_message_body_flatten">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
  </method>
  <method name="free" c:identifier="soup_message_body_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_accumulate" c:identifier="soup_message_body_get_accumulate">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_chunk" c:identifier="soup_message_body_get_chunk">
    <return-value transfer-ownership="full">
      <type name="Buffer"/>
    </return-value>
    <parameters>
      <parameter name="offset" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="got_chunk" c:identifier="soup_message_body_got_chunk">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="chunk" transfer-ownership="none">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_accumulate" c:identifier="soup_message_body_set_accumulate">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="accumulate" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="truncate" c:identifier="soup_message_body_truncate">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="wrote_chunk" c:identifier="soup_message_body_wrote_chunk">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="chunk" transfer-ownership="none">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </method>
};
struct MessageClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="wrote_informational">
    <callback name="wrote_informational">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="wrote_headers">
    <callback name="wrote_headers">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="wrote_chunk">
    <callback name="wrote_chunk">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="wrote_body">
    <callback name="wrote_body">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="got_informational">
    <callback name="got_informational">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="got_headers">
    <callback name="got_headers">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="got_chunk">
    <callback name="got_chunk">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="chunk" transfer-ownership="none">
          <type name="Buffer"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="got_body">
    <callback name="got_body">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="restarted">
    <callback name="restarted">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="finished">
    <callback name="finished">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <bitfield name="MessageFlags" glib:type-name="SoupMessageFlags" glib:get-type="soup_message_flags_get_type">
    <member name="no_redirect" value="2">
      <attribute name="c:identifier" value="SOUP_MESSAGE_NO_REDIRECT"/>
    </member>
    <member name="can_rebuild" value="4">
      <attribute name="c:identifier" value="SOUP_MESSAGE_CAN_REBUILD"/>
    </member>
    <member name="overwrite_chunks" value="8">
      <attribute name="c:identifier" value="SOUP_MESSAGE_OVERWRITE_CHUNKS"/>
    </member>
    <member name="content_decoded" value="16">
      <attribute name="c:identifier" value="SOUP_MESSAGE_CONTENT_DECODED"/>
    </member>
    <member name="certificate_trusted" value="32">
      <attribute name="c:identifier" value="SOUP_MESSAGE_CERTIFICATE_TRUSTED"/>
    </member>
    <member name="new_connection" value="64">
      <attribute name="c:identifier" value="SOUP_MESSAGE_NEW_CONNECTION"/>
    </member>
  </bitfield>
struct MessageHeaders
{
 glib:type-name="SoupMessageHeaders" glib:get-type="soup_message_headers_get_type"  <constructor name="new" c:identifier="soup_message_headers_new">
    <return-value transfer-ownership="full">
      <type name="MessageHeaders"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="MessageHeadersType"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="append" c:identifier="soup_message_headers_append">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="clean_connection_headers" c:identifier="soup_message_headers_clean_connection_headers">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="clear" c:identifier="soup_message_headers_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="foreach" c:identifier="soup_message_headers_foreach">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="func" transfer-ownership="none" scope="call" closure="1">
        <type name="MessageHeadersForeachFunc"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="soup_message_headers_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="free_ranges" c:identifier="soup_message_headers_free_ranges">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="ranges" transfer-ownership="none">
        <type name="Range"/>
      </parameter>
    </parameters>
  </method>
  <method name="get" c:identifier="soup_message_headers_get" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_content_disposition" c:identifier="soup_message_headers_get_content_disposition">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="disposition" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
      <parameter name="params" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </method>
  <method name="get_content_length" c:identifier="soup_message_headers_get_content_length">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="get_content_range" c:identifier="soup_message_headers_get_content_range">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="start" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="total_length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_content_type" c:identifier="soup_message_headers_get_content_type">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="params" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </method>
  <method name="get_encoding" c:identifier="soup_message_headers_get_encoding">
    <return-value transfer-ownership="none">
      <type name="Encoding"/>
    </return-value>
  </method>
  <method name="get_expectations" c:identifier="soup_message_headers_get_expectations">
    <return-value transfer-ownership="none">
      <type name="Expectation"/>
    </return-value>
  </method>
  <method name="get_list" c:identifier="soup_message_headers_get_list">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_one" c:identifier="soup_message_headers_get_one">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_ranges" c:identifier="soup_message_headers_get_ranges">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="total_length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="ranges" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="Range"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove" c:identifier="soup_message_headers_remove">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="replace" c:identifier="soup_message_headers_replace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_content_disposition" c:identifier="soup_message_headers_set_content_disposition">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="disposition" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="params" transfer-ownership="none" allow-none="1">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </method>
  <method name="set_content_length" c:identifier="soup_message_headers_set_content_length">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="content_length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_content_range" c:identifier="soup_message_headers_set_content_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="start" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="total_length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_content_type" c:identifier="soup_message_headers_set_content_type">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="content_type" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="params" transfer-ownership="none" allow-none="1">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </method>
  <method name="set_encoding" c:identifier="soup_message_headers_set_encoding">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="encoding" transfer-ownership="none">
        <type name="Encoding"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_expectations" c:identifier="soup_message_headers_set_expectations">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="expectations" transfer-ownership="none">
        <type name="Expectation"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_range" c:identifier="soup_message_headers_set_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="start" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_ranges" c:identifier="soup_message_headers_set_ranges">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="ranges" transfer-ownership="none">
        <type name="Range"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
};
  <callback name="MessageHeadersForeachFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct MessageHeadersIter
{
  <field name="dummy">
    <array fixed-size="3">
      <type name="any"/>
    </array>
  </field>
  <method name="init" c:identifier="soup_message_headers_iter_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hdrs" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
    </parameters>
  </method>
  <method name="next" c:identifier="soup_message_headers_iter_next">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
};
  <enumeration name="MessageHeadersType" glib:type-name="SoupMessageHeadersType" glib:get-type="soup_message_headers_type_get_type">
    <member name="request" value="0">
      <attribute name="c:identifier" value="SOUP_MESSAGE_HEADERS_REQUEST"/>
    </member>
    <member name="response" value="1">
      <attribute name="c:identifier" value="SOUP_MESSAGE_HEADERS_RESPONSE"/>
    </member>
    <member name="multipart" value="2">
      <attribute name="c:identifier" value="SOUP_MESSAGE_HEADERS_MULTIPART"/>
    </member>
  </enumeration>
struct MessageQueue
{
};
struct MessageQueueItem
{
};
struct Multipart
{
 glib:type-name="SoupMultipart" glib:get-type="soup_multipart_get_type"  <constructor name="new" c:identifier="soup_multipart_new">
    <return-value transfer-ownership="full">
      <type name="Multipart"/>
    </return-value>
    <parameters>
      <parameter name="mime_type" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_message" c:identifier="soup_multipart_new_from_message">
    <return-value transfer-ownership="full">
      <type name="Multipart"/>
    </return-value>
    <parameters>
      <parameter name="headers" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
      <parameter name="body" transfer-ownership="none">
        <type name="MessageBody"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="append_form_file" c:identifier="soup_multipart_append_form_file">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="control_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="content_type" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="body" transfer-ownership="none">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </method>
  <method name="append_form_string" c:identifier="soup_multipart_append_form_string">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="control_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="append_part" c:identifier="soup_multipart_append_part">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="headers" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
      <parameter name="body" transfer-ownership="none">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="soup_multipart_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_length" c:identifier="soup_multipart_get_length">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_part" c:identifier="soup_multipart_get_part">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="headers" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="MessageHeaders"/>
      </parameter>
      <parameter name="body" transfer-ownership="none" direction="out" caller-allocates="0">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_message" c:identifier="soup_multipart_to_message">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dest_headers" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
      <parameter name="dest_body" transfer-ownership="none">
        <type name="MessageBody"/>
      </parameter>
    </parameters>
  </method>
};
  <constant name="PASSWORD_MANAGER_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="PROXY_RESOLVER_DEFAULT_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="PROXY_URI_RESOLVER_H" value="1">
    <type name="gint32"/>
  </constant>
  <class name="ProxyResolverDefault" parent="GObject.Object" glib:type-struct="ProxyResolverDefaultClass" glib:type-name="SoupProxyResolverDefault" glib:get-type="soup_proxy_resolver_default_get_type">
    <implements name="ProxyURIResolver"/>
    <implements name="SessionFeature"/>
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <property name="gproxy-resolver" readable="0" writable="1" transfer-ownership="none">
      <type name="Gio.ProxyResolver"/>
    </property>
  </class>
struct ProxyResolverDefaultClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
};
  <interface name="ProxyURIResolver" glib:type-name="SoupProxyURIResolver" glib:get-type="soup_proxy_uri_resolver_get_type" glib:type-struct="ProxyURIResolverInterface">
    <method name="get_proxy_uri_async" c:identifier="soup_proxy_uri_resolver_get_proxy_uri_async">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="async_context" transfer-ownership="none" allow-none="1">
          <type name="GLib.MainContext"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" scope="async" closure="4">
          <type name="ProxyURIResolverCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_proxy_uri_sync" c:identifier="soup_proxy_uri_resolver_get_proxy_uri_sync">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="proxy_uri" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="URI"/>
        </parameter>
      </parameters>
    </method>
    <virtual-method name="get_proxy_uri_async" offset="65535" invoker="get_proxy_uri_async">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="async_context" transfer-ownership="none" allow-none="1">
          <type name="GLib.MainContext"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" scope="async" closure="4">
          <type name="ProxyURIResolverCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="4">
          <type name="any"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="get_proxy_uri_sync" offset="65535" invoker="get_proxy_uri_sync">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="proxy_uri" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="URI"/>
        </parameter>
      </parameters>
    </virtual-method>
  </interface>
  <callback name="ProxyURIResolverCallback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="resolver" transfer-ownership="none">
        <type name="ProxyURIResolver"/>
      </parameter>
      <parameter name="status" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="proxy_uri" transfer-ownership="none">
        <type name="URI"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="3">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct ProxyURIResolverInterface
{
 glib:is-gtype-struct="1"  <field name="base">
    <type name="GObject.TypeInterface"/>
  </field>
  <field name="get_proxy_uri_async">
    <callback name="get_proxy_uri_async">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="proxy_uri_resolver" transfer-ownership="none">
          <type name="ProxyURIResolver"/>
        </parameter>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="async_context" transfer-ownership="none" allow-none="1">
          <type name="GLib.MainContext"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" scope="async" closure="5">
          <type name="ProxyURIResolverCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="5">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get_proxy_uri_sync">
    <callback name="get_proxy_uri_sync">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="proxy_uri_resolver" transfer-ownership="none">
          <type name="ProxyURIResolver"/>
        </parameter>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="proxy_uri" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="URI"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <constant name="REQUESTER_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="REQUEST_DATA_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="REQUEST_FILE_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="REQUEST_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="REQUEST_HTTP_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="REQUEST_SESSION" value="session">
    <type name="utf8"/>
  </constant>
  <constant name="REQUEST_URI" value="uri">
    <type name="utf8"/>
  </constant>
struct Range
{
  <field name="start" writable="1">
    <type name="gint64"/>
  </field>
  <field name="end" writable="1">
    <type name="gint64"/>
  </field>
};
  <enumeration name="RequesterError" glib:type-name="SoupRequesterError" glib:get-type="soup_requester_error_get_type">
    <member name="bad_uri" value="0">
      <attribute name="c:identifier" value="SOUP_REQUESTER_ERROR_BAD_URI"/>
    </member>
    <member name="unsupported_uri_scheme" value="1">
      <attribute name="c:identifier" value="SOUP_REQUESTER_ERROR_UNSUPPORTED_URI_SCHEME"/>
    </member>
  </enumeration>
  <constant name="SERVER_ASYNC_CONTEXT" value="async-context">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SERVER_INTERFACE" value="interface">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_PORT" value="port">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_RAW_PATHS" value="raw-paths">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_SERVER_HEADER" value="server-header">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_SSL_CERT_FILE" value="ssl-cert-file">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_SSL_KEY_FILE" value="ssl-key-file">
    <type name="utf8"/>
  </constant>
  <constant name="SERVER_TLS_CERTIFICATE" value="tls-certificate">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_ACCEPT_LANGUAGE" value="accept-language">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_ACCEPT_LANGUAGE_AUTO" value="accept-language-auto">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_ASYNC_CONTEXT" value="async-context">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_ASYNC_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SESSION_FEATURE_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SESSION_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SESSION_HTTPS_ALIASES" value="https-aliases">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_HTTP_ALIASES" value="http-aliases">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_IDLE_TIMEOUT" value="idle-timeout">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_MAX_CONNS" value="max-conns">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_MAX_CONNS_PER_HOST" value="max-conns-per-host">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_PROXY_URI" value="proxy-uri">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_SSL_CA_FILE" value="ssl-ca-file">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_SSL_STRICT" value="ssl-strict">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_SSL_USE_SYSTEM_CA_FILE" value="ssl-use-system-ca-file">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_SYNC_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SESSION_TIMEOUT" value="timeout">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_TLS_DATABASE" value="tls-database">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_USER_AGENT" value="user-agent">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_USE_NTLM" value="use-ntlm">
    <type name="utf8"/>
  </constant>
  <constant name="SESSION_USE_THREAD_CONTEXT" value="use-thread-context">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_ASYNC_CONTEXT" value="async-context">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_FLAG_NONBLOCKING" value="non-blocking">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SOCKET_IS_SERVER" value="is-server">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_LOCAL_ADDRESS" value="local-address">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_REMOTE_ADDRESS" value="remote-address">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_SSL_CREDENTIALS" value="ssl-creds">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_SSL_FALLBACK" value="ssl-fallback">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_SSL_STRICT" value="ssl-strict">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_TIMEOUT" value="timeout">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_TLS_CERTIFICATE" value="tls-certificate">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_TLS_ERRORS" value="tls-errors">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_TRUSTED_CERTIFICATE" value="trusted-certificate">
    <type name="utf8"/>
  </constant>
  <constant name="SOCKET_USE_THREAD_CONTEXT" value="use-thread-context">
    <type name="utf8"/>
  </constant>
  <constant name="STATUS_H" value="1">
    <type name="gint32"/>
  </constant>
  <class name="Server" parent="GObject.Object" glib:type-struct="ServerClass" glib:type-name="SoupServer" glib:get-type="soup_server_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <method name="add_auth_domain" c:identifier="soup_server_add_auth_domain">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="auth_domain" transfer-ownership="none">
          <type name="AuthDomain"/>
        </parameter>
      </parameters>
    </method>
    <method name="add_handler" c:identifier="soup_server_add_handler">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="path" transfer-ownership="none" allow-none="1">
          <type name="utf8"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" scope="notified" closure="2" destroy="3">
          <type name="ServerCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="destroy" transfer-ownership="none" scope="async">
          <type name="GLib.DestroyNotify"/>
        </parameter>
      </parameters>
    </method>
    <method name="disconnect" c:identifier="soup_server_disconnect">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="get_async_context" c:identifier="soup_server_get_async_context">
      <return-value transfer-ownership="none">
        <type name="GLib.MainContext"/>
      </return-value>
    </method>
    <method name="get_listener" c:identifier="soup_server_get_listener">
      <return-value transfer-ownership="none">
        <type name="Socket"/>
      </return-value>
    </method>
    <method name="get_port" c:identifier="soup_server_get_port">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
    </method>
    <method name="is_https" c:identifier="soup_server_is_https">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="pause_message" c:identifier="soup_server_pause_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="quit" c:identifier="soup_server_quit">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="remove_auth_domain" c:identifier="soup_server_remove_auth_domain">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="auth_domain" transfer-ownership="none">
          <type name="AuthDomain"/>
        </parameter>
      </parameters>
    </method>
    <method name="remove_handler" c:identifier="soup_server_remove_handler">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="path" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
      </parameters>
    </method>
    <method name="run" c:identifier="soup_server_run">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="run_async" c:identifier="soup_server_run_async">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="unpause_message" c:identifier="soup_server_unpause_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <property name="async-context" writable="1" construct-only="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="interface" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Address"/>
    </property>
    <property name="port" writable="1" construct-only="1" transfer-ownership="none">
      <type name="guint32"/>
    </property>
    <property name="raw-paths" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="server-header" writable="1" construct="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="ssl-cert-file" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="ssl-key-file" writable="1" construct-only="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="tls-certificate" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Gio.TlsCertificate"/>
    </property>
    <glib:signal name="request-aborted" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="message" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="request-finished" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="message" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="request-read" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="message" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="request-started" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="message" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="request_aborted" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_finished" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_read" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_started" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
  <callback name="ServerCallback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="server" transfer-ownership="none">
        <type name="Server"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="path" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="query" transfer-ownership="none" allow-none="1">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
      <parameter name="client" transfer-ownership="none">
        <type name="ClientContext"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="5">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct ServerClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="request_started">
    <callback name="request_started">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="server" transfer-ownership="none">
          <type name="Server"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="request_read">
    <callback name="request_read">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="server" transfer-ownership="none">
          <type name="Server"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="request_finished">
    <callback name="request_finished">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="server" transfer-ownership="none">
          <type name="Server"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="request_aborted">
    <callback name="request_aborted">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="server" transfer-ownership="none">
          <type name="Server"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="client" transfer-ownership="none">
          <type name="ClientContext"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <class name="Session" parent="GObject.Object" glib:type-struct="SessionClass" abstract="1" glib:type-name="SoupSession" glib:get-type="soup_session_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <method name="abort" c:identifier="soup_session_abort">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="add_feature" c:identifier="soup_session_add_feature">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
      </parameters>
    </method>
    <method name="add_feature_by_type" c:identifier="soup_session_add_feature_by_type">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="cancel_message" c:identifier="soup_session_cancel_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="status_code" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_async_context" c:identifier="soup_session_get_async_context">
      <return-value transfer-ownership="none">
        <type name="GLib.MainContext"/>
      </return-value>
    </method>
    <method name="get_feature" c:identifier="soup_session_get_feature">
      <return-value transfer-ownership="none">
        <type name="SessionFeature"/>
      </return-value>
      <parameters>
        <parameter name="feature_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_feature_for_message" c:identifier="soup_session_get_feature_for_message">
      <return-value transfer-ownership="none">
        <type name="SessionFeature"/>
      </return-value>
      <parameters>
        <parameter name="feature_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="get_features" c:identifier="soup_session_get_features">
      <return-value transfer-ownership="container">
        <type name="GLib.SList">
          <type name="SessionFeature"/>
        </type>
      </return-value>
      <parameters>
        <parameter name="feature_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="pause_message" c:identifier="soup_session_pause_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="prepare_for_uri" c:identifier="soup_session_prepare_for_uri">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="uri" transfer-ownership="none">
          <type name="URI"/>
        </parameter>
      </parameters>
    </method>
    <method name="queue_message" c:identifier="soup_session_queue_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="full">
          <type name="Message"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" allow-none="1" scope="async" closure="2">
          <type name="SessionCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" allow-none="1">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="redirect_message" c:identifier="soup_session_redirect_message">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="remove_feature" c:identifier="soup_session_remove_feature">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
      </parameters>
    </method>
    <method name="remove_feature_by_type" c:identifier="soup_session_remove_feature_by_type">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature_type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="requeue_message" c:identifier="soup_session_requeue_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="send_message" c:identifier="soup_session_send_message">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="unpause_message" c:identifier="soup_session_unpause_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <method name="would_redirect" c:identifier="soup_session_would_redirect">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </method>
    <property name="accept-language" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="accept-language-auto" writable="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="async-context" writable="1" construct-only="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="http-aliases" writable="1" transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </property>
    <property name="https-aliases" writable="1" transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </property>
    <property name="idle-timeout" writable="1" transfer-ownership="none">
      <type name="guint32"/>
    </property>
    <property name="max-conns" writable="1" transfer-ownership="none">
      <type name="gint32"/>
    </property>
    <property name="max-conns-per-host" writable="1" transfer-ownership="none">
      <type name="gint32"/>
    </property>
    <property name="proxy-uri" writable="1" transfer-ownership="none">
      <type name="URI"/>
    </property>
    <property name="ssl-ca-file" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <property name="ssl-strict" writable="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="ssl-use-system-ca-file" writable="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="timeout" writable="1" transfer-ownership="none">
      <type name="guint32"/>
    </property>
    <property name="tls-database" writable="1" transfer-ownership="none">
      <type name="Gio.TlsDatabase"/>
    </property>
    <property name="use-ntlm" writable="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="use-thread-context" writable="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="user-agent" writable="1" transfer-ownership="none">
      <type name="utf8"/>
    </property>
    <glib:signal name="authenticate" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="retrying" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="connection-created" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="connection" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="request-queued" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="request-started" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="socket" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="request-unqueued" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="tunneling" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="connection" transfer-ownership="none">
          <type name="GObject.Object"/>
        </parameter>
      </parameters>
    </glib:signal>
    <virtual-method name="auth_required" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="retrying" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="authenticate" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="retrying" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="cancel_message" offset="65535" invoker="cancel_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="status_code" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="flush_queue" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="kick" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="queue_message" offset="65535" invoker="queue_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="full">
          <type name="Message"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" allow-none="1" scope="async" closure="2">
          <type name="SessionCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" allow-none="1" closure="2">
          <type name="any"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_started" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="socket" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="requeue_message" offset="65535" invoker="requeue_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="send_message" offset="65535" invoker="send_message">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </virtual-method>
  </class>
  <class name="SessionAsync" parent="Session" glib:type-struct="SessionAsyncClass" glib:type-name="SoupSessionAsync" glib:get-type="soup_session_async_get_type">
    <field name="parent">
      <type name="Session"/>
    </field>
    <constructor name="new" c:identifier="soup_session_async_new">
      <return-value transfer-ownership="full">
        <type name="Session"/>
      </return-value>
    </constructor>
  </class>
struct SessionAsyncClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="SessionClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <callback name="SessionCallback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="session" transfer-ownership="none">
        <type name="Session"/>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct SessionClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="request_started">
    <callback name="request_started">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="socket" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="authenticate">
    <callback name="authenticate">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="retrying" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="queue_message">
    <callback name="queue_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="full">
          <type name="Message"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" allow-none="1" scope="async" closure="3">
          <type name="SessionCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" allow-none="1" closure="3">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="requeue_message">
    <callback name="requeue_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="send_message">
    <callback name="send_message">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="cancel_message">
    <callback name="cancel_message">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="status_code" transfer-ownership="none">
          <type name="guint32"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="auth_required">
    <callback name="auth_required">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="auth" transfer-ownership="none">
          <type name="Auth"/>
        </parameter>
        <parameter name="retrying" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="flush_queue">
    <callback name="flush_queue">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="kick">
    <callback name="kick">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <interface name="SessionFeature" glib:type-name="SoupSessionFeature" glib:get-type="soup_session_feature_get_type" glib:type-struct="SessionFeatureInterface">
    <method name="add_feature" c:identifier="soup_session_feature_add_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="attach" c:identifier="soup_session_feature_attach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </method>
    <method name="detach" c:identifier="soup_session_feature_detach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </method>
    <method name="has_feature" c:identifier="soup_session_feature_has_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <method name="remove_feature" c:identifier="soup_session_feature_remove_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </method>
    <virtual-method name="add_feature" offset="65535" invoker="add_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="attach" offset="65535" invoker="attach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="detach" offset="65535" invoker="detach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="has_feature" offset="65535" invoker="has_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="remove_feature" offset="65535" invoker="remove_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_queued" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_started" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="socket" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="request_unqueued" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </virtual-method>
  </interface>
struct SessionFeatureInterface
{
 glib:is-gtype-struct="1"  <field name="parent">
    <type name="GObject.TypeInterface"/>
  </field>
  <field name="attach">
    <callback name="attach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="detach">
    <callback name="detach">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="request_queued">
    <callback name="request_queued">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="request_started">
    <callback name="request_started">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
        <parameter name="socket" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="request_unqueued">
    <callback name="request_unqueued">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="session" transfer-ownership="none">
          <type name="Session"/>
        </parameter>
        <parameter name="msg" transfer-ownership="none">
          <type name="Message"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="add_feature">
    <callback name="add_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="remove_feature">
    <callback name="remove_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="has_feature">
    <callback name="has_feature">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="feature" transfer-ownership="none">
          <type name="SessionFeature"/>
        </parameter>
        <parameter name="type" transfer-ownership="none">
          <type name="GType"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <class name="SessionSync" parent="Session" glib:type-struct="SessionSyncClass" glib:type-name="SoupSessionSync" glib:get-type="soup_session_sync_get_type">
    <field name="parent">
      <type name="Session"/>
    </field>
    <constructor name="new" c:identifier="soup_session_sync_new">
      <return-value transfer-ownership="full">
        <type name="Session"/>
      </return-value>
    </constructor>
  </class>
struct SessionSyncClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="SessionClass"/>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <class name="Socket" parent="GObject.Object" glib:type-struct="SocketClass" glib:type-name="SoupSocket" glib:get-type="soup_socket_get_type">
    <field name="parent">
      <type name="GObject.Object"/>
    </field>
    <method name="connect_async" c:identifier="soup_socket_connect_async">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
        <parameter name="callback" transfer-ownership="none" scope="async" closure="2">
          <type name="SocketCallback"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </method>
    <method name="connect_sync" c:identifier="soup_socket_connect_sync">
      <return-value transfer-ownership="none">
        <type name="guint32"/>
      </return-value>
      <parameters>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <method name="disconnect" c:identifier="soup_socket_disconnect">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="get_fd" c:identifier="soup_socket_get_fd">
      <return-value transfer-ownership="none">
        <type name="gint32"/>
      </return-value>
    </method>
    <method name="get_local_address" c:identifier="soup_socket_get_local_address">
      <return-value transfer-ownership="none">
        <type name="Address"/>
      </return-value>
    </method>
    <method name="get_remote_address" c:identifier="soup_socket_get_remote_address">
      <return-value transfer-ownership="none">
        <type name="Address"/>
      </return-value>
    </method>
    <method name="is_connected" c:identifier="soup_socket_is_connected">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="is_ssl" c:identifier="soup_socket_is_ssl">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="listen" c:identifier="soup_socket_listen">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="read" c:identifier="soup_socket_read" throws="1">
      <return-value transfer-ownership="none">
        <type name="SocketIOStatus"/>
      </return-value>
      <parameters>
        <parameter name="buffer" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="len" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="nread" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="guint64"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <method name="read_until" c:identifier="soup_socket_read_until" throws="1">
      <return-value transfer-ownership="none">
        <type name="SocketIOStatus"/>
      </return-value>
      <parameters>
        <parameter name="buffer" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="len" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="boundary" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="boundary_len" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="nread" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="guint64"/>
        </parameter>
        <parameter name="got_boundary" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <method name="start_proxy_ssl" c:identifier="soup_socket_start_proxy_ssl">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="ssl_host" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <method name="start_ssl" c:identifier="soup_socket_start_ssl">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <method name="write" c:identifier="soup_socket_write" throws="1">
      <return-value transfer-ownership="none">
        <type name="SocketIOStatus"/>
      </return-value>
      <parameters>
        <parameter name="buffer" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="len" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="nwrote" transfer-ownership="full" direction="out" caller-allocates="0">
          <type name="guint64"/>
        </parameter>
        <parameter name="cancellable" transfer-ownership="none" allow-none="1">
          <type name="Gio.Cancellable"/>
        </parameter>
      </parameters>
    </method>
    <property name="async-context" writable="1" construct-only="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="clean-dispose" readable="0" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="is-server" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="local-address" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Address"/>
    </property>
    <property name="non-blocking" writable="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="remote-address" writable="1" construct-only="1" transfer-ownership="none">
      <type name="Address"/>
    </property>
    <property name="ssl-creds" writable="1" transfer-ownership="none">
      <type name="any"/>
    </property>
    <property name="ssl-fallback" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="ssl-strict" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="timeout" writable="1" transfer-ownership="none">
      <type name="guint32"/>
    </property>
    <property name="tls-certificate" transfer-ownership="none">
      <type name="Gio.TlsCertificate"/>
    </property>
    <property name="tls-errors" transfer-ownership="none">
      <type name="Gio.TlsCertificateFlags"/>
    </property>
    <property name="trusted-certificate" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <property name="use-thread-context" writable="1" construct-only="1" transfer-ownership="none">
      <type name="gboolean"/>
    </property>
    <glib:signal name="disconnected" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="event" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="event" transfer-ownership="none">
          <type name="Gio.SocketClientEvent"/>
        </parameter>
        <parameter name="connection" transfer-ownership="none">
          <type name="Gio.IOStream"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="new-connection" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="new" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </glib:signal>
    <glib:signal name="readable" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <glib:signal name="writable" when="CLEANUP">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </glib:signal>
    <virtual-method name="disconnected" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="new_connection" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="unknown" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </virtual-method>
    <virtual-method name="readable" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
    <virtual-method name="writable" offset="65535">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </virtual-method>
  </class>
  <callback name="SocketCallback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="sock" transfer-ownership="none">
        <type name="Socket"/>
      </parameter>
      <parameter name="status" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct SocketClass
{
 glib:is-gtype-struct="1"  <field name="parent_class">
    <type name="GObject.ObjectClass"/>
  </field>
  <field name="readable">
    <callback name="readable">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="unknown" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="writable">
    <callback name="writable">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="unknown" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="disconnected">
    <callback name="disconnected">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="unknown" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="new_connection">
    <callback name="new_connection">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="unknown" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
        <parameter name="unknown" transfer-ownership="none">
          <type name="Socket"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="_libsoup_reserved1">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved2">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved3">
    <type name="any"/>
  </field>
  <field name="_libsoup_reserved4">
    <type name="any"/>
  </field>
};
  <enumeration name="SocketIOStatus" glib:type-name="SoupSocketIOStatus" glib:get-type="soup_socket_io_status_get_type">
    <member name="ok" value="0">
      <attribute name="c:identifier" value="SOUP_SOCKET_OK"/>
    </member>
    <member name="would_block" value="1">
      <attribute name="c:identifier" value="SOUP_SOCKET_WOULD_BLOCK"/>
    </member>
    <member name="eof" value="2">
      <attribute name="c:identifier" value="SOUP_SOCKET_EOF"/>
    </member>
    <member name="error" value="3">
      <attribute name="c:identifier" value="SOUP_SOCKET_ERROR"/>
    </member>
  </enumeration>
  <constant name="TYPES_H" value="1">
    <type name="gint32"/>
  </constant>
struct URI
{
 glib:type-name="SoupURI" glib:get-type="soup_uri_get_type"  <field name="scheme" writable="1">
    <type name="utf8"/>
  </field>
  <field name="user" writable="1">
    <type name="utf8"/>
  </field>
  <field name="password" writable="1">
    <type name="utf8"/>
  </field>
  <field name="host" writable="1">
    <type name="utf8"/>
  </field>
  <field name="port" writable="1">
    <type name="guint32"/>
  </field>
  <field name="path" writable="1">
    <type name="utf8"/>
  </field>
  <field name="query" writable="1">
    <type name="utf8"/>
  </field>
  <field name="fragment" writable="1">
    <type name="utf8"/>
  </field>
  <constructor name="new" c:identifier="soup_uri_new">
    <return-value transfer-ownership="full">
      <type name="URI"/>
    </return-value>
    <parameters>
      <parameter name="uri_string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="copy" c:identifier="soup_uri_copy">
    <return-value transfer-ownership="full">
      <type name="URI"/>
    </return-value>
  </method>
  <method name="copy_host" c:identifier="soup_uri_copy_host">
    <return-value transfer-ownership="full">
      <type name="URI"/>
    </return-value>
  </method>
  <method name="equal" c:identifier="soup_uri_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri2" transfer-ownership="none">
        <type name="URI"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="soup_uri_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_fragment" c:identifier="soup_uri_get_fragment">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_host" c:identifier="soup_uri_get_host">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_password" c:identifier="soup_uri_get_password">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_path" c:identifier="soup_uri_get_path">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_port" c:identifier="soup_uri_get_port">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_query" c:identifier="soup_uri_get_query">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_scheme" c:identifier="soup_uri_get_scheme">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_user" c:identifier="soup_uri_get_user">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="host_equal" c:identifier="soup_uri_host_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="v2" transfer-ownership="none">
        <type name="URI"/>
      </parameter>
    </parameters>
  </method>
  <method name="host_hash" c:identifier="soup_uri_host_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="new_with_base" c:identifier="soup_uri_new_with_base">
    <return-value transfer-ownership="full">
      <type name="URI"/>
    </return-value>
    <parameters>
      <parameter name="uri_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_fragment" c:identifier="soup_uri_set_fragment">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="fragment" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_host" c:identifier="soup_uri_set_host">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="host" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_password" c:identifier="soup_uri_set_password">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="password" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_path" c:identifier="soup_uri_set_path">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="path" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_port" c:identifier="soup_uri_set_port">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="port" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_query" c:identifier="soup_uri_set_query">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="query" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_query_from_form" c:identifier="soup_uri_set_query_from_form">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="form" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </method>
  <method name="set_scheme" c:identifier="soup_uri_set_scheme">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="scheme" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_user" c:identifier="soup_uri_set_user">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="user" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_string" c:identifier="soup_uri_to_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="just_path_and_query" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="uses_default_port" c:identifier="soup_uri_uses_default_port">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <function name="decode" c:identifier="soup_uri_decode">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="encode" c:identifier="soup_uri_encode">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="escape_extra" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="normalize" c:identifier="soup_uri_normalize">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="unescape_extra" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
};
  <constant name="URI_H" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="VALUE_UTILS_H" value="1">
    <type name="gint32"/>
  </constant>
  <enumeration name="XMLRPCError" glib:type-name="SoupXMLRPCError" glib:get-type="soup_xmlrpc_error_get_type" glib:error-domain="soup_xmlrpc_error_quark">
    <member name="arguments" value="0">
      <attribute name="c:identifier" value="SOUP_XMLRPC_ERROR_ARGUMENTS"/>
    </member>
    <member name="retval" value="1">
      <attribute name="c:identifier" value="SOUP_XMLRPC_ERROR_RETVAL"/>
    </member>
  </enumeration>
  <enumeration name="XMLRPCFault" glib:type-name="SoupXMLRPCFault" glib:get-type="soup_xmlrpc_fault_get_type">
    <member name="parse_error_not_well_formed" value="-32700">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_PARSE_ERROR_NOT_WELL_FORMED"/>
    </member>
    <member name="parse_error_unsupported_encoding" value="-32701">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_PARSE_ERROR_UNSUPPORTED_ENCODING"/>
    </member>
    <member name="parse_error_invalid_character_for_encoding" value="-32702">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_PARSE_ERROR_INVALID_CHARACTER_FOR_ENCODING"/>
    </member>
    <member name="server_error_invalid_xml_rpc" value="-32600">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_SERVER_ERROR_INVALID_XML_RPC"/>
    </member>
    <member name="server_error_requested_method_not_found" value="-32601">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_SERVER_ERROR_REQUESTED_METHOD_NOT_FOUND"/>
    </member>
    <member name="server_error_invalid_method_parameters" value="-32602">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_SERVER_ERROR_INVALID_METHOD_PARAMETERS"/>
    </member>
    <member name="server_error_internal_xml_rpc_error" value="-32603">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_SERVER_ERROR_INTERNAL_XML_RPC_ERROR"/>
    </member>
    <member name="application_error" value="-32500">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_APPLICATION_ERROR"/>
    </member>
    <member name="system_error" value="-32400">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_SYSTEM_ERROR"/>
    </member>
    <member name="transport_error" value="-32300">
      <attribute name="c:identifier" value="SOUP_XMLRPC_FAULT_TRANSPORT_ERROR"/>
    </member>
  </enumeration>
  <constant name="XMLRPC_H" value="1">
    <type name="gint32"/>
  </constant>
  <function name="cookie_parse" c:identifier="soup_cookie_parse">
    <return-value transfer-ownership="full">
      <type name="Cookie"/>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="origin" transfer-ownership="none">
        <type name="URI"/>
      </parameter>
    </parameters>
  </function>
  <function name="cookies_from_request" c:identifier="soup_cookies_from_request">
    <return-value transfer-ownership="full">
      <type name="GLib.SList">
        <type name="Cookie"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
    </parameters>
  </function>
  <function name="cookies_from_response" c:identifier="soup_cookies_from_response">
    <return-value transfer-ownership="full">
      <type name="GLib.SList">
        <type name="Cookie"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
    </parameters>
  </function>
  <function name="cookies_to_cookie_header" c:identifier="soup_cookies_to_cookie_header">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="cookies" transfer-ownership="none">
        <type name="GLib.SList">
          <type name="Cookie"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="cookies_to_request" c:identifier="soup_cookies_to_request">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="cookies" transfer-ownership="none">
        <type name="GLib.SList">
          <type name="Cookie"/>
        </type>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
    </parameters>
  </function>
  <function name="cookies_to_response" c:identifier="soup_cookies_to_response">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="cookies" transfer-ownership="none">
        <type name="GLib.SList">
          <type name="Cookie"/>
        </type>
      </parameter>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
    </parameters>
  </function>
  <function name="form_decode" c:identifier="soup_form_decode">
    <return-value transfer-ownership="full">
      <type name="GLib.HashTable">
        <type name="utf8"/>
        <type name="utf8"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="encoded_form" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="form_decode_multipart" c:identifier="soup_form_decode_multipart">
    <return-value transfer-ownership="full">
      <type name="GLib.HashTable">
        <type name="utf8"/>
        <type name="utf8"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="msg" transfer-ownership="none">
        <type name="Message"/>
      </parameter>
      <parameter name="file_control_name" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="filename" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="content_type" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="Buffer"/>
      </parameter>
    </parameters>
  </function>
  <function name="form_encode_datalist" c:identifier="soup_form_encode_datalist">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="form_data_set" transfer-ownership="none">
        <type name="GLib.Data"/>
      </parameter>
    </parameters>
  </function>
  <function name="form_encode_hash" c:identifier="soup_form_encode_hash">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="form_data_set" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="form_request_new_from_datalist" c:identifier="soup_form_request_new_from_datalist">
    <return-value transfer-ownership="full">
      <type name="Message"/>
    </return-value>
    <parameters>
      <parameter name="method" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="form_data_set" transfer-ownership="none">
        <type name="GLib.Data"/>
      </parameter>
    </parameters>
  </function>
  <function name="form_request_new_from_hash" c:identifier="soup_form_request_new_from_hash">
    <return-value transfer-ownership="full">
      <type name="Message"/>
    </return-value>
    <parameters>
      <parameter name="method" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="form_data_set" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="form_request_new_from_multipart" c:identifier="soup_form_request_new_from_multipart">
    <return-value transfer-ownership="full">
      <type name="Message"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="multipart" transfer-ownership="none">
        <type name="Multipart"/>
      </parameter>
    </parameters>
  </function>
  <function name="header_contains" c:identifier="soup_header_contains">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="token" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="header_free_param_list" c:identifier="soup_header_free_param_list">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="param_list" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="header_g_string_append_param" c:identifier="soup_header_g_string_append_param">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="GLib.String"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="header_g_string_append_param_quoted" c:identifier="soup_header_g_string_append_param_quoted">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="GLib.String"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="header_parse_list" c:identifier="soup_header_parse_list">
    <return-value transfer-ownership="full">
      <type name="GLib.SList">
        <type name="utf8"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="header_parse_param_list" c:identifier="soup_header_parse_param_list">
    <return-value transfer-ownership="full">
      <type name="GLib.HashTable">
        <type name="utf8"/>
        <type name="utf8"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="header_parse_quality_list" c:identifier="soup_header_parse_quality_list">
    <return-value transfer-ownership="full">
      <type name="GLib.SList">
        <type name="utf8"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="unacceptable" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="GLib.SList">
          <type name="utf8"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="header_parse_semi_param_list" c:identifier="soup_header_parse_semi_param_list">
    <return-value transfer-ownership="full">
      <type name="GLib.HashTable">
        <type name="utf8"/>
        <type name="utf8"/>
      </type>
    </return-value>
    <parameters>
      <parameter name="header" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="headers_parse" c:identifier="soup_headers_parse">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="dest" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
    </parameters>
  </function>
  <function name="headers_parse_request" c:identifier="soup_headers_parse_request">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="req_headers" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
      <parameter name="req_method" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="req_path" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="ver" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="HTTPVersion"/>
      </parameter>
    </parameters>
  </function>
  <function name="headers_parse_response" c:identifier="soup_headers_parse_response">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="headers" transfer-ownership="none">
        <type name="MessageHeaders"/>
      </parameter>
      <parameter name="ver" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="HTTPVersion"/>
      </parameter>
      <parameter name="status_code" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint32"/>
      </parameter>
      <parameter name="reason_phrase" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="headers_parse_status_line" c:identifier="soup_headers_parse_status_line">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="status_line" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="ver" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="HTTPVersion"/>
      </parameter>
      <parameter name="status_code" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint32"/>
      </parameter>
      <parameter name="reason_phrase" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="http_error_quark" c:identifier="soup_http_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="status_get_phrase" c:identifier="soup_status_get_phrase">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="status_code" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="status_proxify" c:identifier="soup_status_proxify">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="status_code" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="str_case_equal" c:identifier="soup_str_case_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="v1" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="v2" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="str_case_hash" c:identifier="soup_str_case_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_decode" c:identifier="soup_uri_decode">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_encode" c:identifier="soup_uri_encode">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="escape_extra" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_normalize" c:identifier="soup_uri_normalize">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="part" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="unescape_extra" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="value_array_new" c:identifier="soup_value_array_new">
    <return-value transfer-ownership="full">
      <type name="GObject.ValueArray"/>
    </return-value>
  </function>
  <function name="value_hash_insert_value" c:identifier="soup_value_hash_insert_value">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="utf8"/>
          <type name="GObject.Value"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="GObject.Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="value_hash_new" c:identifier="soup_value_hash_new">
    <return-value transfer-ownership="full">
      <type name="GLib.HashTable">
        <type name="utf8"/>
        <type name="GObject.Value"/>
      </type>
    </return-value>
  </function>
  <function name="xmlrpc_build_method_call" c:identifier="soup_xmlrpc_build_method_call">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="method_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="params" transfer-ownership="none">
        <array length="2">
          <type name="GObject.Value"/>
        </array>
      </parameter>
      <parameter name="n_params" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="xmlrpc_build_method_response" c:identifier="soup_xmlrpc_build_method_response">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="GObject.Value"/>
      </parameter>
    </parameters>
  </function>
  <function name="xmlrpc_error_quark" c:identifier="soup_xmlrpc_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="xmlrpc_fault_quark" c:identifier="soup_xmlrpc_fault_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="xmlrpc_parse_method_call" c:identifier="soup_xmlrpc_parse_method_call">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="method_call" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="method_name" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="utf8"/>
      </parameter>
      <parameter name="params" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="GObject.ValueArray"/>
      </parameter>
    </parameters>
  </function>
  <function name="xmlrpc_parse_method_response" c:identifier="soup_xmlrpc_parse_method_response" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="method_response" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="GObject.Value"/>
      </parameter>
    </parameters>
  </function>
} // namespace Soup
</repository>
