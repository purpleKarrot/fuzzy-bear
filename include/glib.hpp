<?xml version="1.0"?>
<repository version="1.0"
            xmlns="http://www.gtk.org/introspection/core/1.0"
            xmlns:c="http://www.gtk.org/introspection/c/1.0"
            xmlns:glib="http://www.gtk.org/introspection/glib/1.0"namespace GLib
{
>
  <constant name="ASCII_DTOSTR_BUF_SIZE" value="39">
    <type name="gint32"/>
  </constant>
struct Array
{
 glib:type-name="GArray" glib:get-type="g_array_get_type"  <field name="data" writable="1">
    <type name="utf8"/>
  </field>
  <field name="len" writable="1">
    <type name="guint32"/>
  </field>
  <function name="free" c:identifier="g_array_free">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="free_segment" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_element_size" c:identifier="g_array_get_element_size">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="set_clear_func" c:identifier="g_array_set_clear_func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="clear_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="unref" c:identifier="g_array_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
    </parameters>
  </function>
};
  <bitfield name="AsciiType">
    <member name="alnum" value="1">
      <attribute name="c:identifier" value="G_ASCII_ALNUM"/>
    </member>
    <member name="alpha" value="2">
      <attribute name="c:identifier" value="G_ASCII_ALPHA"/>
    </member>
    <member name="cntrl" value="4">
      <attribute name="c:identifier" value="G_ASCII_CNTRL"/>
    </member>
    <member name="digit" value="8">
      <attribute name="c:identifier" value="G_ASCII_DIGIT"/>
    </member>
    <member name="graph" value="16">
      <attribute name="c:identifier" value="G_ASCII_GRAPH"/>
    </member>
    <member name="lower" value="32">
      <attribute name="c:identifier" value="G_ASCII_LOWER"/>
    </member>
    <member name="print" value="64">
      <attribute name="c:identifier" value="G_ASCII_PRINT"/>
    </member>
    <member name="punct" value="128">
      <attribute name="c:identifier" value="G_ASCII_PUNCT"/>
    </member>
    <member name="space" value="256">
      <attribute name="c:identifier" value="G_ASCII_SPACE"/>
    </member>
    <member name="upper" value="512">
      <attribute name="c:identifier" value="G_ASCII_UPPER"/>
    </member>
    <member name="xdigit" value="1024">
      <attribute name="c:identifier" value="G_ASCII_XDIGIT"/>
    </member>
  </bitfield>
struct AsyncQueue
{
  <method name="length" c:identifier="g_async_queue_length">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="length_unlocked" c:identifier="g_async_queue_length_unlocked">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="lock" c:identifier="g_async_queue_lock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="push" c:identifier="g_async_queue_push">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="push_unlocked" c:identifier="g_async_queue_push_unlocked">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref_unlocked" c:identifier="g_async_queue_ref_unlocked">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unlock" c:identifier="g_async_queue_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_async_queue_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unref_and_unlock" c:identifier="g_async_queue_unref_and_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <constant name="BIG_ENDIAN" value="4321">
    <type name="gint32"/>
  </constant>
struct BookmarkFile
{
  <method name="add_application" c:identifier="g_bookmark_file_add_application">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="name" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="exec" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_group" c:identifier="g_bookmark_file_add_group">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="group" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_bookmark_file_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_added" c:identifier="g_bookmark_file_get_added" throws="1">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_app_info" c:identifier="g_bookmark_file_get_app_info" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="exec" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="count" transfer-ownership="none" allow-none="1">
        <type name="guint32"/>
      </parameter>
      <parameter name="stamp" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_description" c:identifier="g_bookmark_file_get_description" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_icon" c:identifier="g_bookmark_file_get_icon" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="href" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="mime_type" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_is_private" c:identifier="g_bookmark_file_get_is_private" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_mime_type" c:identifier="g_bookmark_file_get_mime_type" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_modified" c:identifier="g_bookmark_file_get_modified" throws="1">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_size" c:identifier="g_bookmark_file_get_size">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_title" c:identifier="g_bookmark_file_get_title" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_visited" c:identifier="g_bookmark_file_get_visited" throws="1">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="has_application" c:identifier="g_bookmark_file_has_application" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="has_group" c:identifier="g_bookmark_file_has_group" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="group" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="has_item" c:identifier="g_bookmark_file_has_item">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_data" c:identifier="g_bookmark_file_load_from_data" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_data_dirs" c:identifier="g_bookmark_file_load_from_data_dirs" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="full_path" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_file" c:identifier="g_bookmark_file_load_from_file" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="move_item" c:identifier="g_bookmark_file_move_item" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="old_uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="new_uri" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_application" c:identifier="g_bookmark_file_remove_application" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_group" c:identifier="g_bookmark_file_remove_group" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="group" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_item" c:identifier="g_bookmark_file_remove_item" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_added" c:identifier="g_bookmark_file_set_added">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="added" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_app_info" c:identifier="g_bookmark_file_set_app_info" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="exec" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="count" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="stamp" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_description" c:identifier="g_bookmark_file_set_description">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="description" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_groups" c:identifier="g_bookmark_file_set_groups">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="groups" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_icon" c:identifier="g_bookmark_file_set_icon">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="href" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="mime_type" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_is_private" c:identifier="g_bookmark_file_set_is_private">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="is_private" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_mime_type" c:identifier="g_bookmark_file_set_mime_type">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="mime_type" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_modified" c:identifier="g_bookmark_file_set_modified">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="modified" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_title" c:identifier="g_bookmark_file_set_title">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="title" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_visited" c:identifier="g_bookmark_file_set_visited">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="visited" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_data" c:identifier="g_bookmark_file_to_data" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="none" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_file" c:identifier="g_bookmark_file_to_file" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <function name="error_quark" c:identifier="g_bookmark_file_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
};
  <enumeration name="BookmarkFileError" glib:error-domain="g-bookmark-file-error-quark">
    <member name="invalid_uri" value="0">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_INVALID_URI"/>
    </member>
    <member name="invalid_value" value="1">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_INVALID_VALUE"/>
    </member>
    <member name="app_not_registered" value="2">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED"/>
    </member>
    <member name="uri_not_found" value="3">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND"/>
    </member>
    <member name="read" value="4">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_READ"/>
    </member>
    <member name="unknown_encoding" value="5">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING"/>
    </member>
    <member name="write" value="6">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_WRITE"/>
    </member>
    <member name="file_not_found" value="7">
      <attribute name="c:identifier" value="G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND"/>
    </member>
  </enumeration>
struct ByteArray
{
 glib:type-name="GByteArray" glib:get-type="g_byte_array_get_type"  <field name="data" writable="1">
    <type name="guint8"/>
  </field>
  <field name="len" writable="1">
    <type name="guint32"/>
  </field>
  <function name="free" c:identifier="g_byte_array_free">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.ByteArray">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="free_segment" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="free_to_bytes" c:identifier="g_byte_array_free_to_bytes">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="full">
        <array name="GLib.ByteArray">
          <type name="guint8"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="new_take" c:identifier="g_byte_array_new_take">
    <return-value transfer-ownership="full">
      <array name="GLib.ByteArray">
        <type name="guint8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="unref" c:identifier="g_byte_array_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.ByteArray">
          <type name="guint8"/>
        </array>
      </parameter>
    </parameters>
  </function>
};
struct Bytes
{
 glib:type-name="GBytes" glib:get-type="g_bytes_get_type"  <constructor name="new" c:identifier="g_bytes_new">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_static" c:identifier="g_bytes_new_static">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_take" c:identifier="g_bytes_new_take">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="full">
        <array length="1">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_with_free_func" c:identifier="g_bytes_new_with_free_func">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="free_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="compare" c:identifier="g_bytes_compare">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="bytes2" transfer-ownership="none">
        <type name="Bytes"/>
      </parameter>
    </parameters>
  </method>
  <method name="equal" c:identifier="g_bytes_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="bytes2" transfer-ownership="none">
        <type name="Bytes"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_size" c:identifier="g_bytes_get_size">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="hash" c:identifier="g_bytes_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="new_from_bytes" c:identifier="g_bytes_new_from_bytes">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
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
  <method name="ref" c:identifier="g_bytes_ref">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_bytes_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unref_to_array" c:identifier="g_bytes_unref_to_array">
    <return-value transfer-ownership="full">
      <array name="GLib.ByteArray">
        <type name="guint8"/>
      </array>
    </return-value>
  </method>
  <method name="unref_to_data" c:identifier="g_bytes_unref_to_data">
    <return-value transfer-ownership="full">
      <type name="any"/>
    </return-value>
    <parameters>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
};
  <constant name="CAN_INLINE" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="CSET_A_2_Z" value="ABCDEFGHIJKLMNOPQRSTUVWXYZ">
    <type name="utf8"/>
  </constant>
  <constant name="CSET_DIGITS" value="0123456789">
    <type name="utf8"/>
  </constant>
  <constant name="CSET_a_2_z" value="abcdefghijklmnopqrstuvwxyz">
    <type name="utf8"/>
  </constant>
struct Checksum
{
  <method name="free" c:identifier="g_checksum_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_digest" c:identifier="g_checksum_get_digest">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="buffer" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="digest_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_string" c:identifier="g_checksum_get_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="reset" c:identifier="g_checksum_reset">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="update" c:identifier="g_checksum_update">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <function name="type_get_length" c:identifier="g_checksum_type_get_length">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="checksum_type" transfer-ownership="none">
        <type name="ChecksumType"/>
      </parameter>
    </parameters>
  </function>
};
  <enumeration name="ChecksumType">
    <member name="md5" value="0">
      <attribute name="c:identifier" value="G_CHECKSUM_MD5"/>
    </member>
    <member name="sha1" value="1">
      <attribute name="c:identifier" value="G_CHECKSUM_SHA1"/>
    </member>
    <member name="sha256" value="2">
      <attribute name="c:identifier" value="G_CHECKSUM_SHA256"/>
    </member>
  </enumeration>
  <callback name="ChildWatchFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="pid" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="status" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="CompareDataFunc">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="CompareFunc">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct Cond
{
  <field name="p">
    <type name="any"/>
  </field>
  <field name="i">
    <array fixed-size="2">
      <type name="guint32"/>
    </array>
  </field>
  <method name="broadcast" c:identifier="g_cond_broadcast">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="clear" c:identifier="g_cond_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="init" c:identifier="g_cond_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="signal" c:identifier="g_cond_signal">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="wait" c:identifier="g_cond_wait">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="mutex" transfer-ownership="none">
        <type name="Mutex"/>
      </parameter>
    </parameters>
  </method>
  <method name="wait_until" c:identifier="g_cond_wait_until">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="mutex" transfer-ownership="none">
        <type name="Mutex"/>
      </parameter>
      <parameter name="end_time" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
};
  <enumeration name="ConvertError" glib:error-domain="g_convert_error">
    <member name="no_conversion" value="0">
      <attribute name="c:identifier" value="G_CONVERT_ERROR_NO_CONVERSION"/>
    </member>
    <member name="illegal_sequence" value="1">
      <attribute name="c:identifier" value="G_CONVERT_ERROR_ILLEGAL_SEQUENCE"/>
    </member>
    <member name="failed" value="2">
      <attribute name="c:identifier" value="G_CONVERT_ERROR_FAILED"/>
    </member>
    <member name="partial_input" value="3">
      <attribute name="c:identifier" value="G_CONVERT_ERROR_PARTIAL_INPUT"/>
    </member>
    <member name="bad_uri" value="4">
      <attribute name="c:identifier" value="G_CONVERT_ERROR_BAD_URI"/>
    </member>
    <member name="not_absolute_path" value="5">
      <attribute name="c:identifier" value="G_CONVERT_ERROR_NOT_ABSOLUTE_PATH"/>
    </member>
  </enumeration>
  <constant name="DATALIST_FLAGS_MASK" value="3">
    <type name="gint32"/>
  </constant>
  <constant name="DATE_BAD_DAY" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="DATE_BAD_JULIAN" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="DATE_BAD_YEAR" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="DIR_SEPARATOR" value="92">
    <type name="gint32"/>
  </constant>
  <constant name="DIR_SEPARATOR_S" value="\">
    <type name="utf8"/>
  </constant>
struct Data
{
};
  <callback name="DataForeachFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="key_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct Date
{
 glib:type-name="GDate" glib:get-type="g_date_get_type"  <field name="julian_days" writable="1">
    <type name="guint32"/>
  </field>
  <field name="julian" writable="1">
    <type name="guint32"/>
  </field>
  <field name="dmy" writable="1">
    <type name="guint32"/>
  </field>
  <field name="day" writable="1">
    <type name="guint32"/>
  </field>
  <field name="month" writable="1">
    <type name="guint32"/>
  </field>
  <field name="year" writable="1">
    <type name="guint32"/>
  </field>
  <constructor name="new" c:identifier="g_date_new">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
  </constructor>
  <constructor name="new_dmy" c:identifier="g_date_new_dmy">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_julian" c:identifier="g_date_new_julian">
    <return-value transfer-ownership="full">
      <type name="Date"/>
    </return-value>
    <parameters>
      <parameter name="julian_day" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="add_days" c:identifier="g_date_add_days">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_days" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_months" c:identifier="g_date_add_months">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_months" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_years" c:identifier="g_date_add_years">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_years" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="clamp" c:identifier="g_date_clamp">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="min_date" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
      <parameter name="max_date" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </method>
  <method name="clear" c:identifier="g_date_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_dates" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="compare" c:identifier="g_date_compare">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="rhs" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </method>
  <method name="days_between" c:identifier="g_date_days_between">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="date2" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_date_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_day" c:identifier="g_date_get_day">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
  </method>
  <method name="get_day_of_year" c:identifier="g_date_get_day_of_year">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_iso8601_week_of_year" c:identifier="g_date_get_iso8601_week_of_year">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_julian" c:identifier="g_date_get_julian">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_monday_week_of_year" c:identifier="g_date_get_monday_week_of_year">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_month" c:identifier="g_date_get_month">
    <return-value transfer-ownership="none">
      <type name="DateMonth"/>
    </return-value>
  </method>
  <method name="get_sunday_week_of_year" c:identifier="g_date_get_sunday_week_of_year">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_weekday" c:identifier="g_date_get_weekday">
    <return-value transfer-ownership="none">
      <type name="DateWeekday"/>
    </return-value>
  </method>
  <method name="get_year" c:identifier="g_date_get_year">
    <return-value transfer-ownership="none">
      <type name="guint16"/>
    </return-value>
  </method>
  <method name="is_first_of_month" c:identifier="g_date_is_first_of_month">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_last_of_month" c:identifier="g_date_is_last_of_month">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="order" c:identifier="g_date_order">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="date2" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_day" c:identifier="g_date_set_day">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_dmy" c:identifier="g_date_set_dmy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
      <parameter name="y" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_julian" c:identifier="g_date_set_julian">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="julian_date" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_month" c:identifier="g_date_set_month">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_parse" c:identifier="g_date_set_parse">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_time" c:identifier="g_date_set_time" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="time_" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_time_t" c:identifier="g_date_set_time_t">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="timet" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_time_val" c:identifier="g_date_set_time_val">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="timeval" transfer-ownership="none">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_year" c:identifier="g_date_set_year">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </method>
  <method name="subtract_days" c:identifier="g_date_subtract_days">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_days" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="subtract_months" c:identifier="g_date_subtract_months">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_months" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="subtract_years" c:identifier="g_date_subtract_years">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_years" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_struct_tm" c:identifier="g_date_to_struct_tm">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="tm" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="valid" c:identifier="g_date_valid">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <function name="get_days_in_month" c:identifier="g_date_get_days_in_month">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_monday_weeks_in_year" c:identifier="g_date_get_monday_weeks_in_year">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_sunday_weeks_in_year" c:identifier="g_date_get_sunday_weeks_in_year">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="is_leap_year" c:identifier="g_date_is_leap_year">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="strftime" c:identifier="g_date_strftime">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="s" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="slen" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="format" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="date" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </function>
  <function name="valid_day" c:identifier="g_date_valid_day">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="valid_dmy" c:identifier="g_date_valid_dmy">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="valid_julian" c:identifier="g_date_valid_julian">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="julian_date" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="valid_month" c:identifier="g_date_valid_month">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
    </parameters>
  </function>
  <function name="valid_weekday" c:identifier="g_date_valid_weekday">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="weekday" transfer-ownership="none">
        <type name="DateWeekday"/>
      </parameter>
    </parameters>
  </function>
  <function name="valid_year" c:identifier="g_date_valid_year">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
};
  <enumeration name="DateDMY">
    <member name="day" value="0">
      <attribute name="c:identifier" value="G_DATE_DAY"/>
    </member>
    <member name="month" value="1">
      <attribute name="c:identifier" value="G_DATE_MONTH"/>
    </member>
    <member name="year" value="2">
      <attribute name="c:identifier" value="G_DATE_YEAR"/>
    </member>
  </enumeration>
  <enumeration name="DateMonth">
    <member name="bad_month" value="0">
      <attribute name="c:identifier" value="G_DATE_BAD_MONTH"/>
    </member>
    <member name="january" value="1">
      <attribute name="c:identifier" value="G_DATE_JANUARY"/>
    </member>
    <member name="february" value="2">
      <attribute name="c:identifier" value="G_DATE_FEBRUARY"/>
    </member>
    <member name="march" value="3">
      <attribute name="c:identifier" value="G_DATE_MARCH"/>
    </member>
    <member name="april" value="4">
      <attribute name="c:identifier" value="G_DATE_APRIL"/>
    </member>
    <member name="may" value="5">
      <attribute name="c:identifier" value="G_DATE_MAY"/>
    </member>
    <member name="june" value="6">
      <attribute name="c:identifier" value="G_DATE_JUNE"/>
    </member>
    <member name="july" value="7">
      <attribute name="c:identifier" value="G_DATE_JULY"/>
    </member>
    <member name="august" value="8">
      <attribute name="c:identifier" value="G_DATE_AUGUST"/>
    </member>
    <member name="september" value="9">
      <attribute name="c:identifier" value="G_DATE_SEPTEMBER"/>
    </member>
    <member name="october" value="10">
      <attribute name="c:identifier" value="G_DATE_OCTOBER"/>
    </member>
    <member name="november" value="11">
      <attribute name="c:identifier" value="G_DATE_NOVEMBER"/>
    </member>
    <member name="december" value="12">
      <attribute name="c:identifier" value="G_DATE_DECEMBER"/>
    </member>
  </enumeration>
struct DateTime
{
 glib:type-name="GDateTime" glib:get-type="g_date_time_get_type"  <constructor name="new" c:identifier="g_date_time_new">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="tz" transfer-ownership="none">
        <type name="TimeZone"/>
      </parameter>
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
      <parameter name="seconds" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_timeval_local" c:identifier="g_date_time_new_from_timeval_local">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="tv" transfer-ownership="none">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_timeval_utc" c:identifier="g_date_time_new_from_timeval_utc">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="tv" transfer-ownership="none">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_unix_local" c:identifier="g_date_time_new_from_unix_local">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="t" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_unix_utc" c:identifier="g_date_time_new_from_unix_utc">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="t" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_local" c:identifier="g_date_time_new_local">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
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
      <parameter name="seconds" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_now" c:identifier="g_date_time_new_now">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="tz" transfer-ownership="none">
        <type name="TimeZone"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_now_local" c:identifier="g_date_time_new_now_local">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
  </constructor>
  <constructor name="new_now_utc" c:identifier="g_date_time_new_now_utc">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
  </constructor>
  <constructor name="new_utc" c:identifier="g_date_time_new_utc">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
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
      <parameter name="seconds" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="add" c:identifier="g_date_time_add">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="timespan" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_days" c:identifier="g_date_time_add_days">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="days" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_full" c:identifier="g_date_time_add_full">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="years" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="months" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="days" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="hours" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="minutes" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="seconds" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_hours" c:identifier="g_date_time_add_hours">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="hours" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_minutes" c:identifier="g_date_time_add_minutes">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="minutes" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_months" c:identifier="g_date_time_add_months">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="months" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_seconds" c:identifier="g_date_time_add_seconds">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="seconds" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_weeks" c:identifier="g_date_time_add_weeks">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="weeks" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_years" c:identifier="g_date_time_add_years">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="years" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="difference" c:identifier="g_date_time_difference">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="DateTime"/>
      </parameter>
    </parameters>
  </method>
  <method name="format" c:identifier="g_date_time_format">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="format" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_day_of_month" c:identifier="g_date_time_get_day_of_month">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_day_of_week" c:identifier="g_date_time_get_day_of_week">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_day_of_year" c:identifier="g_date_time_get_day_of_year">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_hour" c:identifier="g_date_time_get_hour">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_microsecond" c:identifier="g_date_time_get_microsecond">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_minute" c:identifier="g_date_time_get_minute">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_month" c:identifier="g_date_time_get_month">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_second" c:identifier="g_date_time_get_second">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_seconds" c:identifier="g_date_time_get_seconds">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </method>
  <method name="get_timezone_abbreviation" c:identifier="g_date_time_get_timezone_abbreviation">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_utc_offset" c:identifier="g_date_time_get_utc_offset">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="get_week_numbering_year" c:identifier="g_date_time_get_week_numbering_year">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_week_of_year" c:identifier="g_date_time_get_week_of_year">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_year" c:identifier="g_date_time_get_year">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_ymd" c:identifier="g_date_time_get_ymd">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="month" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="day" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="is_daylight_savings" c:identifier="g_date_time_is_daylight_savings">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="ref" c:identifier="g_date_time_ref">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
  </method>
  <method name="to_local" c:identifier="g_date_time_to_local">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
  </method>
  <method name="to_timeval" c:identifier="g_date_time_to_timeval">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="tv" transfer-ownership="none">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_timezone" c:identifier="g_date_time_to_timezone">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
    <parameters>
      <parameter name="tz" transfer-ownership="none">
        <type name="TimeZone"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_unix" c:identifier="g_date_time_to_unix">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="to_utc" c:identifier="g_date_time_to_utc">
    <return-value transfer-ownership="full">
      <type name="DateTime"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_date_time_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="compare" c:identifier="g_date_time_compare">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="dt1" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="dt2" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="equal" c:identifier="g_date_time_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="dt1" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="dt2" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash" c:identifier="g_date_time_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="datetime" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
};
  <enumeration name="DateWeekday">
    <member name="bad_weekday" value="0">
      <attribute name="c:identifier" value="G_DATE_BAD_WEEKDAY"/>
    </member>
    <member name="monday" value="1">
      <attribute name="c:identifier" value="G_DATE_MONDAY"/>
    </member>
    <member name="tuesday" value="2">
      <attribute name="c:identifier" value="G_DATE_TUESDAY"/>
    </member>
    <member name="wednesday" value="3">
      <attribute name="c:identifier" value="G_DATE_WEDNESDAY"/>
    </member>
    <member name="thursday" value="4">
      <attribute name="c:identifier" value="G_DATE_THURSDAY"/>
    </member>
    <member name="friday" value="5">
      <attribute name="c:identifier" value="G_DATE_FRIDAY"/>
    </member>
    <member name="saturday" value="6">
      <attribute name="c:identifier" value="G_DATE_SATURDAY"/>
    </member>
    <member name="sunday" value="7">
      <attribute name="c:identifier" value="G_DATE_SUNDAY"/>
    </member>
  </enumeration>
struct DebugKey
{
  <field name="key" writable="1">
    <type name="utf8"/>
  </field>
  <field name="value" writable="1">
    <type name="guint32"/>
  </field>
};
  <callback name="DestroyNotify">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct Dir
{
  <method name="close" c:identifier="g_dir_close">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="read_name" c:identifier="g_dir_read_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="rewind" c:identifier="g_dir_rewind">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="make_tmp" c:identifier="g_dir_make_tmp" throws="1">
    <return-value transfer-ownership="full">
      <type name="filename"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none" allow-none="1">
        <type name="filename"/>
      </parameter>
    </parameters>
  </function>
};
  <union name="DoubleIEEE754">
    <field name="v_double" writable="1">
      <type name="gdouble"/>
    </field>
  </union>
  <constant name="E" value="2.718282">
    <type name="gdouble"/>
  </constant>
  <callback name="EqualFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct Error
{
 glib:type-name="GError" glib:get-type="g_error_get_type"  <field name="domain" writable="1">
    <type name="guint32"/>
  </field>
  <field name="code" writable="1">
    <type name="gint32"/>
  </field>
  <field name="message" writable="1">
    <type name="utf8"/>
  </field>
  <constructor name="new_literal" c:identifier="g_error_new_literal">
    <return-value transfer-ownership="full">
      <type name="GLib.Error"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="code" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="copy" c:identifier="g_error_copy">
    <return-value transfer-ownership="full">
      <type name="GLib.Error"/>
    </return-value>
  </method>
  <method name="free" c:identifier="g_error_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="matches" c:identifier="g_error_matches">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="code" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
};
  <enumeration name="ErrorType">
    <member name="unknown" value="0">
      <attribute name="c:identifier" value="G_ERR_UNKNOWN"/>
    </member>
    <member name="unexp_eof" value="1">
      <attribute name="c:identifier" value="G_ERR_UNEXP_EOF"/>
    </member>
    <member name="unexp_eof_in_string" value="2">
      <attribute name="c:identifier" value="G_ERR_UNEXP_EOF_IN_STRING"/>
    </member>
    <member name="unexp_eof_in_comment" value="3">
      <attribute name="c:identifier" value="G_ERR_UNEXP_EOF_IN_COMMENT"/>
    </member>
    <member name="non_digit_in_const" value="4">
      <attribute name="c:identifier" value="G_ERR_NON_DIGIT_IN_CONST"/>
    </member>
    <member name="digit_radix" value="5">
      <attribute name="c:identifier" value="G_ERR_DIGIT_RADIX"/>
    </member>
    <member name="float_radix" value="6">
      <attribute name="c:identifier" value="G_ERR_FLOAT_RADIX"/>
    </member>
    <member name="float_malformed" value="7">
      <attribute name="c:identifier" value="G_ERR_FLOAT_MALFORMED"/>
    </member>
  </enumeration>
  <enumeration name="FileError" glib:error-domain="g-file-error-quark">
    <member name="exist" value="0">
      <attribute name="c:identifier" value="G_FILE_ERROR_EXIST"/>
    </member>
    <member name="isdir" value="1">
      <attribute name="c:identifier" value="G_FILE_ERROR_ISDIR"/>
    </member>
    <member name="acces" value="2">
      <attribute name="c:identifier" value="G_FILE_ERROR_ACCES"/>
    </member>
    <member name="nametoolong" value="3">
      <attribute name="c:identifier" value="G_FILE_ERROR_NAMETOOLONG"/>
    </member>
    <member name="noent" value="4">
      <attribute name="c:identifier" value="G_FILE_ERROR_NOENT"/>
    </member>
    <member name="notdir" value="5">
      <attribute name="c:identifier" value="G_FILE_ERROR_NOTDIR"/>
    </member>
    <member name="nxio" value="6">
      <attribute name="c:identifier" value="G_FILE_ERROR_NXIO"/>
    </member>
    <member name="nodev" value="7">
      <attribute name="c:identifier" value="G_FILE_ERROR_NODEV"/>
    </member>
    <member name="rofs" value="8">
      <attribute name="c:identifier" value="G_FILE_ERROR_ROFS"/>
    </member>
    <member name="txtbsy" value="9">
      <attribute name="c:identifier" value="G_FILE_ERROR_TXTBSY"/>
    </member>
    <member name="fault" value="10">
      <attribute name="c:identifier" value="G_FILE_ERROR_FAULT"/>
    </member>
    <member name="loop" value="11">
      <attribute name="c:identifier" value="G_FILE_ERROR_LOOP"/>
    </member>
    <member name="nospc" value="12">
      <attribute name="c:identifier" value="G_FILE_ERROR_NOSPC"/>
    </member>
    <member name="nomem" value="13">
      <attribute name="c:identifier" value="G_FILE_ERROR_NOMEM"/>
    </member>
    <member name="mfile" value="14">
      <attribute name="c:identifier" value="G_FILE_ERROR_MFILE"/>
    </member>
    <member name="nfile" value="15">
      <attribute name="c:identifier" value="G_FILE_ERROR_NFILE"/>
    </member>
    <member name="badf" value="16">
      <attribute name="c:identifier" value="G_FILE_ERROR_BADF"/>
    </member>
    <member name="inval" value="17">
      <attribute name="c:identifier" value="G_FILE_ERROR_INVAL"/>
    </member>
    <member name="pipe" value="18">
      <attribute name="c:identifier" value="G_FILE_ERROR_PIPE"/>
    </member>
    <member name="again" value="19">
      <attribute name="c:identifier" value="G_FILE_ERROR_AGAIN"/>
    </member>
    <member name="intr" value="20">
      <attribute name="c:identifier" value="G_FILE_ERROR_INTR"/>
    </member>
    <member name="io" value="21">
      <attribute name="c:identifier" value="G_FILE_ERROR_IO"/>
    </member>
    <member name="perm" value="22">
      <attribute name="c:identifier" value="G_FILE_ERROR_PERM"/>
    </member>
    <member name="nosys" value="23">
      <attribute name="c:identifier" value="G_FILE_ERROR_NOSYS"/>
    </member>
    <member name="failed" value="24">
      <attribute name="c:identifier" value="G_FILE_ERROR_FAILED"/>
    </member>
  </enumeration>
  <bitfield name="FileTest">
    <member name="is_regular" value="1">
      <attribute name="c:identifier" value="G_FILE_TEST_IS_REGULAR"/>
    </member>
    <member name="is_symlink" value="2">
      <attribute name="c:identifier" value="G_FILE_TEST_IS_SYMLINK"/>
    </member>
    <member name="is_dir" value="4">
      <attribute name="c:identifier" value="G_FILE_TEST_IS_DIR"/>
    </member>
    <member name="is_executable" value="8">
      <attribute name="c:identifier" value="G_FILE_TEST_IS_EXECUTABLE"/>
    </member>
    <member name="exists" value="16">
      <attribute name="c:identifier" value="G_FILE_TEST_EXISTS"/>
    </member>
  </bitfield>
  <union name="FloatIEEE754">
    <field name="v_float" writable="1">
      <type name="gfloat"/>
    </field>
  </union>
  <bitfield name="FormatSizeFlags">
    <member name="default" value="0">
      <attribute name="c:identifier" value="G_FORMAT_SIZE_DEFAULT"/>
    </member>
    <member name="long_format" value="1">
      <attribute name="c:identifier" value="G_FORMAT_SIZE_LONG_FORMAT"/>
    </member>
    <member name="iec_units" value="2">
      <attribute name="c:identifier" value="G_FORMAT_SIZE_IEC_UNITS"/>
    </member>
  </bitfield>
  <callback name="FreeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="Func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <constant name="GINT16_FORMAT" value="hi">
    <type name="utf8"/>
  </constant>
  <constant name="GINT16_MODIFIER" value="h">
    <type name="utf8"/>
  </constant>
  <constant name="GINT32_FORMAT" value="i">
    <type name="utf8"/>
  </constant>
  <constant name="GINT32_MODIFIER" value="">
    <type name="utf8"/>
  </constant>
  <constant name="GINT64_FORMAT" value="li">
    <type name="utf8"/>
  </constant>
  <constant name="GINT64_MODIFIER" value="l">
    <type name="utf8"/>
  </constant>
  <constant name="GINTPTR_FORMAT" value="li">
    <type name="utf8"/>
  </constant>
  <constant name="GINTPTR_MODIFIER" value="l">
    <type name="utf8"/>
  </constant>
  <constant name="GNUC_FUNCTION" value="">
    <type name="utf8"/>
  </constant>
  <constant name="GNUC_PRETTY_FUNCTION" value="">
    <type name="utf8"/>
  </constant>
  <constant name="GSIZE_FORMAT" value="lu">
    <type name="utf8"/>
  </constant>
  <constant name="GSIZE_MODIFIER" value="l">
    <type name="utf8"/>
  </constant>
  <constant name="GSSIZE_FORMAT" value="li">
    <type name="utf8"/>
  </constant>
  <constant name="GUINT16_FORMAT" value="hu">
    <type name="utf8"/>
  </constant>
  <constant name="GUINT32_FORMAT" value="u">
    <type name="utf8"/>
  </constant>
  <constant name="GUINT64_FORMAT" value="lu">
    <type name="utf8"/>
  </constant>
  <constant name="GUINTPTR_FORMAT" value="lu">
    <type name="utf8"/>
  </constant>
  <constant name="HAVE_GINT64" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE_GNUC_VARARGS" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE_GNUC_VISIBILITY" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE_GROWING_STACK" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE_INLINE" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE_ISO_VARARGS" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE___INLINE" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="HAVE___INLINE__" value="1">
    <type name="gint32"/>
  </constant>
  <callback name="HFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <constant name="HOOK_FLAG_USER_SHIFT" value="4">
    <type name="gint32"/>
  </constant>
  <callback name="HRFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="HashFunc">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct HashTable
{
 glib:type-name="GHashTable" glib:get-type="g_hash_table_get_type"  <function name="add" c:identifier="g_hash_table_add">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="contains" c:identifier="g_hash_table_contains">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="destroy" c:identifier="g_hash_table_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="insert" c:identifier="g_hash_table_insert">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="lookup_extended" c:identifier="g_hash_table_lookup_extended">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="lookup_key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="orig_key" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove" c:identifier="g_hash_table_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove_all" c:identifier="g_hash_table_remove_all">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="replace" c:identifier="g_hash_table_replace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="size" c:identifier="g_hash_table_size">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="steal" c:identifier="g_hash_table_steal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="steal_all" c:identifier="g_hash_table_steal_all">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="unref" c:identifier="g_hash_table_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
};
struct HashTableIter
{
  <field name="dummy1">
    <type name="any"/>
  </field>
  <field name="dummy2">
    <type name="any"/>
  </field>
  <field name="dummy3">
    <type name="any"/>
  </field>
  <field name="dummy4">
    <type name="gint32"/>
  </field>
  <field name="dummy5">
    <type name="gboolean"/>
  </field>
  <field name="dummy6">
    <type name="any"/>
  </field>
  <method name="init" c:identifier="g_hash_table_iter_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </method>
  <method name="next" c:identifier="g_hash_table_iter_next">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove" c:identifier="g_hash_table_iter_remove">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="replace" c:identifier="g_hash_table_iter_replace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="steal" c:identifier="g_hash_table_iter_steal">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct Hmac
{
  <method name="get_digest" c:identifier="g_hmac_get_digest">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="buffer" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="digest_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_string" c:identifier="g_hmac_get_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_hmac_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="update" c:identifier="g_hmac_update">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
};
struct Hook
{
  <field name="data" writable="1">
    <type name="any"/>
  </field>
  <field name="next" writable="1">
    <type name="Hook"/>
  </field>
  <field name="prev" writable="1">
    <type name="Hook"/>
  </field>
  <field name="ref_count" writable="1">
    <type name="guint32"/>
  </field>
  <field name="hook_id" writable="1">
    <type name="guint64"/>
  </field>
  <field name="flags" writable="1">
    <type name="guint32"/>
  </field>
  <field name="func" writable="1">
    <type name="any"/>
  </field>
  <field name="destroy" writable="1">
    <callback name="DestroyNotify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <method name="compare_ids" c:identifier="g_hook_compare_ids">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="sibling" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </method>
  <function name="destroy" c:identifier="g_hook_destroy">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="destroy_link" c:identifier="g_hook_destroy_link">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="free" c:identifier="g_hook_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="insert_before" c:identifier="g_hook_insert_before">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="sibling" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="prepend" c:identifier="g_hook_prepend">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="unref" c:identifier="g_hook_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
};
  <callback name="HookCheckFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="HookCheckMarshaller">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="HookCompareFunc">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="new_hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
      <parameter name="sibling" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="HookFinalizeFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="HookFindFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="HookFlagMask">
    <member name="active" value="1">
      <attribute name="c:identifier" value="G_HOOK_FLAG_ACTIVE"/>
    </member>
    <member name="in_call" value="2">
      <attribute name="c:identifier" value="G_HOOK_FLAG_IN_CALL"/>
    </member>
    <member name="mask" value="15">
      <attribute name="c:identifier" value="G_HOOK_FLAG_MASK"/>
    </member>
  </bitfield>
  <callback name="HookFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct HookList
{
  <field name="seq_id" writable="1">
    <type name="guint64"/>
  </field>
  <field name="hook_size" writable="1">
    <type name="guint32"/>
  </field>
  <field name="is_setup" writable="1">
    <type name="guint32"/>
  </field>
  <field name="hooks" writable="1">
    <type name="Hook"/>
  </field>
  <field name="dummy3" writable="1">
    <type name="any"/>
  </field>
  <field name="finalize_hook" writable="1">
    <callback name="HookFinalizeFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="hook_list" transfer-ownership="none">
          <type name="HookList"/>
        </parameter>
        <parameter name="hook" transfer-ownership="none">
          <type name="Hook"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dummy" writable="1">
    <array fixed-size="2">
      <type name="any"/>
    </array>
  </field>
  <method name="clear" c:identifier="g_hook_list_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="init" c:identifier="g_hook_list_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_size" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="invoke" c:identifier="g_hook_list_invoke">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="may_recurse" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="invoke_check" c:identifier="g_hook_list_invoke_check">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="may_recurse" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
};
  <callback name="HookMarshaller">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
      <parameter name="marshal_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct IConv
{
  <method name="" c:identifier="g_iconv">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="inbuf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="inbytes_left" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="outbuf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="outbytes_left" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="close" c:identifier="g_iconv_close">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
};
  <constant name="IEEE754_DOUBLE_BIAS" value="1023">
    <type name="gint32"/>
  </constant>
  <constant name="IEEE754_FLOAT_BIAS" value="127">
    <type name="gint32"/>
  </constant>
struct IOChannel
{
 glib:type-name="GIOChannel" glib:get-type="g_io_channel_get_type"  <field name="ref_count">
    <type name="gint32"/>
  </field>
  <field name="funcs">
    <type name="IOFuncs"/>
  </field>
  <field name="encoding">
    <type name="utf8"/>
  </field>
  <field name="read_cd">
    <type name="IConv"/>
  </field>
  <field name="write_cd">
    <type name="IConv"/>
  </field>
  <field name="line_term">
    <type name="utf8"/>
  </field>
  <field name="line_term_len">
    <type name="guint32"/>
  </field>
  <field name="buf_size">
    <type name="guint64"/>
  </field>
  <field name="read_buf">
    <type name="String"/>
  </field>
  <field name="encoded_read_buf">
    <type name="String"/>
  </field>
  <field name="write_buf">
    <type name="String"/>
  </field>
  <field name="partial_write_buf">
    <array fixed-size="6">
      <type name="guint8"/>
    </array>
  </field>
  <field name="use_buffer">
    <type name="guint32"/>
  </field>
  <field name="do_encode">
    <type name="guint32"/>
  </field>
  <field name="close_on_unref">
    <type name="guint32"/>
  </field>
  <field name="is_readable">
    <type name="guint32"/>
  </field>
  <field name="is_writeable">
    <type name="guint32"/>
  </field>
  <field name="is_seekable">
    <type name="guint32"/>
  </field>
  <field name="reserved1">
    <type name="any"/>
  </field>
  <field name="reserved2">
    <type name="any"/>
  </field>
  <constructor name="new_file" c:identifier="g_io_channel_new_file" throws="1">
    <return-value transfer-ownership="full">
      <type name="IOChannel"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="mode" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="unix_new" c:identifier="g_io_channel_unix_new">
    <return-value transfer-ownership="full">
      <type name="IOChannel"/>
    </return-value>
    <parameters>
      <parameter name="fd" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="close" c:identifier="g_io_channel_close">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="flush" c:identifier="g_io_channel_flush" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
  </method>
  <method name="get_buffer_condition" c:identifier="g_io_channel_get_buffer_condition">
    <return-value transfer-ownership="none">
      <type name="IOCondition"/>
    </return-value>
  </method>
  <method name="get_buffer_size" c:identifier="g_io_channel_get_buffer_size">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="get_buffered" c:identifier="g_io_channel_get_buffered">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_close_on_unref" c:identifier="g_io_channel_get_close_on_unref">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_encoding" c:identifier="g_io_channel_get_encoding">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_flags" c:identifier="g_io_channel_get_flags">
    <return-value transfer-ownership="none">
      <type name="IOFlags"/>
    </return-value>
  </method>
  <method name="get_line_term" c:identifier="g_io_channel_get_line_term">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="init" c:identifier="g_io_channel_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="read" c:identifier="g_io_channel_read">
    <return-value transfer-ownership="none">
      <type name="IOError"/>
    </return-value>
    <parameters>
      <parameter name="buf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="count" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="read_chars" c:identifier="g_io_channel_read_chars" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="buf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="count" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="read_line" c:identifier="g_io_channel_read_line" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="str_return" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none" allow-none="1">
        <type name="guint64"/>
      </parameter>
      <parameter name="terminator_pos" transfer-ownership="none" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="read_line_string" c:identifier="g_io_channel_read_line_string" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="buffer" transfer-ownership="none">
        <type name="String"/>
      </parameter>
      <parameter name="terminator_pos" transfer-ownership="none" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="read_to_end" c:identifier="g_io_channel_read_to_end" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="str_return" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="read_unichar" c:identifier="g_io_channel_read_unichar" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="thechar" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref" c:identifier="g_io_channel_ref">
    <return-value transfer-ownership="full">
      <type name="IOChannel"/>
    </return-value>
  </method>
  <method name="seek" c:identifier="g_io_channel_seek">
    <return-value transfer-ownership="none">
      <type name="IOError"/>
    </return-value>
    <parameters>
      <parameter name="offset" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="type" transfer-ownership="none">
        <type name="SeekType"/>
      </parameter>
    </parameters>
  </method>
  <method name="seek_position" c:identifier="g_io_channel_seek_position" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="offset" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="type" transfer-ownership="none">
        <type name="SeekType"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_buffer_size" c:identifier="g_io_channel_set_buffer_size">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_buffered" c:identifier="g_io_channel_set_buffered">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="buffered" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_close_on_unref" c:identifier="g_io_channel_set_close_on_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="do_close" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_encoding" c:identifier="g_io_channel_set_encoding" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="encoding" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_flags" c:identifier="g_io_channel_set_flags" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="flags" transfer-ownership="none">
        <type name="IOFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_line_term" c:identifier="g_io_channel_set_line_term">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="line_term" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="shutdown" c:identifier="g_io_channel_shutdown" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="flush" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="unix_get_fd" c:identifier="g_io_channel_unix_get_fd">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_io_channel_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="write" c:identifier="g_io_channel_write">
    <return-value transfer-ownership="none">
      <type name="IOError"/>
    </return-value>
    <parameters>
      <parameter name="buf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="count" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="write_chars" c:identifier="g_io_channel_write_chars" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="buf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="count" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="write_unichar" c:identifier="g_io_channel_write_unichar" throws="1">
    <return-value transfer-ownership="none">
      <type name="IOStatus"/>
    </return-value>
    <parameters>
      <parameter name="thechar" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </method>
  <function name="error_from_errno" c:identifier="g_io_channel_error_from_errno">
    <return-value transfer-ownership="none">
      <type name="IOChannelError"/>
    </return-value>
    <parameters>
      <parameter name="en" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="error_quark" c:identifier="g_io_channel_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
};
  <enumeration name="IOChannelError" glib:error-domain="g-io-channel-error-quark">
    <member name="fbig" value="0">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_FBIG"/>
    </member>
    <member name="inval" value="1">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_INVAL"/>
    </member>
    <member name="io" value="2">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_IO"/>
    </member>
    <member name="isdir" value="3">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_ISDIR"/>
    </member>
    <member name="nospc" value="4">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_NOSPC"/>
    </member>
    <member name="nxio" value="5">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_NXIO"/>
    </member>
    <member name="overflow" value="6">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_OVERFLOW"/>
    </member>
    <member name="pipe" value="7">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_PIPE"/>
    </member>
    <member name="failed" value="8">
      <attribute name="c:identifier" value="G_IO_CHANNEL_ERROR_FAILED"/>
    </member>
  </enumeration>
  <bitfield name="IOCondition" glib:type-name="GIOCondition" glib:get-type="g_io_condition_get_type">
    <member name="in" value="1">
      <attribute name="c:identifier" value="G_IO_IN"/>
    </member>
    <member name="out" value="4">
      <attribute name="c:identifier" value="G_IO_OUT"/>
    </member>
    <member name="pri" value="2">
      <attribute name="c:identifier" value="G_IO_PRI"/>
    </member>
    <member name="err" value="8">
      <attribute name="c:identifier" value="G_IO_ERR"/>
    </member>
    <member name="hup" value="16">
      <attribute name="c:identifier" value="G_IO_HUP"/>
    </member>
    <member name="nval" value="32">
      <attribute name="c:identifier" value="G_IO_NVAL"/>
    </member>
  </bitfield>
  <enumeration name="IOError">
    <member name="none" value="0">
      <attribute name="c:identifier" value="G_IO_ERROR_NONE"/>
    </member>
    <member name="again" value="1">
      <attribute name="c:identifier" value="G_IO_ERROR_AGAIN"/>
    </member>
    <member name="inval" value="2">
      <attribute name="c:identifier" value="G_IO_ERROR_INVAL"/>
    </member>
    <member name="unknown" value="3">
      <attribute name="c:identifier" value="G_IO_ERROR_UNKNOWN"/>
    </member>
  </enumeration>
  <bitfield name="IOFlags">
    <member name="append" value="1">
      <attribute name="c:identifier" value="G_IO_FLAG_APPEND"/>
    </member>
    <member name="nonblock" value="2">
      <attribute name="c:identifier" value="G_IO_FLAG_NONBLOCK"/>
    </member>
    <member name="is_readable" value="4">
      <attribute name="c:identifier" value="G_IO_FLAG_IS_READABLE"/>
    </member>
    <member name="is_writable" value="8">
      <attribute name="c:identifier" value="G_IO_FLAG_IS_WRITABLE"/>
    </member>
    <member name="is_seekable" value="16">
      <attribute name="c:identifier" value="G_IO_FLAG_IS_SEEKABLE"/>
    </member>
    <member name="mask" value="31">
      <attribute name="c:identifier" value="G_IO_FLAG_MASK"/>
    </member>
    <member name="get_mask" value="31">
      <attribute name="c:identifier" value="G_IO_FLAG_GET_MASK"/>
    </member>
    <member name="set_mask" value="3">
      <attribute name="c:identifier" value="G_IO_FLAG_SET_MASK"/>
    </member>
  </bitfield>
  <callback name="IOFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="source" transfer-ownership="none">
        <type name="IOChannel"/>
      </parameter>
      <parameter name="condition" transfer-ownership="none">
        <type name="IOCondition"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct IOFuncs
{
  <field name="io_read">
    <callback name="io_read">
      <return-value transfer-ownership="none">
        <type name="IOStatus"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
        <parameter name="buf" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="count" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="bytes_read" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_write">
    <callback name="io_write">
      <return-value transfer-ownership="none">
        <type name="IOStatus"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
        <parameter name="buf" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="count" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="bytes_written" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_seek">
    <callback name="io_seek">
      <return-value transfer-ownership="none">
        <type name="IOStatus"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
        <parameter name="offset" transfer-ownership="none">
          <type name="gint64"/>
        </parameter>
        <parameter name="type" transfer-ownership="none">
          <type name="SeekType"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_close">
    <callback name="io_close">
      <return-value transfer-ownership="none">
        <type name="IOStatus"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_create_watch">
    <callback name="io_create_watch">
      <return-value transfer-ownership="full">
        <type name="Source"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
        <parameter name="condition" transfer-ownership="none">
          <type name="IOCondition"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_free">
    <callback name="io_free">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_set_flags">
    <callback name="io_set_flags">
      <return-value transfer-ownership="none">
        <type name="IOStatus"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
        <parameter name="flags" transfer-ownership="none">
          <type name="IOFlags"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="io_get_flags">
    <callback name="io_get_flags">
      <return-value transfer-ownership="none">
        <type name="IOFlags"/>
      </return-value>
      <parameters>
        <parameter name="channel" transfer-ownership="none">
          <type name="IOChannel"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
  <enumeration name="IOStatus">
    <member name="error" value="0">
      <attribute name="c:identifier" value="G_IO_STATUS_ERROR"/>
    </member>
    <member name="normal" value="1">
      <attribute name="c:identifier" value="G_IO_STATUS_NORMAL"/>
    </member>
    <member name="eof" value="2">
      <attribute name="c:identifier" value="G_IO_STATUS_EOF"/>
    </member>
    <member name="again" value="3">
      <attribute name="c:identifier" value="G_IO_STATUS_AGAIN"/>
    </member>
  </enumeration>
  <constant name="KEY_FILE_DESKTOP_GROUP" value="Desktop Entry">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_CATEGORIES" value="Categories">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_COMMENT" value="Comment">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_EXEC" value="Exec">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_GENERIC_NAME" value="GenericName">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_HIDDEN" value="Hidden">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_ICON" value="Icon">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_MIME_TYPE" value="MimeType">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_NAME" value="Name">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_NOT_SHOW_IN" value="NotShowIn">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_NO_DISPLAY" value="NoDisplay">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_ONLY_SHOW_IN" value="OnlyShowIn">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_PATH" value="Path">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_STARTUP_NOTIFY" value="StartupNotify">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_STARTUP_WM_CLASS" value="StartupWMClass">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_TERMINAL" value="Terminal">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_TRY_EXEC" value="TryExec">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_TYPE" value="Type">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_URL" value="URL">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_KEY_VERSION" value="Version">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_TYPE_APPLICATION" value="Application">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_TYPE_DIRECTORY" value="Directory">
    <type name="utf8"/>
  </constant>
  <constant name="KEY_FILE_DESKTOP_TYPE_LINK" value="Link">
    <type name="utf8"/>
  </constant>
struct KeyFile
{
 glib:type-name="GKeyFile" glib:get-type="g_key_file_get_type"  <constructor name="new" c:identifier="g_key_file_new">
    <return-value transfer-ownership="full">
      <type name="KeyFile"/>
    </return-value>
  </constructor>
  <method name="get_boolean" c:identifier="g_key_file_get_boolean" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_boolean_list" c:identifier="g_key_file_get_boolean_list" throws="1">
    <return-value transfer-ownership="container">
      <array length="2">
        <type name="gboolean"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_comment" c:identifier="g_key_file_get_comment" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_double" c:identifier="g_key_file_get_double" throws="1">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_double_list" c:identifier="g_key_file_get_double_list" throws="1">
    <return-value transfer-ownership="container">
      <array length="2">
        <type name="gdouble"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_groups" c:identifier="g_key_file_get_groups">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_int64" c:identifier="g_key_file_get_int64" throws="1">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_integer" c:identifier="g_key_file_get_integer" throws="1">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_integer_list" c:identifier="g_key_file_get_integer_list" throws="1">
    <return-value transfer-ownership="container">
      <array length="2">
        <type name="gint32"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_keys" c:identifier="g_key_file_get_keys" throws="1">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_locale_string" c:identifier="g_key_file_get_locale_string" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="locale" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_locale_string_list" c:identifier="g_key_file_get_locale_string_list" throws="1">
    <return-value transfer-ownership="full">
      <array length="3" zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="locale" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_start_group" c:identifier="g_key_file_get_start_group">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_string" c:identifier="g_key_file_get_string" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_string_list" c:identifier="g_key_file_get_string_list" throws="1">
    <return-value transfer-ownership="full">
      <array length="2" zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_uint64" c:identifier="g_key_file_get_uint64" throws="1">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_value" c:identifier="g_key_file_get_value" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="has_group" c:identifier="g_key_file_has_group">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_data" c:identifier="g_key_file_load_from_data" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="KeyFileFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_data_dirs" c:identifier="g_key_file_load_from_data_dirs" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="file" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="full_path" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="filename"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="KeyFileFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_dirs" c:identifier="g_key_file_load_from_dirs" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="file" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="search_dirs" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="filename"/>
        </array>
      </parameter>
      <parameter name="full_path" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="filename"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="KeyFileFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="load_from_file" c:identifier="g_key_file_load_from_file" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="file" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="KeyFileFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_comment" c:identifier="g_key_file_remove_comment" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_group" c:identifier="g_key_file_remove_group" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_key" c:identifier="g_key_file_remove_key" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_boolean" c:identifier="g_key_file_set_boolean">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_boolean_list" c:identifier="g_key_file_set_boolean_list">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="list" transfer-ownership="none">
        <array length="3">
          <type name="gboolean"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_comment" c:identifier="g_key_file_set_comment" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="comment" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_double" c:identifier="g_key_file_set_double">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_double_list" c:identifier="g_key_file_set_double_list">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="list" transfer-ownership="none">
        <array length="3">
          <type name="gdouble"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_int64" c:identifier="g_key_file_set_int64">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_integer" c:identifier="g_key_file_set_integer">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_integer_list" c:identifier="g_key_file_set_integer_list">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="list" transfer-ownership="none">
        <array length="3">
          <type name="gint32"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_list_separator" c:identifier="g_key_file_set_list_separator">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="separator" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_locale_string" c:identifier="g_key_file_set_locale_string">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="locale" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_locale_string_list" c:identifier="g_key_file_set_locale_string_list">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="locale" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="list" transfer-ownership="none">
        <array length="4" zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_string" c:identifier="g_key_file_set_string">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_string_list" c:identifier="g_key_file_set_string_list">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="list" transfer-ownership="none">
        <array length="3" zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_uint64" c:identifier="g_key_file_set_uint64">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_value" c:identifier="g_key_file_set_value">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_data" c:identifier="g_key_file_to_data" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="unref" c:identifier="g_key_file_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="error_quark" c:identifier="g_key_file_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
};
  <enumeration name="KeyFileError" glib:error-domain="g-key-file-error-quark">
    <member name="unknown_encoding" value="0">
      <attribute name="c:identifier" value="G_KEY_FILE_ERROR_UNKNOWN_ENCODING"/>
    </member>
    <member name="parse" value="1">
      <attribute name="c:identifier" value="G_KEY_FILE_ERROR_PARSE"/>
    </member>
    <member name="not_found" value="2">
      <attribute name="c:identifier" value="G_KEY_FILE_ERROR_NOT_FOUND"/>
    </member>
    <member name="key_not_found" value="3">
      <attribute name="c:identifier" value="G_KEY_FILE_ERROR_KEY_NOT_FOUND"/>
    </member>
    <member name="group_not_found" value="4">
      <attribute name="c:identifier" value="G_KEY_FILE_ERROR_GROUP_NOT_FOUND"/>
    </member>
    <member name="invalid_value" value="5">
      <attribute name="c:identifier" value="G_KEY_FILE_ERROR_INVALID_VALUE"/>
    </member>
  </enumeration>
  <bitfield name="KeyFileFlags">
    <member name="none" value="0">
      <attribute name="c:identifier" value="G_KEY_FILE_NONE"/>
    </member>
    <member name="keep_comments" value="1">
      <attribute name="c:identifier" value="G_KEY_FILE_KEEP_COMMENTS"/>
    </member>
    <member name="keep_translations" value="2">
      <attribute name="c:identifier" value="G_KEY_FILE_KEEP_TRANSLATIONS"/>
    </member>
  </bitfield>
  <constant name="LITTLE_ENDIAN" value="1234">
    <type name="gint32"/>
  </constant>
  <constant name="LN10" value="2.302585">
    <type name="gdouble"/>
  </constant>
  <constant name="LN2" value="0.693147">
    <type name="gdouble"/>
  </constant>
  <constant name="LOG_2_BASE_10" value="0.301030">
    <type name="gdouble"/>
  </constant>
  <constant name="LOG_FATAL_MASK" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="LOG_LEVEL_USER_SHIFT" value="8">
    <type name="gint32"/>
  </constant>
struct List
{
  <field name="data" writable="1">
    <type name="any"/>
  </field>
  <field name="next" writable="1">
    <type name="GLib.List">
      <type name="any"/>
    </type>
  </field>
  <field name="prev" writable="1">
    <type name="GLib.List">
      <type name="any"/>
    </type>
  </field>
};
  <callback name="LogFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="log_level" transfer-ownership="none">
        <type name="LogLevelFlags"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="3">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="LogLevelFlags">
    <member name="flag_recursion" value="1">
      <attribute name="c:identifier" value="G_LOG_FLAG_RECURSION"/>
    </member>
    <member name="flag_fatal" value="2">
      <attribute name="c:identifier" value="G_LOG_FLAG_FATAL"/>
    </member>
    <member name="level_error" value="4">
      <attribute name="c:identifier" value="G_LOG_LEVEL_ERROR"/>
    </member>
    <member name="level_critical" value="8">
      <attribute name="c:identifier" value="G_LOG_LEVEL_CRITICAL"/>
    </member>
    <member name="level_warning" value="16">
      <attribute name="c:identifier" value="G_LOG_LEVEL_WARNING"/>
    </member>
    <member name="level_message" value="32">
      <attribute name="c:identifier" value="G_LOG_LEVEL_MESSAGE"/>
    </member>
    <member name="level_info" value="64">
      <attribute name="c:identifier" value="G_LOG_LEVEL_INFO"/>
    </member>
    <member name="level_debug" value="128">
      <attribute name="c:identifier" value="G_LOG_LEVEL_DEBUG"/>
    </member>
    <member name="level_mask" value="-4">
      <attribute name="c:identifier" value="G_LOG_LEVEL_MASK"/>
    </member>
  </bitfield>
  <constant name="MAJOR_VERSION" value="2">
    <type name="gint32"/>
  </constant>
  <constant name="MICRO_VERSION" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="MINOR_VERSION" value="32">
    <type name="gint32"/>
  </constant>
  <constant name="MODULE_SUFFIX" value="so">
    <type name="utf8"/>
  </constant>
struct MainContext
{
 glib:type-name="GMainContext" glib:get-type="g_main_context_get_type"  <constructor name="new" c:identifier="g_main_context_new">
    <return-value transfer-ownership="full">
      <type name="MainContext"/>
    </return-value>
  </constructor>
  <method name="acquire" c:identifier="g_main_context_acquire">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="add_poll" c:identifier="g_main_context_add_poll">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="fd" transfer-ownership="none">
        <type name="PollFD"/>
      </parameter>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="check" c:identifier="g_main_context_check">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="max_priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="fds" transfer-ownership="none">
        <array length="2">
          <type name="PollFD"/>
        </array>
      </parameter>
      <parameter name="n_fds" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="dispatch" c:identifier="g_main_context_dispatch">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="find_source_by_funcs_user_data" c:identifier="g_main_context_find_source_by_funcs_user_data">
    <return-value transfer-ownership="none">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="funcs" transfer-ownership="none">
        <type name="SourceFuncs"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="find_source_by_id" c:identifier="g_main_context_find_source_by_id">
    <return-value transfer-ownership="none">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="source_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="find_source_by_user_data" c:identifier="g_main_context_find_source_by_user_data">
    <return-value transfer-ownership="none">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="invoke_full" c:identifier="g_main_context_invoke_full">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="function" transfer-ownership="none" scope="notified" closure="2" destroy="3">
        <type name="SourceFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </method>
  <method name="is_owner" c:identifier="g_main_context_is_owner">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="iteration" c:identifier="g_main_context_iteration">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="may_block" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="pending" c:identifier="g_main_context_pending">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="pop_thread_default" c:identifier="g_main_context_pop_thread_default">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="prepare" c:identifier="g_main_context_prepare">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="push_thread_default" c:identifier="g_main_context_push_thread_default">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="query" c:identifier="g_main_context_query">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="max_priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="timeout_" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="gint32"/>
      </parameter>
      <parameter name="fds" transfer-ownership="none" direction="out" caller-allocates="1">
        <array length="3">
          <type name="PollFD"/>
        </array>
      </parameter>
      <parameter name="n_fds" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref" c:identifier="g_main_context_ref">
    <return-value transfer-ownership="full">
      <type name="MainContext"/>
    </return-value>
  </method>
  <method name="release" c:identifier="g_main_context_release">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="remove_poll" c:identifier="g_main_context_remove_poll">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="fd" transfer-ownership="none">
        <type name="PollFD"/>
      </parameter>
    </parameters>
  </method>
  <method name="unref" c:identifier="g_main_context_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="wait" c:identifier="g_main_context_wait">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="cond" transfer-ownership="none">
        <type name="Cond"/>
      </parameter>
      <parameter name="mutex" transfer-ownership="none">
        <type name="Mutex"/>
      </parameter>
    </parameters>
  </method>
  <method name="wakeup" c:identifier="g_main_context_wakeup">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="default" c:identifier="g_main_context_default">
    <return-value transfer-ownership="none">
      <type name="MainContext"/>
    </return-value>
  </function>
  <function name="get_thread_default" c:identifier="g_main_context_get_thread_default">
    <return-value transfer-ownership="none">
      <type name="MainContext"/>
    </return-value>
  </function>
  <function name="ref_thread_default" c:identifier="g_main_context_ref_thread_default">
    <return-value transfer-ownership="full">
      <type name="MainContext"/>
    </return-value>
  </function>
};
struct MainLoop
{
 glib:type-name="GMainLoop" glib:get-type="g_main_loop_get_type"  <constructor name="new" c:identifier="g_main_loop_new">
    <return-value transfer-ownership="full">
      <type name="MainLoop"/>
    </return-value>
    <parameters>
      <parameter name="context" transfer-ownership="none" allow-none="1">
        <type name="MainContext"/>
      </parameter>
      <parameter name="is_running" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="get_context" c:identifier="g_main_loop_get_context">
    <return-value transfer-ownership="none">
      <type name="MainContext"/>
    </return-value>
  </method>
  <method name="is_running" c:identifier="g_main_loop_is_running">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="quit" c:identifier="g_main_loop_quit">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="ref" c:identifier="g_main_loop_ref">
    <return-value transfer-ownership="full">
      <type name="MainLoop"/>
    </return-value>
  </method>
  <method name="run" c:identifier="g_main_loop_run">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_main_loop_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct MappedFile
{
  <method name="free" c:identifier="g_mapped_file_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_contents" c:identifier="g_mapped_file_get_contents">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_length" c:identifier="g_mapped_file_get_length">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_mapped_file_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <bitfield name="MarkupCollectType">
    <member name="invalid" value="0">
      <attribute name="c:identifier" value="G_MARKUP_COLLECT_INVALID"/>
    </member>
    <member name="string" value="1">
      <attribute name="c:identifier" value="G_MARKUP_COLLECT_STRING"/>
    </member>
    <member name="strdup" value="2">
      <attribute name="c:identifier" value="G_MARKUP_COLLECT_STRDUP"/>
    </member>
    <member name="boolean" value="3">
      <attribute name="c:identifier" value="G_MARKUP_COLLECT_BOOLEAN"/>
    </member>
    <member name="tristate" value="4">
      <attribute name="c:identifier" value="G_MARKUP_COLLECT_TRISTATE"/>
    </member>
    <member name="optional" value="65536">
      <attribute name="c:identifier" value="G_MARKUP_COLLECT_OPTIONAL"/>
    </member>
  </bitfield>
  <enumeration name="MarkupError" glib:error-domain="g-markup-error-quark">
    <member name="bad_utf8" value="0">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_BAD_UTF8"/>
    </member>
    <member name="empty" value="1">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_EMPTY"/>
    </member>
    <member name="parse" value="2">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_PARSE"/>
    </member>
    <member name="unknown_element" value="3">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_UNKNOWN_ELEMENT"/>
    </member>
    <member name="unknown_attribute" value="4">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE"/>
    </member>
    <member name="invalid_content" value="5">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_INVALID_CONTENT"/>
    </member>
    <member name="missing_attribute" value="6">
      <attribute name="c:identifier" value="G_MARKUP_ERROR_MISSING_ATTRIBUTE"/>
    </member>
  </enumeration>
struct MarkupParseContext
{
  <method name="end_parse" c:identifier="g_markup_parse_context_end_parse" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="free" c:identifier="g_markup_parse_context_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_element" c:identifier="g_markup_parse_context_get_element">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_position" c:identifier="g_markup_parse_context_get_position">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="line_number" transfer-ownership="none" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="char_number" transfer-ownership="none" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="parse" c:identifier="g_markup_parse_context_parse" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="text" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="text_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="push" c:identifier="g_markup_parse_context_push">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="parser" transfer-ownership="none">
        <type name="MarkupParser"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
};
  <bitfield name="MarkupParseFlags">
    <member name="do_not_use_this_unsupported_flag" value="1">
      <attribute name="c:identifier" value="G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG"/>
    </member>
    <member name="treat_cdata_as_text" value="2">
      <attribute name="c:identifier" value="G_MARKUP_TREAT_CDATA_AS_TEXT"/>
    </member>
    <member name="prefix_error_position" value="4">
      <attribute name="c:identifier" value="G_MARKUP_PREFIX_ERROR_POSITION"/>
    </member>
  </bitfield>
struct MarkupParser
{
  <field name="start_element">
    <callback name="start_element">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="context" transfer-ownership="none">
          <type name="MarkupParseContext"/>
        </parameter>
        <parameter name="element_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="attribute_names" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="attribute_values" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="4">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="end_element">
    <callback name="end_element">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="context" transfer-ownership="none">
          <type name="MarkupParseContext"/>
        </parameter>
        <parameter name="element_name" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="2">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="text">
    <callback name="text">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="context" transfer-ownership="none">
          <type name="MarkupParseContext"/>
        </parameter>
        <parameter name="text" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="text_len" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="3">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="passthrough">
    <callback name="passthrough">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="context" transfer-ownership="none">
          <type name="MarkupParseContext"/>
        </parameter>
        <parameter name="passthrough_text" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="text_len" transfer-ownership="none">
          <type name="guint64"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="3">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="error">
    <callback name="error">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="context" transfer-ownership="none">
          <type name="MarkupParseContext"/>
        </parameter>
        <parameter name="error" transfer-ownership="none">
          <type name="GLib.Error"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="2">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
};
struct MatchInfo
{
 glib:type-name="GMatchInfo" glib:get-type="g_match_info_get_type"  <method name="expand_references" c:identifier="g_match_info_expand_references" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string_to_expand" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="fetch" c:identifier="g_match_info_fetch">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="match_num" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="fetch_named" c:identifier="g_match_info_fetch_named">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="fetch_named_pos" c:identifier="g_match_info_fetch_named_pos">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="start_pos" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="end_pos" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="fetch_pos" c:identifier="g_match_info_fetch_pos">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="match_num" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="start_pos" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="end_pos" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_match_info_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_match_count" c:identifier="g_match_info_get_match_count">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_regex" c:identifier="g_match_info_get_regex">
    <return-value transfer-ownership="full">
      <type name="Regex"/>
    </return-value>
  </method>
  <method name="get_string" c:identifier="g_match_info_get_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="is_partial_match" c:identifier="g_match_info_is_partial_match">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="matches" c:identifier="g_match_info_matches">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="next" c:identifier="g_match_info_next" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="ref" c:identifier="g_match_info_ref">
    <return-value transfer-ownership="full">
      <type name="MatchInfo"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_match_info_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct MemVTable
{
  <field name="malloc">
    <type name="any"/>
  </field>
  <field name="realloc">
    <type name="any"/>
  </field>
  <field name="free">
    <callback name="free">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="mem" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="calloc">
    <type name="any"/>
  </field>
  <field name="try_malloc">
    <type name="any"/>
  </field>
  <field name="try_realloc">
    <type name="any"/>
  </field>
};
  <union name="Mutex">
    <field name="p">
      <type name="any"/>
    </field>
    <field name="i">
      <array fixed-size="2">
        <type name="guint32"/>
      </array>
    </field>
    <method name="clear" c:identifier="g_mutex_clear">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="init" c:identifier="g_mutex_init">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="lock" c:identifier="g_mutex_lock">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
    <method name="trylock" c:identifier="g_mutex_trylock">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
    </method>
    <method name="unlock" c:identifier="g_mutex_unlock">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </method>
  </union>
struct Node
{
  <field name="data" writable="1">
    <type name="any"/>
  </field>
  <field name="next" writable="1">
    <type name="Node"/>
  </field>
  <field name="prev" writable="1">
    <type name="Node"/>
  </field>
  <field name="parent" writable="1">
    <type name="Node"/>
  </field>
  <field name="children" writable="1">
    <type name="Node"/>
  </field>
  <method name="child_index" c:identifier="g_node_child_index">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="child_position" c:identifier="g_node_child_position">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="child" transfer-ownership="none">
        <type name="Node"/>
      </parameter>
    </parameters>
  </method>
  <method name="depth" c:identifier="g_node_depth">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="destroy" c:identifier="g_node_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="is_ancestor" c:identifier="g_node_is_ancestor">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="descendant" transfer-ownership="none">
        <type name="Node"/>
      </parameter>
    </parameters>
  </method>
  <method name="max_height" c:identifier="g_node_max_height">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="n_children" c:identifier="g_node_n_children">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="n_nodes" c:identifier="g_node_n_nodes">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="flags" transfer-ownership="none">
        <type name="TraverseFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="reverse_children" c:identifier="g_node_reverse_children">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unlink" c:identifier="g_node_unlink">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <callback name="NodeForeachFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="node" transfer-ownership="none">
        <type name="Node"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="NodeTraverseFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="node" transfer-ownership="none">
        <type name="Node"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <enumeration name="NormalizeMode">
    <member name="default" value="0">
      <attribute name="c:identifier" value="G_NORMALIZE_DEFAULT"/>
    </member>
    <member name="nfd" value="0">
      <attribute name="c:identifier" value="G_NORMALIZE_NFD"/>
    </member>
    <member name="default_compose" value="1">
      <attribute name="c:identifier" value="G_NORMALIZE_DEFAULT_COMPOSE"/>
    </member>
    <member name="nfc" value="1">
      <attribute name="c:identifier" value="G_NORMALIZE_NFC"/>
    </member>
    <member name="all" value="2">
      <attribute name="c:identifier" value="G_NORMALIZE_ALL"/>
    </member>
    <member name="nfkd" value="2">
      <attribute name="c:identifier" value="G_NORMALIZE_NFKD"/>
    </member>
    <member name="all_compose" value="3">
      <attribute name="c:identifier" value="G_NORMALIZE_ALL_COMPOSE"/>
    </member>
    <member name="nfkc" value="3">
      <attribute name="c:identifier" value="G_NORMALIZE_NFKC"/>
    </member>
  </enumeration>
  <constant name="OPTION_REMAINING" value="">
    <type name="utf8"/>
  </constant>
struct Once
{
  <field name="status" writable="1">
    <type name="OnceStatus"/>
  </field>
  <field name="retval" writable="1">
    <type name="any"/>
  </field>
  <function name="init_enter" c:identifier="g_once_init_enter">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="init_leave" c:identifier="g_once_init_leave">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="result" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
};
  <enumeration name="OnceStatus">
    <member name="notcalled" value="0">
      <attribute name="c:identifier" value="G_ONCE_STATUS_NOTCALLED"/>
    </member>
    <member name="progress" value="1">
      <attribute name="c:identifier" value="G_ONCE_STATUS_PROGRESS"/>
    </member>
    <member name="ready" value="2">
      <attribute name="c:identifier" value="G_ONCE_STATUS_READY"/>
    </member>
  </enumeration>
  <enumeration name="OptionArg">
    <member name="none" value="0">
      <attribute name="c:identifier" value="G_OPTION_ARG_NONE"/>
    </member>
    <member name="string" value="1">
      <attribute name="c:identifier" value="G_OPTION_ARG_STRING"/>
    </member>
    <member name="int" value="2">
      <attribute name="c:identifier" value="G_OPTION_ARG_INT"/>
    </member>
    <member name="callback" value="3">
      <attribute name="c:identifier" value="G_OPTION_ARG_CALLBACK"/>
    </member>
    <member name="filename" value="4">
      <attribute name="c:identifier" value="G_OPTION_ARG_FILENAME"/>
    </member>
    <member name="string_array" value="5">
      <attribute name="c:identifier" value="G_OPTION_ARG_STRING_ARRAY"/>
    </member>
    <member name="filename_array" value="6">
      <attribute name="c:identifier" value="G_OPTION_ARG_FILENAME_ARRAY"/>
    </member>
    <member name="double" value="7">
      <attribute name="c:identifier" value="G_OPTION_ARG_DOUBLE"/>
    </member>
    <member name="int64" value="8">
      <attribute name="c:identifier" value="G_OPTION_ARG_INT64"/>
    </member>
  </enumeration>
  <callback name="OptionArgFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="option_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct OptionContext
{
  <method name="add_group" c:identifier="g_option_context_add_group">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group" transfer-ownership="none">
        <type name="OptionGroup"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_main_entries" c:identifier="g_option_context_add_main_entries">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="entries" transfer-ownership="none">
        <type name="OptionEntry"/>
      </parameter>
      <parameter name="translation_domain" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_option_context_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_description" c:identifier="g_option_context_get_description">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_help" c:identifier="g_option_context_get_help">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="main_help" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
      <parameter name="group" transfer-ownership="none" allow-none="1">
        <type name="OptionGroup"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_help_enabled" c:identifier="g_option_context_get_help_enabled">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_ignore_unknown_options" c:identifier="g_option_context_get_ignore_unknown_options">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_summary" c:identifier="g_option_context_get_summary">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="parse" c:identifier="g_option_context_parse" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="argc" transfer-ownership="full" direction="inout" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="argv" transfer-ownership="full" direction="inout" allow-none="1">
        <array length="0">
          <type name="utf8"/>
        </array>
      </parameter>
    </parameters>
  </method>
  <method name="set_description" c:identifier="g_option_context_set_description">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="description" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_help_enabled" c:identifier="g_option_context_set_help_enabled">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="help_enabled" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_ignore_unknown_options" c:identifier="g_option_context_set_ignore_unknown_options">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="ignore_unknown" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_main_group" c:identifier="g_option_context_set_main_group">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="group" transfer-ownership="none">
        <type name="OptionGroup"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_summary" c:identifier="g_option_context_set_summary">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="summary" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_translate_func" c:identifier="g_option_context_set_translate_func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="func" transfer-ownership="none" allow-none="1" scope="notified" closure="1" destroy="2">
        <type name="TranslateFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="destroy_notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_translation_domain" c:identifier="g_option_context_set_translation_domain">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
};
struct OptionEntry
{
  <field name="long_name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="short_name" writable="1">
    <type name="guint8"/>
  </field>
  <field name="flags" writable="1">
    <type name="gint32"/>
  </field>
  <field name="arg" writable="1">
    <type name="OptionArg"/>
  </field>
  <field name="arg_data" writable="1">
    <type name="any"/>
  </field>
  <field name="description" writable="1">
    <type name="utf8"/>
  </field>
  <field name="arg_description" writable="1">
    <type name="utf8"/>
  </field>
};
  <enumeration name="OptionError" glib:error-domain="g-option-context-error-quark">
    <member name="unknown_option" value="0">
      <attribute name="c:identifier" value="G_OPTION_ERROR_UNKNOWN_OPTION"/>
    </member>
    <member name="bad_value" value="1">
      <attribute name="c:identifier" value="G_OPTION_ERROR_BAD_VALUE"/>
    </member>
    <member name="failed" value="2">
      <attribute name="c:identifier" value="G_OPTION_ERROR_FAILED"/>
    </member>
  </enumeration>
  <callback name="OptionErrorFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="context" transfer-ownership="none">
        <type name="OptionContext"/>
      </parameter>
      <parameter name="group" transfer-ownership="none">
        <type name="OptionGroup"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="OptionFlags">
    <member name="hidden" value="1">
      <attribute name="c:identifier" value="G_OPTION_FLAG_HIDDEN"/>
    </member>
    <member name="in_main" value="2">
      <attribute name="c:identifier" value="G_OPTION_FLAG_IN_MAIN"/>
    </member>
    <member name="reverse" value="4">
      <attribute name="c:identifier" value="G_OPTION_FLAG_REVERSE"/>
    </member>
    <member name="no_arg" value="8">
      <attribute name="c:identifier" value="G_OPTION_FLAG_NO_ARG"/>
    </member>
    <member name="filename" value="16">
      <attribute name="c:identifier" value="G_OPTION_FLAG_FILENAME"/>
    </member>
    <member name="optional_arg" value="32">
      <attribute name="c:identifier" value="G_OPTION_FLAG_OPTIONAL_ARG"/>
    </member>
    <member name="noalias" value="64">
      <attribute name="c:identifier" value="G_OPTION_FLAG_NOALIAS"/>
    </member>
  </bitfield>
struct OptionGroup
{
  <method name="add_entries" c:identifier="g_option_group_add_entries">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="entries" transfer-ownership="none">
        <type name="OptionEntry"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_option_group_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="set_translate_func" c:identifier="g_option_group_set_translate_func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="func" transfer-ownership="none" allow-none="1" scope="notified" closure="1" destroy="2">
        <type name="TranslateFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="destroy_notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_translation_domain" c:identifier="g_option_group_set_translation_domain">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
};
  <callback name="OptionParseFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="context" transfer-ownership="none">
        <type name="OptionContext"/>
      </parameter>
      <parameter name="group" transfer-ownership="none">
        <type name="OptionGroup"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <constant name="PDP_ENDIAN" value="3412">
    <type name="gint32"/>
  </constant>
  <constant name="PI" value="3.141593">
    <type name="gdouble"/>
  </constant>
  <constant name="PI_2" value="1.570796">
    <type name="gdouble"/>
  </constant>
  <constant name="PI_4" value="0.785398">
    <type name="gdouble"/>
  </constant>
  <constant name="POLLFD_FORMAT" value="%#I64x">
    <type name="utf8"/>
  </constant>
  <constant name="PRIORITY_DEFAULT" value="0">
    <type name="gint32"/>
  </constant>
  <constant name="PRIORITY_DEFAULT_IDLE" value="200">
    <type name="gint32"/>
  </constant>
  <constant name="PRIORITY_HIGH" value="-100">
    <type name="gint32"/>
  </constant>
  <constant name="PRIORITY_HIGH_IDLE" value="100">
    <type name="gint32"/>
  </constant>
  <constant name="PRIORITY_LOW" value="300">
    <type name="gint32"/>
  </constant>
struct PatternSpec
{
  <method name="equal" c:identifier="g_pattern_spec_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pspec2" transfer-ownership="none">
        <type name="PatternSpec"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_pattern_spec_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct PollFD
{
  <field name="fd" writable="1">
    <type name="gint32"/>
  </field>
  <field name="events" writable="1">
    <type name="guint16"/>
  </field>
  <field name="revents" writable="1">
    <type name="guint16"/>
  </field>
};
  <callback name="PollFunc">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="ufds" transfer-ownership="none">
        <type name="PollFD"/>
      </parameter>
      <parameter name="nfsd" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="timeout_" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="PrintFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </callback>
struct Private
{
  <field name="p">
    <type name="any"/>
  </field>
  <field name="notify">
    <callback name="DestroyNotify">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="future">
    <array fixed-size="2">
      <type name="any"/>
    </array>
  </field>
  <method name="replace" c:identifier="g_private_replace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set" c:identifier="g_private_set">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
};
struct PtrArray
{
 glib:type-name="GPtrArray" glib:get-type="g_ptr_array_get_type"  <field name="pdata" writable="1">
    <type name="any"/>
  </field>
  <field name="len" writable="1">
    <type name="guint32"/>
  </field>
  <function name="add" c:identifier="g_ptr_array_add">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove" c:identifier="g_ptr_array_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove_fast" c:identifier="g_ptr_array_remove_fast">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove_range" c:identifier="g_ptr_array_remove_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="index_" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_free_func" c:identifier="g_ptr_array_set_free_func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="element_free_func" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_size" c:identifier="g_ptr_array_set_size">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="unref" c:identifier="g_ptr_array_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
    </parameters>
  </function>
};
struct Queue
{
  <field name="head" writable="1">
    <type name="GLib.List">
      <type name="any"/>
    </type>
  </field>
  <field name="tail" writable="1">
    <type name="GLib.List">
      <type name="any"/>
    </type>
  </field>
  <field name="length" writable="1">
    <type name="guint32"/>
  </field>
  <method name="clear" c:identifier="g_queue_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="free" c:identifier="g_queue_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="free_full" c:identifier="g_queue_free_full">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="free_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_length" c:identifier="g_queue_get_length">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="index" c:identifier="g_queue_index">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="init" c:identifier="g_queue_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="is_empty" c:identifier="g_queue_is_empty">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="push_head" c:identifier="g_queue_push_head">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="push_nth" c:identifier="g_queue_push_nth">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="push_tail" c:identifier="g_queue_push_tail">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove" c:identifier="g_queue_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_all" c:identifier="g_queue_remove_all">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="reverse" c:identifier="g_queue_reverse">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct RWLock
{
  <field name="p">
    <type name="any"/>
  </field>
  <field name="i">
    <array fixed-size="2">
      <type name="guint32"/>
    </array>
  </field>
  <method name="clear" c:identifier="g_rw_lock_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="init" c:identifier="g_rw_lock_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="reader_lock" c:identifier="g_rw_lock_reader_lock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="reader_trylock" c:identifier="g_rw_lock_reader_trylock">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="reader_unlock" c:identifier="g_rw_lock_reader_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="writer_lock" c:identifier="g_rw_lock_writer_lock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="writer_trylock" c:identifier="g_rw_lock_writer_trylock">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="writer_unlock" c:identifier="g_rw_lock_writer_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct Rand
{
  <method name="double" c:identifier="g_rand_double">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </method>
  <method name="double_range" c:identifier="g_rand_double_range">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_rand_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="int" c:identifier="g_rand_int">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="int_range" c:identifier="g_rand_int_range">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_seed" c:identifier="g_rand_set_seed">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="seed" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_seed_array" c:identifier="g_rand_set_seed_array">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="seed" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="seed_length" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
};
struct RecMutex
{
  <field name="p">
    <type name="any"/>
  </field>
  <field name="i">
    <array fixed-size="2">
      <type name="guint32"/>
    </array>
  </field>
  <method name="clear" c:identifier="g_rec_mutex_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="init" c:identifier="g_rec_mutex_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="lock" c:identifier="g_rec_mutex_lock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="trylock" c:identifier="g_rec_mutex_trylock">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="unlock" c:identifier="g_rec_mutex_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct Regex
{
 glib:type-name="GRegex" glib:get-type="g_regex_get_type"  <constructor name="new" c:identifier="g_regex_new" throws="1">
    <return-value transfer-ownership="full">
      <type name="Regex"/>
    </return-value>
    <parameters>
      <parameter name="pattern" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="compile_options" transfer-ownership="none">
        <type name="RegexCompileFlags"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="get_capture_count" c:identifier="g_regex_get_capture_count">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_compile_flags" c:identifier="g_regex_get_compile_flags">
    <return-value transfer-ownership="none">
      <type name="RegexCompileFlags"/>
    </return-value>
  </method>
  <method name="get_match_flags" c:identifier="g_regex_get_match_flags">
    <return-value transfer-ownership="none">
      <type name="RegexMatchFlags"/>
    </return-value>
  </method>
  <method name="get_max_backref" c:identifier="g_regex_get_max_backref">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_pattern" c:identifier="g_regex_get_pattern">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_string_number" c:identifier="g_regex_get_string_number">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="match" c:identifier="g_regex_match">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
      <parameter name="match_info" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="MatchInfo"/>
      </parameter>
    </parameters>
  </method>
  <method name="match_all" c:identifier="g_regex_match_all">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
      <parameter name="match_info" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="MatchInfo"/>
      </parameter>
    </parameters>
  </method>
  <method name="match_all_full" c:identifier="g_regex_match_all_full" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="string_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="start_position" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
      <parameter name="match_info" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="MatchInfo"/>
      </parameter>
    </parameters>
  </method>
  <method name="match_full" c:identifier="g_regex_match_full" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="string_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="start_position" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
      <parameter name="match_info" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="MatchInfo"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref" c:identifier="g_regex_ref">
    <return-value transfer-ownership="full">
      <type name="Regex"/>
    </return-value>
  </method>
  <method name="replace" c:identifier="g_regex_replace" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="string_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="start_position" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="replacement" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="replace_literal" c:identifier="g_regex_replace_literal" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="string_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="start_position" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="replacement" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
    </parameters>
  </method>
  <method name="unref" c:identifier="g_regex_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="check_replacement" c:identifier="g_regex_check_replacement" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="replacement" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="has_references" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="error_quark" c:identifier="g_regex_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="escape_nul" c:identifier="g_regex_escape_nul">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="escape_string" c:identifier="g_regex_escape_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="match_simple" c:identifier="g_regex_match_simple">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pattern" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="compile_options" transfer-ownership="none">
        <type name="RegexCompileFlags"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
    </parameters>
  </function>
};
  <bitfield name="RegexCompileFlags">
    <member name="caseless" value="1">
      <attribute name="c:identifier" value="G_REGEX_CASELESS"/>
    </member>
    <member name="multiline" value="2">
      <attribute name="c:identifier" value="G_REGEX_MULTILINE"/>
    </member>
    <member name="dotall" value="4">
      <attribute name="c:identifier" value="G_REGEX_DOTALL"/>
    </member>
    <member name="extended" value="8">
      <attribute name="c:identifier" value="G_REGEX_EXTENDED"/>
    </member>
    <member name="anchored" value="16">
      <attribute name="c:identifier" value="G_REGEX_ANCHORED"/>
    </member>
    <member name="dollar_endonly" value="32">
      <attribute name="c:identifier" value="G_REGEX_DOLLAR_ENDONLY"/>
    </member>
    <member name="ungreedy" value="512">
      <attribute name="c:identifier" value="G_REGEX_UNGREEDY"/>
    </member>
    <member name="raw" value="2048">
      <attribute name="c:identifier" value="G_REGEX_RAW"/>
    </member>
    <member name="no_auto_capture" value="4096">
      <attribute name="c:identifier" value="G_REGEX_NO_AUTO_CAPTURE"/>
    </member>
    <member name="optimize" value="8192">
      <attribute name="c:identifier" value="G_REGEX_OPTIMIZE"/>
    </member>
    <member name="dupnames" value="524288">
      <attribute name="c:identifier" value="G_REGEX_DUPNAMES"/>
    </member>
    <member name="newline_cr" value="1048576">
      <attribute name="c:identifier" value="G_REGEX_NEWLINE_CR"/>
    </member>
    <member name="newline_lf" value="2097152">
      <attribute name="c:identifier" value="G_REGEX_NEWLINE_LF"/>
    </member>
    <member name="newline_crlf" value="3145728">
      <attribute name="c:identifier" value="G_REGEX_NEWLINE_CRLF"/>
    </member>
  </bitfield>
  <enumeration name="RegexError" glib:error-domain="g-regex-error-quark">
    <member name="compile" value="0">
      <attribute name="c:identifier" value="G_REGEX_ERROR_COMPILE"/>
    </member>
    <member name="optimize" value="1">
      <attribute name="c:identifier" value="G_REGEX_ERROR_OPTIMIZE"/>
    </member>
    <member name="replace" value="2">
      <attribute name="c:identifier" value="G_REGEX_ERROR_REPLACE"/>
    </member>
    <member name="match" value="3">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MATCH"/>
    </member>
    <member name="internal" value="4">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INTERNAL"/>
    </member>
    <member name="stray_backslash" value="101">
      <attribute name="c:identifier" value="G_REGEX_ERROR_STRAY_BACKSLASH"/>
    </member>
    <member name="missing_control_char" value="102">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MISSING_CONTROL_CHAR"/>
    </member>
    <member name="unrecognized_escape" value="103">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNRECOGNIZED_ESCAPE"/>
    </member>
    <member name="quantifiers_out_of_order" value="104">
      <attribute name="c:identifier" value="G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER"/>
    </member>
    <member name="quantifier_too_big" value="105">
      <attribute name="c:identifier" value="G_REGEX_ERROR_QUANTIFIER_TOO_BIG"/>
    </member>
    <member name="unterminated_character_class" value="106">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS"/>
    </member>
    <member name="invalid_escape_in_character_class" value="107">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS"/>
    </member>
    <member name="range_out_of_order" value="108">
      <attribute name="c:identifier" value="G_REGEX_ERROR_RANGE_OUT_OF_ORDER"/>
    </member>
    <member name="nothing_to_repeat" value="109">
      <attribute name="c:identifier" value="G_REGEX_ERROR_NOTHING_TO_REPEAT"/>
    </member>
    <member name="unrecognized_character" value="112">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNRECOGNIZED_CHARACTER"/>
    </member>
    <member name="posix_named_class_outside_class" value="113">
      <attribute name="c:identifier" value="G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS"/>
    </member>
    <member name="unmatched_parenthesis" value="114">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNMATCHED_PARENTHESIS"/>
    </member>
    <member name="inexistent_subpattern_reference" value="115">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE"/>
    </member>
    <member name="unterminated_comment" value="118">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNTERMINATED_COMMENT"/>
    </member>
    <member name="expression_too_large" value="120">
      <attribute name="c:identifier" value="G_REGEX_ERROR_EXPRESSION_TOO_LARGE"/>
    </member>
    <member name="memory_error" value="121">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MEMORY_ERROR"/>
    </member>
    <member name="variable_length_lookbehind" value="125">
      <attribute name="c:identifier" value="G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND"/>
    </member>
    <member name="malformed_condition" value="126">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MALFORMED_CONDITION"/>
    </member>
    <member name="too_many_conditional_branches" value="127">
      <attribute name="c:identifier" value="G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES"/>
    </member>
    <member name="assertion_expected" value="128">
      <attribute name="c:identifier" value="G_REGEX_ERROR_ASSERTION_EXPECTED"/>
    </member>
    <member name="unknown_posix_class_name" value="130">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME"/>
    </member>
    <member name="posix_collating_elements_not_supported" value="131">
      <attribute name="c:identifier" value="G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED"/>
    </member>
    <member name="hex_code_too_large" value="134">
      <attribute name="c:identifier" value="G_REGEX_ERROR_HEX_CODE_TOO_LARGE"/>
    </member>
    <member name="invalid_condition" value="135">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INVALID_CONDITION"/>
    </member>
    <member name="single_byte_match_in_lookbehind" value="136">
      <attribute name="c:identifier" value="G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND"/>
    </member>
    <member name="infinite_loop" value="140">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INFINITE_LOOP"/>
    </member>
    <member name="missing_subpattern_name_terminator" value="142">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR"/>
    </member>
    <member name="duplicate_subpattern_name" value="143">
      <attribute name="c:identifier" value="G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME"/>
    </member>
    <member name="malformed_property" value="146">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MALFORMED_PROPERTY"/>
    </member>
    <member name="unknown_property" value="147">
      <attribute name="c:identifier" value="G_REGEX_ERROR_UNKNOWN_PROPERTY"/>
    </member>
    <member name="subpattern_name_too_long" value="148">
      <attribute name="c:identifier" value="G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG"/>
    </member>
    <member name="too_many_subpatterns" value="149">
      <attribute name="c:identifier" value="G_REGEX_ERROR_TOO_MANY_SUBPATTERNS"/>
    </member>
    <member name="invalid_octal_value" value="151">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INVALID_OCTAL_VALUE"/>
    </member>
    <member name="too_many_branches_in_define" value="154">
      <attribute name="c:identifier" value="G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE"/>
    </member>
    <member name="define_repetion" value="155">
      <attribute name="c:identifier" value="G_REGEX_ERROR_DEFINE_REPETION"/>
    </member>
    <member name="inconsistent_newline_options" value="156">
      <attribute name="c:identifier" value="G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS"/>
    </member>
    <member name="missing_back_reference" value="157">
      <attribute name="c:identifier" value="G_REGEX_ERROR_MISSING_BACK_REFERENCE"/>
    </member>
  </enumeration>
  <callback name="RegexEvalCallback">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="match_info" transfer-ownership="none">
        <type name="MatchInfo"/>
      </parameter>
      <parameter name="result" transfer-ownership="none">
        <type name="String"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="2">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <bitfield name="RegexMatchFlags">
    <member name="anchored" value="16">
      <attribute name="c:identifier" value="G_REGEX_MATCH_ANCHORED"/>
    </member>
    <member name="notbol" value="128">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NOTBOL"/>
    </member>
    <member name="noteol" value="256">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NOTEOL"/>
    </member>
    <member name="notempty" value="1024">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NOTEMPTY"/>
    </member>
    <member name="partial" value="32768">
      <attribute name="c:identifier" value="G_REGEX_MATCH_PARTIAL"/>
    </member>
    <member name="newline_cr" value="1048576">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NEWLINE_CR"/>
    </member>
    <member name="newline_lf" value="2097152">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NEWLINE_LF"/>
    </member>
    <member name="newline_crlf" value="3145728">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NEWLINE_CRLF"/>
    </member>
    <member name="newline_any" value="4194304">
      <attribute name="c:identifier" value="G_REGEX_MATCH_NEWLINE_ANY"/>
    </member>
  </bitfield>
  <constant name="SEARCHPATH_SEPARATOR" value="59">
    <type name="gint32"/>
  </constant>
  <constant name="SEARCHPATH_SEPARATOR_S" value=";">
    <type name="utf8"/>
  </constant>
  <constant name="SIZEOF_LONG" value="8">
    <type name="gint32"/>
  </constant>
  <constant name="SIZEOF_SIZE_T" value="8">
    <type name="gint32"/>
  </constant>
  <constant name="SIZEOF_VOID_P" value="8">
    <type name="gint32"/>
  </constant>
struct SList
{
  <field name="data" writable="1">
    <type name="any"/>
  </field>
  <field name="next" writable="1">
    <type name="GLib.SList">
      <type name="any"/>
    </type>
  </field>
};
  <constant name="SQRT2" value="1.414214">
    <type name="gdouble"/>
  </constant>
  <constant name="STR_DELIMITERS" value="_-|&gt; &lt;.">
    <type name="utf8"/>
  </constant>
  <constant name="SYSDEF_AF_INET" value="2">
    <type name="gint32"/>
  </constant>
  <constant name="SYSDEF_AF_INET6" value="10">
    <type name="gint32"/>
  </constant>
  <constant name="SYSDEF_AF_UNIX" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SYSDEF_MSG_DONTROUTE" value="4">
    <type name="gint32"/>
  </constant>
  <constant name="SYSDEF_MSG_OOB" value="1">
    <type name="gint32"/>
  </constant>
  <constant name="SYSDEF_MSG_PEEK" value="2">
    <type name="gint32"/>
  </constant>
struct Scanner
{
  <field name="user_data" writable="1">
    <type name="any"/>
  </field>
  <field name="max_parse_errors" writable="1">
    <type name="guint32"/>
  </field>
  <field name="parse_errors" writable="1">
    <type name="guint32"/>
  </field>
  <field name="input_name" writable="1">
    <type name="utf8"/>
  </field>
  <field name="qdata" writable="1">
    <type name="Data"/>
  </field>
  <field name="config" writable="1">
    <type name="ScannerConfig"/>
  </field>
  <field name="token" writable="1">
    <type name="TokenType"/>
  </field>
  <field name="value" writable="1">
    <type name="TokenValue"/>
  </field>
  <field name="line" writable="1">
    <type name="guint32"/>
  </field>
  <field name="position" writable="1">
    <type name="guint32"/>
  </field>
  <field name="next_token" writable="1">
    <type name="TokenType"/>
  </field>
  <field name="next_value" writable="1">
    <type name="TokenValue"/>
  </field>
  <field name="next_line" writable="1">
    <type name="guint32"/>
  </field>
  <field name="next_position" writable="1">
    <type name="guint32"/>
  </field>
  <field name="symbol_table">
    <type name="GLib.HashTable">
      <type name="any"/>
      <type name="any"/>
    </type>
  </field>
  <field name="input_fd">
    <type name="gint32"/>
  </field>
  <field name="text">
    <type name="utf8"/>
  </field>
  <field name="text_end">
    <type name="utf8"/>
  </field>
  <field name="buffer">
    <type name="utf8"/>
  </field>
  <field name="scope_id">
    <type name="guint32"/>
  </field>
  <field name="msg_handler" writable="1">
    <callback name="ScannerMsgFunc">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="scanner" transfer-ownership="none">
          <type name="Scanner"/>
        </parameter>
        <parameter name="message" transfer-ownership="none">
          <type name="utf8"/>
        </parameter>
        <parameter name="error" transfer-ownership="none">
          <type name="gboolean"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <method name="cur_line" c:identifier="g_scanner_cur_line">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="cur_position" c:identifier="g_scanner_cur_position">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="cur_token" c:identifier="g_scanner_cur_token">
    <return-value transfer-ownership="none">
      <type name="TokenType"/>
    </return-value>
  </method>
  <method name="destroy" c:identifier="g_scanner_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="eof" c:identifier="g_scanner_eof">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_next_token" c:identifier="g_scanner_get_next_token">
    <return-value transfer-ownership="none">
      <type name="TokenType"/>
    </return-value>
  </method>
  <method name="input_file" c:identifier="g_scanner_input_file">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="input_fd" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="input_text" c:identifier="g_scanner_input_text">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="text" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="text_len" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="peek_next_token" c:identifier="g_scanner_peek_next_token">
    <return-value transfer-ownership="none">
      <type name="TokenType"/>
    </return-value>
  </method>
  <method name="scope_add_symbol" c:identifier="g_scanner_scope_add_symbol">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="scope_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="symbol" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="scope_remove_symbol" c:identifier="g_scanner_scope_remove_symbol">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="scope_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="symbol" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_scope" c:identifier="g_scanner_set_scope">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="scope_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="sync_file_offset" c:identifier="g_scanner_sync_file_offset">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="unexp_token" c:identifier="g_scanner_unexp_token">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="expected_token" transfer-ownership="none">
        <type name="TokenType"/>
      </parameter>
      <parameter name="identifier_spec" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="symbol_spec" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="symbol_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="is_error" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
};
struct ScannerConfig
{
  <field name="cset_skip_characters" writable="1">
    <type name="utf8"/>
  </field>
  <field name="cset_identifier_first" writable="1">
    <type name="utf8"/>
  </field>
  <field name="cset_identifier_nth" writable="1">
    <type name="utf8"/>
  </field>
  <field name="cpair_comment_single" writable="1">
    <type name="utf8"/>
  </field>
  <field name="case_sensitive" writable="1">
    <type name="guint32"/>
  </field>
  <field name="skip_comment_multi" writable="1">
    <type name="guint32"/>
  </field>
  <field name="skip_comment_single" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_comment_multi" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_identifier" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_identifier_1char" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_identifier_NULL" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_symbols" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_binary" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_octal" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_float" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_hex" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_hex_dollar" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_string_sq" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scan_string_dq" writable="1">
    <type name="guint32"/>
  </field>
  <field name="numbers_2_int" writable="1">
    <type name="guint32"/>
  </field>
  <field name="int_2_float" writable="1">
    <type name="guint32"/>
  </field>
  <field name="identifier_2_string" writable="1">
    <type name="guint32"/>
  </field>
  <field name="char_2_token" writable="1">
    <type name="guint32"/>
  </field>
  <field name="symbol_2_token" writable="1">
    <type name="guint32"/>
  </field>
  <field name="scope_0_fallback" writable="1">
    <type name="guint32"/>
  </field>
  <field name="store_int64" writable="1">
    <type name="guint32"/>
  </field>
  <field name="padding_dummy">
    <type name="guint32"/>
  </field>
};
  <callback name="ScannerMsgFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="scanner" transfer-ownership="none">
        <type name="Scanner"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="error" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </callback>
  <enumeration name="SeekType">
    <member name="cur" value="0">
      <attribute name="c:identifier" value="G_SEEK_CUR"/>
    </member>
    <member name="set" value="1">
      <attribute name="c:identifier" value="G_SEEK_SET"/>
    </member>
    <member name="end" value="2">
      <attribute name="c:identifier" value="G_SEEK_END"/>
    </member>
  </enumeration>
struct Sequence
{
  <method name="free" c:identifier="g_sequence_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_length" c:identifier="g_sequence_get_length">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <function name="move" c:identifier="g_sequence_move">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="src" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="dest" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="move_range" c:identifier="g_sequence_move_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="begin" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove" c:identifier="g_sequence_remove">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="iter" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove_range" c:identifier="g_sequence_remove_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="set" c:identifier="g_sequence_set">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="iter" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="swap" c:identifier="g_sequence_swap">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
};
struct SequenceIter
{
  <method name="compare" c:identifier="g_sequence_iter_compare">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="b" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_position" c:identifier="g_sequence_iter_get_position">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="is_begin" c:identifier="g_sequence_iter_is_begin">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_end" c:identifier="g_sequence_iter_is_end">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
};
  <callback name="SequenceIterCompareFunc">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <enumeration name="ShellError" glib:error-domain="g-shell-error-quark">
    <member name="bad_quoting" value="0">
      <attribute name="c:identifier" value="G_SHELL_ERROR_BAD_QUOTING"/>
    </member>
    <member name="empty_string" value="1">
      <attribute name="c:identifier" value="G_SHELL_ERROR_EMPTY_STRING"/>
    </member>
    <member name="failed" value="2">
      <attribute name="c:identifier" value="G_SHELL_ERROR_FAILED"/>
    </member>
  </enumeration>
  <enumeration name="SliceConfig">
    <member name="always_malloc" value="1">
      <attribute name="c:identifier" value="G_SLICE_CONFIG_ALWAYS_MALLOC"/>
    </member>
    <member name="bypass_magazines" value="2">
      <attribute name="c:identifier" value="G_SLICE_CONFIG_BYPASS_MAGAZINES"/>
    </member>
    <member name="working_set_msecs" value="3">
      <attribute name="c:identifier" value="G_SLICE_CONFIG_WORKING_SET_MSECS"/>
    </member>
    <member name="color_increment" value="4">
      <attribute name="c:identifier" value="G_SLICE_CONFIG_COLOR_INCREMENT"/>
    </member>
    <member name="chunk_sizes" value="5">
      <attribute name="c:identifier" value="G_SLICE_CONFIG_CHUNK_SIZES"/>
    </member>
    <member name="contention_counter" value="6">
      <attribute name="c:identifier" value="G_SLICE_CONFIG_CONTENTION_COUNTER"/>
    </member>
  </enumeration>
struct Source
{
 glib:type-name="GSource" glib:get-type="g_source_get_type"  <field name="callback_data">
    <type name="any"/>
  </field>
  <field name="callback_funcs">
    <type name="SourceCallbackFuncs"/>
  </field>
  <field name="source_funcs">
    <type name="SourceFuncs"/>
  </field>
  <field name="ref_count">
    <type name="guint32"/>
  </field>
  <field name="context">
    <type name="MainContext"/>
  </field>
  <field name="priority">
    <type name="gint32"/>
  </field>
  <field name="flags">
    <type name="guint32"/>
  </field>
  <field name="source_id">
    <type name="guint32"/>
  </field>
  <field name="poll_fds">
    <type name="GLib.SList">
      <type name="any"/>
    </type>
  </field>
  <field name="prev">
    <type name="Source"/>
  </field>
  <field name="next">
    <type name="Source"/>
  </field>
  <field name="name">
    <type name="utf8"/>
  </field>
  <field name="priv">
    <type name="SourcePrivate"/>
  </field>
  <constructor name="new" c:identifier="g_source_new">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="source_funcs" transfer-ownership="none">
        <type name="SourceFuncs"/>
      </parameter>
      <parameter name="struct_size" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="add_child_source" c:identifier="g_source_add_child_source">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="child_source" transfer-ownership="none">
        <type name="Source"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_poll" c:identifier="g_source_add_poll">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="fd" transfer-ownership="none">
        <type name="PollFD"/>
      </parameter>
    </parameters>
  </method>
  <method name="attach" c:identifier="g_source_attach">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="context" transfer-ownership="none" allow-none="1">
        <type name="MainContext"/>
      </parameter>
    </parameters>
  </method>
  <method name="destroy" c:identifier="g_source_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_can_recurse" c:identifier="g_source_get_can_recurse">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_context" c:identifier="g_source_get_context">
    <return-value transfer-ownership="none">
      <type name="MainContext"/>
    </return-value>
  </method>
  <method name="get_current_time" c:identifier="g_source_get_current_time" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="timeval" transfer-ownership="none">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_id" c:identifier="g_source_get_id">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_name" c:identifier="g_source_get_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_priority" c:identifier="g_source_get_priority">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_time" c:identifier="g_source_get_time">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="is_destroyed" c:identifier="g_source_is_destroyed">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="ref" c:identifier="g_source_ref">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
  </method>
  <method name="remove_child_source" c:identifier="g_source_remove_child_source">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="child_source" transfer-ownership="none">
        <type name="Source"/>
      </parameter>
    </parameters>
  </method>
  <method name="remove_poll" c:identifier="g_source_remove_poll">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="fd" transfer-ownership="none">
        <type name="PollFD"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_callback" c:identifier="g_source_set_callback">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="func" transfer-ownership="none" scope="notified" closure="1" destroy="2">
        <type name="SourceFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_callback_indirect" c:identifier="g_source_set_callback_indirect">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="callback_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="callback_funcs" transfer-ownership="none">
        <type name="SourceCallbackFuncs"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_can_recurse" c:identifier="g_source_set_can_recurse">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="can_recurse" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_funcs" c:identifier="g_source_set_funcs">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="funcs" transfer-ownership="none">
        <type name="SourceFuncs"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_name" c:identifier="g_source_set_name">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_priority" c:identifier="g_source_set_priority">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="unref" c:identifier="g_source_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="remove" c:identifier="g_source_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="tag" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove_by_funcs_user_data" c:identifier="g_source_remove_by_funcs_user_data">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="funcs" transfer-ownership="none">
        <type name="SourceFuncs"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="remove_by_user_data" c:identifier="g_source_remove_by_user_data">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_name_by_id" c:identifier="g_source_set_name_by_id">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="tag" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
};
struct SourceCallbackFuncs
{
  <field name="ref">
    <callback name="ref">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="cb_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="unref">
    <callback name="unref">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="cb_data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="get">
    <type name="any"/>
  </field>
};
  <callback name="SourceDummyMarshal">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </callback>
  <callback name="SourceFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="user_data" transfer-ownership="none" closure="0">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct SourceFuncs
{
  <field name="prepare">
    <callback name="prepare">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="source" transfer-ownership="none">
          <type name="Source"/>
        </parameter>
        <parameter name="timeout_" transfer-ownership="none">
          <type name="gint32"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="check">
    <callback name="check">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="source" transfer-ownership="none">
          <type name="Source"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="dispatch">
    <type name="any"/>
  </field>
  <field name="finalize">
    <callback name="finalize">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="source" transfer-ownership="none">
          <type name="Source"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="closure_callback">
    <callback name="SourceFunc">
      <return-value transfer-ownership="none">
        <type name="gboolean"/>
      </return-value>
      <parameters>
        <parameter name="user_data" transfer-ownership="none" closure="0">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="closure_marshal">
    <callback name="SourceDummyMarshal">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
    </callback>
  </field>
};
struct SourcePrivate
{
};
  <callback name="SpawnChildSetupFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="user_data" transfer-ownership="none" closure="0">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <enumeration name="SpawnError" glib:error-domain="g-exec-error-quark">
    <member name="fork" value="0">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_FORK"/>
    </member>
    <member name="read" value="1">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_READ"/>
    </member>
    <member name="chdir" value="2">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_CHDIR"/>
    </member>
    <member name="acces" value="3">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_ACCES"/>
    </member>
    <member name="perm" value="4">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_PERM"/>
    </member>
    <member name="too_big" value="5">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_TOO_BIG"/>
    </member>
    <member name="2big" value="5">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_2BIG"/>
    </member>
    <member name="noexec" value="6">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_NOEXEC"/>
    </member>
    <member name="nametoolong" value="7">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_NAMETOOLONG"/>
    </member>
    <member name="noent" value="8">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_NOENT"/>
    </member>
    <member name="nomem" value="9">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_NOMEM"/>
    </member>
    <member name="notdir" value="10">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_NOTDIR"/>
    </member>
    <member name="loop" value="11">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_LOOP"/>
    </member>
    <member name="txtbusy" value="12">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_TXTBUSY"/>
    </member>
    <member name="io" value="13">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_IO"/>
    </member>
    <member name="nfile" value="14">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_NFILE"/>
    </member>
    <member name="mfile" value="15">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_MFILE"/>
    </member>
    <member name="inval" value="16">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_INVAL"/>
    </member>
    <member name="isdir" value="17">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_ISDIR"/>
    </member>
    <member name="libbad" value="18">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_LIBBAD"/>
    </member>
    <member name="failed" value="19">
      <attribute name="c:identifier" value="G_SPAWN_ERROR_FAILED"/>
    </member>
  </enumeration>
  <bitfield name="SpawnFlags">
    <member name="leave_descriptors_open" value="1">
      <attribute name="c:identifier" value="G_SPAWN_LEAVE_DESCRIPTORS_OPEN"/>
    </member>
    <member name="do_not_reap_child" value="2">
      <attribute name="c:identifier" value="G_SPAWN_DO_NOT_REAP_CHILD"/>
    </member>
    <member name="search_path" value="4">
      <attribute name="c:identifier" value="G_SPAWN_SEARCH_PATH"/>
    </member>
    <member name="stdout_to_dev_null" value="8">
      <attribute name="c:identifier" value="G_SPAWN_STDOUT_TO_DEV_NULL"/>
    </member>
    <member name="stderr_to_dev_null" value="16">
      <attribute name="c:identifier" value="G_SPAWN_STDERR_TO_DEV_NULL"/>
    </member>
    <member name="child_inherits_stdin" value="32">
      <attribute name="c:identifier" value="G_SPAWN_CHILD_INHERITS_STDIN"/>
    </member>
    <member name="file_and_argv_zero" value="64">
      <attribute name="c:identifier" value="G_SPAWN_FILE_AND_ARGV_ZERO"/>
    </member>
  </bitfield>
struct StatBuf
{
};
struct String
{
 glib:type-name="GString" glib:get-type="g_gstring_get_type"  <field name="str" writable="1">
    <type name="utf8"/>
  </field>
  <field name="len" writable="1">
    <type name="guint64"/>
  </field>
  <field name="allocated_len" writable="1">
    <type name="guint64"/>
  </field>
  <method name="append" c:identifier="g_string_append">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="append_c" c:identifier="g_string_append_c">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="append_len" c:identifier="g_string_append_len">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="append_unichar" c:identifier="g_string_append_unichar">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="wc" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </method>
  <method name="append_uri_escaped" c:identifier="g_string_append_uri_escaped">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="unescaped" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="reserved_chars_allowed" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="allow_utf8" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="ascii_down" c:identifier="g_string_ascii_down">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
  </method>
  <method name="ascii_up" c:identifier="g_string_ascii_up">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
  </method>
  <method name="assign" c:identifier="g_string_assign">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="rval" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="down" c:identifier="g_string_down">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
  </method>
  <method name="equal" c:identifier="g_string_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="v2" transfer-ownership="none">
        <type name="String"/>
      </parameter>
    </parameters>
  </method>
  <method name="erase" c:identifier="g_string_erase">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="free" c:identifier="g_string_free">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="free_segment" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="hash" c:identifier="g_string_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="insert" c:identifier="g_string_insert">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="insert_c" c:identifier="g_string_insert_c">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="insert_len" c:identifier="g_string_insert_len">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="insert_unichar" c:identifier="g_string_insert_unichar">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="wc" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </method>
  <method name="overwrite" c:identifier="g_string_overwrite">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="overwrite_len" c:identifier="g_string_overwrite_len">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="pos" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="prepend" c:identifier="g_string_prepend">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="prepend_c" c:identifier="g_string_prepend_c">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
  <method name="prepend_len" c:identifier="g_string_prepend_len">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="val" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="prepend_unichar" c:identifier="g_string_prepend_unichar">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="wc" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_size" c:identifier="g_string_set_size">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="truncate" c:identifier="g_string_truncate">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="up" c:identifier="g_string_up">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
  </method>
};
struct StringChunk
{
  <method name="clear" c:identifier="g_string_chunk_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="free" c:identifier="g_string_chunk_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="insert" c:identifier="g_string_chunk_insert">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="insert_const" c:identifier="g_string_chunk_insert_const">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </method>
  <method name="insert_len" c:identifier="g_string_chunk_insert_len">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
};
struct TestCase
{
};
struct TestConfig
{
  <field name="test_initialized" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="test_quick" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="test_perf" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="test_verbose" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="test_quiet" writable="1">
    <type name="gboolean"/>
  </field>
  <field name="test_undefined" writable="1">
    <type name="gboolean"/>
  </field>
};
  <callback name="TestDataFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="user_data" transfer-ownership="none" closure="0">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="TestFixtureFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="fixture" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <callback name="TestFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </callback>
struct TestLogBuffer
{
  <field name="data">
    <type name="String"/>
  </field>
  <field name="msgs">
    <type name="GLib.SList">
      <type name="any"/>
    </type>
  </field>
  <method name="free" c:identifier="g_test_log_buffer_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="push" c:identifier="g_test_log_buffer_push">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="n_bytes" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="bytes" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </method>
};
  <callback name="TestLogFatalFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="log_level" transfer-ownership="none">
        <type name="LogLevelFlags"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none" closure="3">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct TestLogMsg
{
  <field name="log_type" writable="1">
    <type name="TestLogType"/>
  </field>
  <field name="n_strings" writable="1">
    <type name="guint32"/>
  </field>
  <field name="strings" writable="1">
    <type name="utf8"/>
  </field>
  <field name="n_nums" writable="1">
    <type name="guint32"/>
  </field>
  <field name="nums" writable="1">
    <type name="gint64"/>
  </field>
  <method name="free" c:identifier="g_test_log_msg_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <enumeration name="TestLogType">
    <member name="none" value="0">
      <attribute name="c:identifier" value="G_TEST_LOG_NONE"/>
    </member>
    <member name="error" value="1">
      <attribute name="c:identifier" value="G_TEST_LOG_ERROR"/>
    </member>
    <member name="start_binary" value="2">
      <attribute name="c:identifier" value="G_TEST_LOG_START_BINARY"/>
    </member>
    <member name="list_case" value="3">
      <attribute name="c:identifier" value="G_TEST_LOG_LIST_CASE"/>
    </member>
    <member name="skip_case" value="4">
      <attribute name="c:identifier" value="G_TEST_LOG_SKIP_CASE"/>
    </member>
    <member name="start_case" value="5">
      <attribute name="c:identifier" value="G_TEST_LOG_START_CASE"/>
    </member>
    <member name="stop_case" value="6">
      <attribute name="c:identifier" value="G_TEST_LOG_STOP_CASE"/>
    </member>
    <member name="min_result" value="7">
      <attribute name="c:identifier" value="G_TEST_LOG_MIN_RESULT"/>
    </member>
    <member name="max_result" value="8">
      <attribute name="c:identifier" value="G_TEST_LOG_MAX_RESULT"/>
    </member>
    <member name="message" value="9">
      <attribute name="c:identifier" value="G_TEST_LOG_MESSAGE"/>
    </member>
  </enumeration>
struct TestSuite
{
  <method name="add" c:identifier="g_test_suite_add">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="test_case" transfer-ownership="none">
        <type name="TestCase"/>
      </parameter>
    </parameters>
  </method>
  <method name="add_suite" c:identifier="g_test_suite_add_suite">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="nestedsuite" transfer-ownership="none">
        <type name="TestSuite"/>
      </parameter>
    </parameters>
  </method>
};
  <bitfield name="TestTrapFlags">
    <member name="silence_stdout" value="128">
      <attribute name="c:identifier" value="G_TEST_TRAP_SILENCE_STDOUT"/>
    </member>
    <member name="silence_stderr" value="256">
      <attribute name="c:identifier" value="G_TEST_TRAP_SILENCE_STDERR"/>
    </member>
    <member name="inherit_stdin" value="512">
      <attribute name="c:identifier" value="G_TEST_TRAP_INHERIT_STDIN"/>
    </member>
  </bitfield>
struct Thread
{
  <method name="unref" c:identifier="g_thread_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="error_quark" c:identifier="g_thread_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="exit" c:identifier="g_thread_exit">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="retval" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="yield" c:identifier="g_thread_yield">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
};
  <enumeration name="ThreadError" glib:error-domain="g_thread_error">
    <member name="thread_error_again" value="0">
      <attribute name="c:identifier" value="G_THREAD_ERROR_AGAIN"/>
    </member>
  </enumeration>
struct ThreadPool
{
  <field name="func" writable="1">
    <callback name="Func">
      <return-value transfer-ownership="none">
        <type name="none"/>
      </return-value>
      <parameters>
        <parameter name="data" transfer-ownership="none">
          <type name="any"/>
        </parameter>
        <parameter name="user_data" transfer-ownership="none" closure="1">
          <type name="any"/>
        </parameter>
      </parameters>
    </callback>
  </field>
  <field name="user_data" writable="1">
    <type name="any"/>
  </field>
  <field name="exclusive" writable="1">
    <type name="gboolean"/>
  </field>
  <method name="free" c:identifier="g_thread_pool_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="immediate" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
      <parameter name="wait_" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_max_threads" c:identifier="g_thread_pool_get_max_threads">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_num_threads" c:identifier="g_thread_pool_get_num_threads">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="push" c:identifier="g_thread_pool_push" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="set_max_threads" c:identifier="g_thread_pool_set_max_threads" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="max_threads" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="unprocessed" c:identifier="g_thread_pool_unprocessed">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <function name="get_max_idle_time" c:identifier="g_thread_pool_get_max_idle_time">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="get_max_unused_threads" c:identifier="g_thread_pool_get_max_unused_threads">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </function>
  <function name="get_num_unused_threads" c:identifier="g_thread_pool_get_num_unused_threads">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="set_max_idle_time" c:identifier="g_thread_pool_set_max_idle_time">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_max_unused_threads" c:identifier="g_thread_pool_set_max_unused_threads">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="max_threads" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="stop_unused_threads" c:identifier="g_thread_pool_stop_unused_threads">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
};
  <enumeration name="TimeType">
    <member name="standard" value="0">
      <attribute name="c:identifier" value="G_TIME_TYPE_STANDARD"/>
    </member>
    <member name="daylight" value="1">
      <attribute name="c:identifier" value="G_TIME_TYPE_DAYLIGHT"/>
    </member>
    <member name="universal" value="2">
      <attribute name="c:identifier" value="G_TIME_TYPE_UNIVERSAL"/>
    </member>
  </enumeration>
struct TimeVal
{
  <field name="tv_sec" writable="1">
    <type name="gint64"/>
  </field>
  <field name="tv_usec" writable="1">
    <type name="gint64"/>
  </field>
  <method name="add" c:identifier="g_time_val_add">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="microseconds" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="to_iso8601" c:identifier="g_time_val_to_iso8601">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <function name="from_iso8601" c:identifier="g_time_val_from_iso8601">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="iso_date" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="time_" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </function>
};
struct TimeZone
{
  <method name="adjust_time" c:identifier="g_time_zone_adjust_time">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="TimeType"/>
      </parameter>
      <parameter name="time_" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="find_interval" c:identifier="g_time_zone_find_interval">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="TimeType"/>
      </parameter>
      <parameter name="time_" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_abbreviation" c:identifier="g_time_zone_get_abbreviation">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_offset" c:identifier="g_time_zone_get_offset">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="is_dst" c:identifier="g_time_zone_is_dst">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </method>
  <method name="unref" c:identifier="g_time_zone_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
struct Timer
{
  <method name="continue" c:identifier="g_timer_continue">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="destroy" c:identifier="g_timer_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="elapsed" c:identifier="g_timer_elapsed">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="microseconds" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="reset" c:identifier="g_timer_reset">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="start" c:identifier="g_timer_start">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="stop" c:identifier="g_timer_stop">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <enumeration name="TokenType">
    <member name="eof" value="0">
      <attribute name="c:identifier" value="G_TOKEN_EOF"/>
    </member>
    <member name="left_paren" value="40">
      <attribute name="c:identifier" value="G_TOKEN_LEFT_PAREN"/>
    </member>
    <member name="right_paren" value="41">
      <attribute name="c:identifier" value="G_TOKEN_RIGHT_PAREN"/>
    </member>
    <member name="left_curly" value="123">
      <attribute name="c:identifier" value="G_TOKEN_LEFT_CURLY"/>
    </member>
    <member name="right_curly" value="125">
      <attribute name="c:identifier" value="G_TOKEN_RIGHT_CURLY"/>
    </member>
    <member name="left_brace" value="91">
      <attribute name="c:identifier" value="G_TOKEN_LEFT_BRACE"/>
    </member>
    <member name="right_brace" value="93">
      <attribute name="c:identifier" value="G_TOKEN_RIGHT_BRACE"/>
    </member>
    <member name="equal_sign" value="61">
      <attribute name="c:identifier" value="G_TOKEN_EQUAL_SIGN"/>
    </member>
    <member name="comma" value="44">
      <attribute name="c:identifier" value="G_TOKEN_COMMA"/>
    </member>
    <member name="none" value="256">
      <attribute name="c:identifier" value="G_TOKEN_NONE"/>
    </member>
    <member name="error" value="257">
      <attribute name="c:identifier" value="G_TOKEN_ERROR"/>
    </member>
    <member name="char" value="258">
      <attribute name="c:identifier" value="G_TOKEN_CHAR"/>
    </member>
    <member name="binary" value="259">
      <attribute name="c:identifier" value="G_TOKEN_BINARY"/>
    </member>
    <member name="octal" value="260">
      <attribute name="c:identifier" value="G_TOKEN_OCTAL"/>
    </member>
    <member name="int" value="261">
      <attribute name="c:identifier" value="G_TOKEN_INT"/>
    </member>
    <member name="hex" value="262">
      <attribute name="c:identifier" value="G_TOKEN_HEX"/>
    </member>
    <member name="float" value="263">
      <attribute name="c:identifier" value="G_TOKEN_FLOAT"/>
    </member>
    <member name="string" value="264">
      <attribute name="c:identifier" value="G_TOKEN_STRING"/>
    </member>
    <member name="symbol" value="265">
      <attribute name="c:identifier" value="G_TOKEN_SYMBOL"/>
    </member>
    <member name="identifier" value="266">
      <attribute name="c:identifier" value="G_TOKEN_IDENTIFIER"/>
    </member>
    <member name="identifier_null" value="267">
      <attribute name="c:identifier" value="G_TOKEN_IDENTIFIER_NULL"/>
    </member>
    <member name="comment_single" value="268">
      <attribute name="c:identifier" value="G_TOKEN_COMMENT_SINGLE"/>
    </member>
    <member name="comment_multi" value="269">
      <attribute name="c:identifier" value="G_TOKEN_COMMENT_MULTI"/>
    </member>
  </enumeration>
  <union name="TokenValue">
    <field name="v_symbol" writable="1">
      <type name="any"/>
    </field>
    <field name="v_identifier" writable="1">
      <type name="utf8"/>
    </field>
    <field name="v_binary" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_octal" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_int" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_int64" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_float" writable="1">
      <type name="gdouble"/>
    </field>
    <field name="v_hex" writable="1">
      <type name="guint64"/>
    </field>
    <field name="v_string" writable="1">
      <type name="utf8"/>
    </field>
    <field name="v_comment" writable="1">
      <type name="utf8"/>
    </field>
    <field name="v_char" writable="1">
      <type name="guint8"/>
    </field>
    <field name="v_error" writable="1">
      <type name="guint32"/>
    </field>
  </union>
  <callback name="TranslateFunc">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
struct TrashStack
{
  <field name="next" writable="1">
    <type name="TrashStack"/>
  </field>
  <function name="height" c:identifier="g_trash_stack_height">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="stack_p" transfer-ownership="none">
        <type name="TrashStack"/>
      </parameter>
    </parameters>
  </function>
  <function name="push" c:identifier="g_trash_stack_push">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="stack_p" transfer-ownership="none">
        <type name="TrashStack"/>
      </parameter>
      <parameter name="data_p" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
};
  <bitfield name="TraverseFlags">
    <member name="leaves" value="1">
      <attribute name="c:identifier" value="G_TRAVERSE_LEAVES"/>
    </member>
    <member name="non_leaves" value="2">
      <attribute name="c:identifier" value="G_TRAVERSE_NON_LEAVES"/>
    </member>
    <member name="all" value="3">
      <attribute name="c:identifier" value="G_TRAVERSE_ALL"/>
    </member>
    <member name="mask" value="3">
      <attribute name="c:identifier" value="G_TRAVERSE_MASK"/>
    </member>
    <member name="leafs" value="1">
      <attribute name="c:identifier" value="G_TRAVERSE_LEAFS"/>
    </member>
    <member name="non_leafs" value="2">
      <attribute name="c:identifier" value="G_TRAVERSE_NON_LEAFS"/>
    </member>
  </bitfield>
  <callback name="TraverseFunc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </callback>
  <enumeration name="TraverseType">
    <member name="in_order" value="0">
      <attribute name="c:identifier" value="G_IN_ORDER"/>
    </member>
    <member name="pre_order" value="1">
      <attribute name="c:identifier" value="G_PRE_ORDER"/>
    </member>
    <member name="post_order" value="2">
      <attribute name="c:identifier" value="G_POST_ORDER"/>
    </member>
    <member name="level_order" value="3">
      <attribute name="c:identifier" value="G_LEVEL_ORDER"/>
    </member>
  </enumeration>
struct Tree
{
  <method name="destroy" c:identifier="g_tree_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="height" c:identifier="g_tree_height">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="insert" c:identifier="g_tree_insert">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="lookup_extended" c:identifier="g_tree_lookup_extended">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="lookup_key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="orig_key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="nnodes" c:identifier="g_tree_nnodes">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="remove" c:identifier="g_tree_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="replace" c:identifier="g_tree_replace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="steal" c:identifier="g_tree_steal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="unref" c:identifier="g_tree_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <constant name="UNICHAR_MAX_DECOMPOSITION_LENGTH" value="18">
    <type name="gint32"/>
  </constant>
  <constant name="URI_RESERVED_CHARS_GENERIC_DELIMITERS" value=":/?#[]@">
    <type name="utf8"/>
  </constant>
  <constant name="URI_RESERVED_CHARS_SUBCOMPONENT_DELIMITERS" value="!$&amp;&apos;()*+,;=">
    <type name="utf8"/>
  </constant>
  <constant name="USEC_PER_SEC" value="1000000">
    <type name="gint32"/>
  </constant>
  <enumeration name="UnicodeBreakType">
    <member name="mandatory" value="0">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_MANDATORY"/>
    </member>
    <member name="carriage_return" value="1">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_CARRIAGE_RETURN"/>
    </member>
    <member name="line_feed" value="2">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_LINE_FEED"/>
    </member>
    <member name="combining_mark" value="3">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_COMBINING_MARK"/>
    </member>
    <member name="surrogate" value="4">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_SURROGATE"/>
    </member>
    <member name="zero_width_space" value="5">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_ZERO_WIDTH_SPACE"/>
    </member>
    <member name="inseparable" value="6">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_INSEPARABLE"/>
    </member>
    <member name="non_breaking_glue" value="7">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_NON_BREAKING_GLUE"/>
    </member>
    <member name="contingent" value="8">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_CONTINGENT"/>
    </member>
    <member name="space" value="9">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_SPACE"/>
    </member>
    <member name="after" value="10">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_AFTER"/>
    </member>
    <member name="before" value="11">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_BEFORE"/>
    </member>
    <member name="before_and_after" value="12">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_BEFORE_AND_AFTER"/>
    </member>
    <member name="hyphen" value="13">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HYPHEN"/>
    </member>
    <member name="non_starter" value="14">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_NON_STARTER"/>
    </member>
    <member name="open_punctuation" value="15">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_OPEN_PUNCTUATION"/>
    </member>
    <member name="close_punctuation" value="16">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_CLOSE_PUNCTUATION"/>
    </member>
    <member name="quotation" value="17">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_QUOTATION"/>
    </member>
    <member name="exclamation" value="18">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_EXCLAMATION"/>
    </member>
    <member name="ideographic" value="19">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_IDEOGRAPHIC"/>
    </member>
    <member name="numeric" value="20">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_NUMERIC"/>
    </member>
    <member name="infix_separator" value="21">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_INFIX_SEPARATOR"/>
    </member>
    <member name="symbol" value="22">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_SYMBOL"/>
    </member>
    <member name="alphabetic" value="23">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_ALPHABETIC"/>
    </member>
    <member name="prefix" value="24">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_PREFIX"/>
    </member>
    <member name="postfix" value="25">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_POSTFIX"/>
    </member>
    <member name="complex_context" value="26">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_COMPLEX_CONTEXT"/>
    </member>
    <member name="ambiguous" value="27">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_AMBIGUOUS"/>
    </member>
    <member name="unknown" value="28">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_UNKNOWN"/>
    </member>
    <member name="next_line" value="29">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_NEXT_LINE"/>
    </member>
    <member name="word_joiner" value="30">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_WORD_JOINER"/>
    </member>
    <member name="hangul_l_jamo" value="31">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HANGUL_L_JAMO"/>
    </member>
    <member name="hangul_v_jamo" value="32">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HANGUL_V_JAMO"/>
    </member>
    <member name="hangul_t_jamo" value="33">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HANGUL_T_JAMO"/>
    </member>
    <member name="hangul_lv_syllable" value="34">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HANGUL_LV_SYLLABLE"/>
    </member>
    <member name="hangul_lvt_syllable" value="35">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE"/>
    </member>
    <member name="close_paranthesis" value="36">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_CLOSE_PARANTHESIS"/>
    </member>
    <member name="conditional_japanese_starter" value="37">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER"/>
    </member>
    <member name="hebrew_letter" value="38">
      <attribute name="c:identifier" value="G_UNICODE_BREAK_HEBREW_LETTER"/>
    </member>
  </enumeration>
  <enumeration name="UnicodeScript">
    <member name="invalid_code" value="-1">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_INVALID_CODE"/>
    </member>
    <member name="common" value="0">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_COMMON"/>
    </member>
    <member name="inherited" value="1">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_INHERITED"/>
    </member>
    <member name="arabic" value="2">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_ARABIC"/>
    </member>
    <member name="armenian" value="3">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_ARMENIAN"/>
    </member>
    <member name="bengali" value="4">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BENGALI"/>
    </member>
    <member name="bopomofo" value="5">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BOPOMOFO"/>
    </member>
    <member name="cherokee" value="6">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CHEROKEE"/>
    </member>
    <member name="coptic" value="7">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_COPTIC"/>
    </member>
    <member name="cyrillic" value="8">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CYRILLIC"/>
    </member>
    <member name="deseret" value="9">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_DESERET"/>
    </member>
    <member name="devanagari" value="10">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_DEVANAGARI"/>
    </member>
    <member name="ethiopic" value="11">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_ETHIOPIC"/>
    </member>
    <member name="georgian" value="12">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_GEORGIAN"/>
    </member>
    <member name="gothic" value="13">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_GOTHIC"/>
    </member>
    <member name="greek" value="14">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_GREEK"/>
    </member>
    <member name="gujarati" value="15">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_GUJARATI"/>
    </member>
    <member name="gurmukhi" value="16">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_GURMUKHI"/>
    </member>
    <member name="han" value="17">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_HAN"/>
    </member>
    <member name="hangul" value="18">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_HANGUL"/>
    </member>
    <member name="hebrew" value="19">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_HEBREW"/>
    </member>
    <member name="hiragana" value="20">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_HIRAGANA"/>
    </member>
    <member name="kannada" value="21">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_KANNADA"/>
    </member>
    <member name="katakana" value="22">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_KATAKANA"/>
    </member>
    <member name="khmer" value="23">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_KHMER"/>
    </member>
    <member name="lao" value="24">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LAO"/>
    </member>
    <member name="latin" value="25">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LATIN"/>
    </member>
    <member name="malayalam" value="26">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MALAYALAM"/>
    </member>
    <member name="mongolian" value="27">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MONGOLIAN"/>
    </member>
    <member name="myanmar" value="28">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MYANMAR"/>
    </member>
    <member name="ogham" value="29">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OGHAM"/>
    </member>
    <member name="old_italic" value="30">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OLD_ITALIC"/>
    </member>
    <member name="oriya" value="31">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_ORIYA"/>
    </member>
    <member name="runic" value="32">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_RUNIC"/>
    </member>
    <member name="sinhala" value="33">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SINHALA"/>
    </member>
    <member name="syriac" value="34">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SYRIAC"/>
    </member>
    <member name="tamil" value="35">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAMIL"/>
    </member>
    <member name="telugu" value="36">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TELUGU"/>
    </member>
    <member name="thaana" value="37">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_THAANA"/>
    </member>
    <member name="thai" value="38">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_THAI"/>
    </member>
    <member name="tibetan" value="39">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TIBETAN"/>
    </member>
    <member name="canadian_aboriginal" value="40">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL"/>
    </member>
    <member name="yi" value="41">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_YI"/>
    </member>
    <member name="tagalog" value="42">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAGALOG"/>
    </member>
    <member name="hanunoo" value="43">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_HANUNOO"/>
    </member>
    <member name="buhid" value="44">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BUHID"/>
    </member>
    <member name="tagbanwa" value="45">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAGBANWA"/>
    </member>
    <member name="braille" value="46">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BRAILLE"/>
    </member>
    <member name="cypriot" value="47">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CYPRIOT"/>
    </member>
    <member name="limbu" value="48">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LIMBU"/>
    </member>
    <member name="osmanya" value="49">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OSMANYA"/>
    </member>
    <member name="shavian" value="50">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SHAVIAN"/>
    </member>
    <member name="linear_b" value="51">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LINEAR_B"/>
    </member>
    <member name="tai_le" value="52">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAI_LE"/>
    </member>
    <member name="ugaritic" value="53">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_UGARITIC"/>
    </member>
    <member name="new_tai_lue" value="54">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_NEW_TAI_LUE"/>
    </member>
    <member name="buginese" value="55">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BUGINESE"/>
    </member>
    <member name="glagolitic" value="56">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_GLAGOLITIC"/>
    </member>
    <member name="tifinagh" value="57">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TIFINAGH"/>
    </member>
    <member name="syloti_nagri" value="58">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SYLOTI_NAGRI"/>
    </member>
    <member name="old_persian" value="59">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OLD_PERSIAN"/>
    </member>
    <member name="kharoshthi" value="60">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_KHAROSHTHI"/>
    </member>
    <member name="unknown" value="61">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_UNKNOWN"/>
    </member>
    <member name="balinese" value="62">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BALINESE"/>
    </member>
    <member name="cuneiform" value="63">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CUNEIFORM"/>
    </member>
    <member name="phoenician" value="64">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_PHOENICIAN"/>
    </member>
    <member name="phags_pa" value="65">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_PHAGS_PA"/>
    </member>
    <member name="nko" value="66">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_NKO"/>
    </member>
    <member name="kayah_li" value="67">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_KAYAH_LI"/>
    </member>
    <member name="lepcha" value="68">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LEPCHA"/>
    </member>
    <member name="rejang" value="69">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_REJANG"/>
    </member>
    <member name="sundanese" value="70">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SUNDANESE"/>
    </member>
    <member name="saurashtra" value="71">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SAURASHTRA"/>
    </member>
    <member name="cham" value="72">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CHAM"/>
    </member>
    <member name="ol_chiki" value="73">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OL_CHIKI"/>
    </member>
    <member name="vai" value="74">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_VAI"/>
    </member>
    <member name="carian" value="75">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CARIAN"/>
    </member>
    <member name="lycian" value="76">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LYCIAN"/>
    </member>
    <member name="lydian" value="77">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LYDIAN"/>
    </member>
    <member name="avestan" value="78">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_AVESTAN"/>
    </member>
    <member name="bamum" value="79">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BAMUM"/>
    </member>
    <member name="egyptian_hieroglyphs" value="80">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS"/>
    </member>
    <member name="imperial_aramaic" value="81">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC"/>
    </member>
    <member name="inscriptional_pahlavi" value="82">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI"/>
    </member>
    <member name="inscriptional_parthian" value="83">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN"/>
    </member>
    <member name="javanese" value="84">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_JAVANESE"/>
    </member>
    <member name="kaithi" value="85">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_KAITHI"/>
    </member>
    <member name="lisu" value="86">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_LISU"/>
    </member>
    <member name="meetei_mayek" value="87">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MEETEI_MAYEK"/>
    </member>
    <member name="old_south_arabian" value="88">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN"/>
    </member>
    <member name="old_turkic" value="89">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_OLD_TURKIC"/>
    </member>
    <member name="samaritan" value="90">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SAMARITAN"/>
    </member>
    <member name="tai_tham" value="91">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAI_THAM"/>
    </member>
    <member name="tai_viet" value="92">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAI_VIET"/>
    </member>
    <member name="batak" value="93">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BATAK"/>
    </member>
    <member name="brahmi" value="94">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_BRAHMI"/>
    </member>
    <member name="mandaic" value="95">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MANDAIC"/>
    </member>
    <member name="chakma" value="96">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_CHAKMA"/>
    </member>
    <member name="meroitic_cursive" value="97">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MEROITIC_CURSIVE"/>
    </member>
    <member name="meroitic_hieroglyphs" value="98">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MEROITIC_HIEROGLYPHS"/>
    </member>
    <member name="miao" value="99">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_MIAO"/>
    </member>
    <member name="sharada" value="100">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SHARADA"/>
    </member>
    <member name="sora_sompeng" value="101">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_SORA_SOMPENG"/>
    </member>
    <member name="takri" value="102">
      <attribute name="c:identifier" value="G_UNICODE_SCRIPT_TAKRI"/>
    </member>
  </enumeration>
  <enumeration name="UnicodeType">
    <member name="control" value="0">
      <attribute name="c:identifier" value="G_UNICODE_CONTROL"/>
    </member>
    <member name="format" value="1">
      <attribute name="c:identifier" value="G_UNICODE_FORMAT"/>
    </member>
    <member name="unassigned" value="2">
      <attribute name="c:identifier" value="G_UNICODE_UNASSIGNED"/>
    </member>
    <member name="private_use" value="3">
      <attribute name="c:identifier" value="G_UNICODE_PRIVATE_USE"/>
    </member>
    <member name="surrogate" value="4">
      <attribute name="c:identifier" value="G_UNICODE_SURROGATE"/>
    </member>
    <member name="lowercase_letter" value="5">
      <attribute name="c:identifier" value="G_UNICODE_LOWERCASE_LETTER"/>
    </member>
    <member name="modifier_letter" value="6">
      <attribute name="c:identifier" value="G_UNICODE_MODIFIER_LETTER"/>
    </member>
    <member name="other_letter" value="7">
      <attribute name="c:identifier" value="G_UNICODE_OTHER_LETTER"/>
    </member>
    <member name="titlecase_letter" value="8">
      <attribute name="c:identifier" value="G_UNICODE_TITLECASE_LETTER"/>
    </member>
    <member name="uppercase_letter" value="9">
      <attribute name="c:identifier" value="G_UNICODE_UPPERCASE_LETTER"/>
    </member>
    <member name="spacing_mark" value="10">
      <attribute name="c:identifier" value="G_UNICODE_SPACING_MARK"/>
    </member>
    <member name="enclosing_mark" value="11">
      <attribute name="c:identifier" value="G_UNICODE_ENCLOSING_MARK"/>
    </member>
    <member name="non_spacing_mark" value="12">
      <attribute name="c:identifier" value="G_UNICODE_NON_SPACING_MARK"/>
    </member>
    <member name="decimal_number" value="13">
      <attribute name="c:identifier" value="G_UNICODE_DECIMAL_NUMBER"/>
    </member>
    <member name="letter_number" value="14">
      <attribute name="c:identifier" value="G_UNICODE_LETTER_NUMBER"/>
    </member>
    <member name="other_number" value="15">
      <attribute name="c:identifier" value="G_UNICODE_OTHER_NUMBER"/>
    </member>
    <member name="connect_punctuation" value="16">
      <attribute name="c:identifier" value="G_UNICODE_CONNECT_PUNCTUATION"/>
    </member>
    <member name="dash_punctuation" value="17">
      <attribute name="c:identifier" value="G_UNICODE_DASH_PUNCTUATION"/>
    </member>
    <member name="close_punctuation" value="18">
      <attribute name="c:identifier" value="G_UNICODE_CLOSE_PUNCTUATION"/>
    </member>
    <member name="final_punctuation" value="19">
      <attribute name="c:identifier" value="G_UNICODE_FINAL_PUNCTUATION"/>
    </member>
    <member name="initial_punctuation" value="20">
      <attribute name="c:identifier" value="G_UNICODE_INITIAL_PUNCTUATION"/>
    </member>
    <member name="other_punctuation" value="21">
      <attribute name="c:identifier" value="G_UNICODE_OTHER_PUNCTUATION"/>
    </member>
    <member name="open_punctuation" value="22">
      <attribute name="c:identifier" value="G_UNICODE_OPEN_PUNCTUATION"/>
    </member>
    <member name="currency_symbol" value="23">
      <attribute name="c:identifier" value="G_UNICODE_CURRENCY_SYMBOL"/>
    </member>
    <member name="modifier_symbol" value="24">
      <attribute name="c:identifier" value="G_UNICODE_MODIFIER_SYMBOL"/>
    </member>
    <member name="math_symbol" value="25">
      <attribute name="c:identifier" value="G_UNICODE_MATH_SYMBOL"/>
    </member>
    <member name="other_symbol" value="26">
      <attribute name="c:identifier" value="G_UNICODE_OTHER_SYMBOL"/>
    </member>
    <member name="line_separator" value="27">
      <attribute name="c:identifier" value="G_UNICODE_LINE_SEPARATOR"/>
    </member>
    <member name="paragraph_separator" value="28">
      <attribute name="c:identifier" value="G_UNICODE_PARAGRAPH_SEPARATOR"/>
    </member>
    <member name="space_separator" value="29">
      <attribute name="c:identifier" value="G_UNICODE_SPACE_SEPARATOR"/>
    </member>
  </enumeration>
  <enumeration name="UserDirectory">
    <member name="directory_desktop" value="0">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_DESKTOP"/>
    </member>
    <member name="directory_documents" value="1">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_DOCUMENTS"/>
    </member>
    <member name="directory_download" value="2">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_DOWNLOAD"/>
    </member>
    <member name="directory_music" value="3">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_MUSIC"/>
    </member>
    <member name="directory_pictures" value="4">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_PICTURES"/>
    </member>
    <member name="directory_public_share" value="5">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_PUBLIC_SHARE"/>
    </member>
    <member name="directory_templates" value="6">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_TEMPLATES"/>
    </member>
    <member name="directory_videos" value="7">
      <attribute name="c:identifier" value="G_USER_DIRECTORY_VIDEOS"/>
    </member>
    <member name="n_directories" value="8">
      <attribute name="c:identifier" value="G_USER_N_DIRECTORIES"/>
    </member>
  </enumeration>
  <constant name="VA_COPY_AS_ARRAY" value="1">
    <type name="gint32"/>
  </constant>
struct Variant
{
 glib:type-name="GVariant" glib:get-type="intern"  <constructor name="new_array" c:identifier="g_variant_new_array">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="child_type" transfer-ownership="none" allow-none="1">
        <type name="VariantType"/>
      </parameter>
      <parameter name="children" transfer-ownership="none" allow-none="1">
        <array length="2">
          <type name="Variant"/>
        </array>
      </parameter>
      <parameter name="n_children" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_boolean" c:identifier="g_variant_new_boolean">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_byte" c:identifier="g_variant_new_byte">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_bytestring" c:identifier="g_variant_new_bytestring">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="guint8"/>
        </array>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_bytestring_array" c:identifier="g_variant_new_bytestring_array">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="strv" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_dict_entry" c:identifier="g_variant_new_dict_entry">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="Variant"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="Variant"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_double" c:identifier="g_variant_new_double">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_fixed_array" c:identifier="g_variant_new_fixed_array">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="element_type" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
      <parameter name="elements" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="n_elements" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="element_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_from_data" c:identifier="g_variant_new_from_data">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <array length="2">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="trusted" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_handle" c:identifier="g_variant_new_handle">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_int16" c:identifier="g_variant_new_int16">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="gint16"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_int32" c:identifier="g_variant_new_int32">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_int64" c:identifier="g_variant_new_int64">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_maybe" c:identifier="g_variant_new_maybe">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="child_type" transfer-ownership="none" allow-none="1">
        <type name="VariantType"/>
      </parameter>
      <parameter name="child" transfer-ownership="none" allow-none="1">
        <type name="Variant"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_object_path" c:identifier="g_variant_new_object_path">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="object_path" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_objv" c:identifier="g_variant_new_objv">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="strv" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_signature" c:identifier="g_variant_new_signature">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="signature" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_string" c:identifier="g_variant_new_string">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_strv" c:identifier="g_variant_new_strv">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="strv" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_tuple" c:identifier="g_variant_new_tuple">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="children" transfer-ownership="none">
        <array length="1">
          <type name="Variant"/>
        </array>
      </parameter>
      <parameter name="n_children" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_uint16" c:identifier="g_variant_new_uint16">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_uint32" c:identifier="g_variant_new_uint32">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_uint64" c:identifier="g_variant_new_uint64">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_variant" c:identifier="g_variant_new_variant">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="Variant"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="byteswap" c:identifier="g_variant_byteswap">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="classify" c:identifier="g_variant_classify">
    <return-value transfer-ownership="none">
      <type name="VariantClass"/>
    </return-value>
  </method>
  <method name="compare" c:identifier="g_variant_compare">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="two" transfer-ownership="none">
        <type name="Variant"/>
      </parameter>
    </parameters>
  </method>
  <method name="dup_bytestring" c:identifier="g_variant_dup_bytestring">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="dup_bytestring_array" c:identifier="g_variant_dup_bytestring_array">
    <return-value transfer-ownership="full">
      <array length="0">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="dup_objv" c:identifier="g_variant_dup_objv">
    <return-value transfer-ownership="full">
      <array length="0" zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="dup_string" c:identifier="g_variant_dup_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="dup_strv" c:identifier="g_variant_dup_strv">
    <return-value transfer-ownership="full">
      <array length="0" zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="equal" c:identifier="g_variant_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="two" transfer-ownership="none">
        <type name="Variant"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_boolean" c:identifier="g_variant_get_boolean">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="get_byte" c:identifier="g_variant_get_byte">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
  </method>
  <method name="get_bytestring" c:identifier="g_variant_get_bytestring">
    <return-value transfer-ownership="none">
      <array zero-terminated="1">
        <type name="guint8"/>
      </array>
    </return-value>
  </method>
  <method name="get_bytestring_array" c:identifier="g_variant_get_bytestring_array">
    <return-value transfer-ownership="container">
      <array length="0">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_child_value" c:identifier="g_variant_get_child_value">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="index_" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_data" c:identifier="g_variant_get_data">
    <return-value transfer-ownership="none">
      <type name="any"/>
    </return-value>
  </method>
  <method name="get_double" c:identifier="g_variant_get_double">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </method>
  <method name="get_fixed_array" c:identifier="g_variant_get_fixed_array">
    <return-value transfer-ownership="none">
      <array length="0">
        <type name="any"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="n_elements" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
      <parameter name="element_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_handle" c:identifier="g_variant_get_handle">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_int16" c:identifier="g_variant_get_int16">
    <return-value transfer-ownership="none">
      <type name="gint16"/>
    </return-value>
  </method>
  <method name="get_int32" c:identifier="g_variant_get_int32">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </method>
  <method name="get_int64" c:identifier="g_variant_get_int64">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </method>
  <method name="get_maybe" c:identifier="g_variant_get_maybe">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="get_normal_form" c:identifier="g_variant_get_normal_form">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="get_objv" c:identifier="g_variant_get_objv">
    <return-value transfer-ownership="container">
      <array length="0" zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_size" c:identifier="g_variant_get_size">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="get_string" c:identifier="g_variant_get_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_strv" c:identifier="g_variant_get_strv">
    <return-value transfer-ownership="container">
      <array length="0" zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </method>
  <method name="get_type" c:identifier="g_variant_get_type">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="get_type_string" c:identifier="g_variant_get_type_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="get_uint16" c:identifier="g_variant_get_uint16">
    <return-value transfer-ownership="none">
      <type name="guint16"/>
    </return-value>
  </method>
  <method name="get_uint32" c:identifier="g_variant_get_uint32">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="get_uint64" c:identifier="g_variant_get_uint64">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="get_variant" c:identifier="g_variant_get_variant">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="hash" c:identifier="g_variant_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="is_container" c:identifier="g_variant_is_container">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_floating" c:identifier="g_variant_is_floating">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_normal_form" c:identifier="g_variant_is_normal_form">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_of_type" c:identifier="g_variant_is_of_type">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </method>
  <method name="lookup_value" c:identifier="g_variant_lookup_value">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="key" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="expected_type" transfer-ownership="none" allow-none="1">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </method>
  <method name="n_children" c:identifier="g_variant_n_children">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="print" c:identifier="g_variant_print">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="type_annotate" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref" c:identifier="g_variant_ref">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="ref_sink" c:identifier="g_variant_ref_sink">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="store" c:identifier="g_variant_store">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </method>
  <method name="take_ref" c:identifier="g_variant_take_ref">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_variant_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <function name="is_object_path" c:identifier="g_variant_is_object_path">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="is_signature" c:identifier="g_variant_is_signature">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="parse" c:identifier="g_variant_parse" throws="1">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none" allow-none="1">
        <type name="VariantType"/>
      </parameter>
      <parameter name="text" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="limit" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="parser_get_error_quark" c:identifier="g_variant_parser_get_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
};
struct VariantBuilder
{
 glib:type-name="GVariantBuilder" glib:get-type="g_variant_builder_get_type"  <field name="x">
    <array fixed-size="16">
      <type name="guint64"/>
    </array>
  </field>
  <constructor name="new" c:identifier="g_variant_builder_new">
    <return-value transfer-ownership="full">
      <type name="VariantBuilder"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="add_value" c:identifier="g_variant_builder_add_value">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="Variant"/>
      </parameter>
    </parameters>
  </method>
  <method name="close" c:identifier="g_variant_builder_close">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="end" c:identifier="g_variant_builder_end">
    <return-value transfer-ownership="none">
      <type name="Variant"/>
    </return-value>
  </method>
  <method name="open" c:identifier="g_variant_builder_open">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </method>
  <method name="ref" c:identifier="g_variant_builder_ref">
    <return-value transfer-ownership="full">
      <type name="VariantBuilder"/>
    </return-value>
  </method>
  <method name="unref" c:identifier="g_variant_builder_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
};
  <enumeration name="VariantClass">
    <member name="boolean" value="98">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_BOOLEAN"/>
    </member>
    <member name="byte" value="121">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_BYTE"/>
    </member>
    <member name="int16" value="110">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_INT16"/>
    </member>
    <member name="uint16" value="113">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_UINT16"/>
    </member>
    <member name="int32" value="105">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_INT32"/>
    </member>
    <member name="uint32" value="117">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_UINT32"/>
    </member>
    <member name="int64" value="120">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_INT64"/>
    </member>
    <member name="uint64" value="116">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_UINT64"/>
    </member>
    <member name="handle" value="104">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_HANDLE"/>
    </member>
    <member name="double" value="100">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_DOUBLE"/>
    </member>
    <member name="string" value="115">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_STRING"/>
    </member>
    <member name="object_path" value="111">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_OBJECT_PATH"/>
    </member>
    <member name="signature" value="103">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_SIGNATURE"/>
    </member>
    <member name="variant" value="118">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_VARIANT"/>
    </member>
    <member name="maybe" value="109">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_MAYBE"/>
    </member>
    <member name="array" value="97">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_ARRAY"/>
    </member>
    <member name="tuple" value="40">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_TUPLE"/>
    </member>
    <member name="dict_entry" value="123">
      <attribute name="c:identifier" value="G_VARIANT_CLASS_DICT_ENTRY"/>
    </member>
  </enumeration>
  <enumeration name="VariantParseError">
    <member name="failed" value="0">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_FAILED"/>
    </member>
    <member name="basic_type_expected" value="1">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED"/>
    </member>
    <member name="cannot_infer_type" value="2">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE"/>
    </member>
    <member name="definite_type_expected" value="3">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED"/>
    </member>
    <member name="input_not_at_end" value="4">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END"/>
    </member>
    <member name="invalid_character" value="5">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_INVALID_CHARACTER"/>
    </member>
    <member name="invalid_format_string" value="6">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING"/>
    </member>
    <member name="invalid_object_path" value="7">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH"/>
    </member>
    <member name="invalid_signature" value="8">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE"/>
    </member>
    <member name="invalid_type_string" value="9">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING"/>
    </member>
    <member name="no_common_type" value="10">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE"/>
    </member>
    <member name="number_out_of_range" value="11">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE"/>
    </member>
    <member name="number_too_big" value="12">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG"/>
    </member>
    <member name="type_error" value="13">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_TYPE_ERROR"/>
    </member>
    <member name="unexpected_token" value="14">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN"/>
    </member>
    <member name="unknown_keyword" value="15">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD"/>
    </member>
    <member name="unterminated_string_constant" value="16">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT"/>
    </member>
    <member name="value_expected" value="17">
      <attribute name="c:identifier" value="G_VARIANT_PARSE_ERROR_VALUE_EXPECTED"/>
    </member>
  </enumeration>
struct VariantType
{
 glib:type-name="GVariantType" glib:get-type="g_variant_type_get_gtype"  <constructor name="new" c:identifier="g_variant_type_new">
    <return-value transfer-ownership="full">
      <type name="VariantType"/>
    </return-value>
    <parameters>
      <parameter name="type_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </constructor>
  <constructor name="new_tuple" c:identifier="g_variant_type_new_tuple">
    <return-value transfer-ownership="full">
      <type name="VariantType"/>
    </return-value>
    <parameters>
      <parameter name="items" transfer-ownership="none">
        <array length="1">
          <type name="VariantType"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </constructor>
  <method name="copy" c:identifier="g_variant_type_copy">
    <return-value transfer-ownership="full">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="dup_string" c:identifier="g_variant_type_dup_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </method>
  <method name="element" c:identifier="g_variant_type_element">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="equal" c:identifier="g_variant_type_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type2" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </method>
  <method name="first" c:identifier="g_variant_type_first">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="free" c:identifier="g_variant_type_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </method>
  <method name="get_string_length" c:identifier="g_variant_type_get_string_length">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="hash" c:identifier="g_variant_type_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </method>
  <method name="is_array" c:identifier="g_variant_type_is_array">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_basic" c:identifier="g_variant_type_is_basic">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_container" c:identifier="g_variant_type_is_container">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_definite" c:identifier="g_variant_type_is_definite">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_dict_entry" c:identifier="g_variant_type_is_dict_entry">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_maybe" c:identifier="g_variant_type_is_maybe">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_subtype_of" c:identifier="g_variant_type_is_subtype_of">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="supertype" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </method>
  <method name="is_tuple" c:identifier="g_variant_type_is_tuple">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="is_variant" c:identifier="g_variant_type_is_variant">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </method>
  <method name="key" c:identifier="g_variant_type_key">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="n_items" c:identifier="g_variant_type_n_items">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
  </method>
  <method name="new_array" c:identifier="g_variant_type_new_array">
    <return-value transfer-ownership="full">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="new_dict_entry" c:identifier="g_variant_type_new_dict_entry">
    <return-value transfer-ownership="full">
      <type name="VariantType"/>
    </return-value>
    <parameters>
      <parameter name="value" transfer-ownership="none">
        <type name="VariantType"/>
      </parameter>
    </parameters>
  </method>
  <method name="new_maybe" c:identifier="g_variant_type_new_maybe">
    <return-value transfer-ownership="full">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="next" c:identifier="g_variant_type_next">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
  </method>
  <method name="value" c:identifier="g_variant_type_value">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
  </method>
  <function name="checked_" c:identifier="g_variant_type_checked_">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
    <parameters>
      <parameter name="unknown" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="string_is_valid" c:identifier="g_variant_type_string_is_valid">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="string_scan" c:identifier="g_variant_type_string_scan">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="limit" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
};
  <callback name="VoidFunc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </callback>
  <constant name="WIN32_MSG_HANDLE" value="19981206">
    <type name="gint32"/>
  </constant>
  <function name="access" c:identifier="g_access">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="mode" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="array_free" c:identifier="g_array_free">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="free_segment" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="array_get_element_size" c:identifier="g_array_get_element_size">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="array_set_clear_func" c:identifier="g_array_set_clear_func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="clear_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="array_unref" c:identifier="g_array_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.Array">
          <type name="any"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_digit_value" c:identifier="g_ascii_digit_value">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_dtostr" c:identifier="g_ascii_dtostr">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="buffer" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="buf_len" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="d" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_formatd" c:identifier="g_ascii_formatd">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="buffer" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="buf_len" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="format" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="d" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strcasecmp" c:identifier="g_ascii_strcasecmp">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="s1" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="s2" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strdown" c:identifier="g_ascii_strdown">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strncasecmp" c:identifier="g_ascii_strncasecmp">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="s1" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="s2" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strtod" c:identifier="g_ascii_strtod">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="nptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strtoll" c:identifier="g_ascii_strtoll">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="nptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="base" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strtoull" c:identifier="g_ascii_strtoull">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="nptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="base" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_strup" c:identifier="g_ascii_strup">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_tolower" c:identifier="g_ascii_tolower">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_toupper" c:identifier="g_ascii_toupper">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="ascii_xdigit_value" c:identifier="g_ascii_xdigit_value">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="assert_warning" c:identifier="g_assert_warning">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="pretty_function" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="expression" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="assertion_message" c:identifier="g_assertion_message">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="assertion_message_cmpstr" c:identifier="g_assertion_message_cmpstr">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="expr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="arg1" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="cmp" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="arg2" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="assertion_message_error" c:identifier="g_assertion_message_error">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="expr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="error" transfer-ownership="none">
        <type name="GLib.Error"/>
      </parameter>
      <parameter name="error_domain" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="error_code" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="assertion_message_expr" c:identifier="g_assertion_message_expr">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="expr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="atexit" c:identifier="g_atexit">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="func" transfer-ownership="none" scope="async">
        <type name="VoidFunc"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_add" c:identifier="g_atomic_int_add">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_and" c:identifier="g_atomic_int_and">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_compare_and_exchange" c:identifier="g_atomic_int_compare_and_exchange">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="oldval" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="newval" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_dec_and_test" c:identifier="g_atomic_int_dec_and_test">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_exchange_and_add" c:identifier="g_atomic_int_exchange_and_add" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_get" c:identifier="g_atomic_int_get">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_inc" c:identifier="g_atomic_int_inc">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_or" c:identifier="g_atomic_int_or">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_set" c:identifier="g_atomic_int_set">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="newval" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_int_xor" c:identifier="g_atomic_int_xor">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_pointer_add" c:identifier="g_atomic_pointer_add">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_pointer_and" c:identifier="g_atomic_pointer_and">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_pointer_compare_and_exchange" c:identifier="g_atomic_pointer_compare_and_exchange">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="oldval" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="newval" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_pointer_or" c:identifier="g_atomic_pointer_or">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_pointer_set" c:identifier="g_atomic_pointer_set">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="newval" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="atomic_pointer_xor" c:identifier="g_atomic_pointer_xor">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="atomic" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="val" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="base64_decode" c:identifier="g_base64_decode">
    <return-value transfer-ownership="full">
      <array length="1">
        <type name="guint8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="text" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="out_len" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="base64_decode_inplace" c:identifier="g_base64_decode_inplace">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="text" transfer-ownership="full" direction="inout">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="out_len" transfer-ownership="none" direction="inout">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="base64_decode_step" c:identifier="g_base64_decode_step">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="in" transfer-ownership="none">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="out" transfer-ownership="full" direction="out" caller-allocates="0">
        <array>
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="state" transfer-ownership="full" direction="inout">
        <type name="gint32"/>
      </parameter>
      <parameter name="save" transfer-ownership="full" direction="inout">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="base64_encode" c:identifier="g_base64_encode">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="base64_encode_close" c:identifier="g_base64_encode_close">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="break_lines" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
      <parameter name="out" transfer-ownership="full" direction="out" caller-allocates="0">
        <array>
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="state" transfer-ownership="full" direction="inout">
        <type name="gint32"/>
      </parameter>
      <parameter name="save" transfer-ownership="full" direction="inout">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="base64_encode_step" c:identifier="g_base64_encode_step">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="in" transfer-ownership="none">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="break_lines" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
      <parameter name="out" transfer-ownership="full" direction="out" caller-allocates="0">
        <array>
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="state" transfer-ownership="full" direction="inout">
        <type name="gint32"/>
      </parameter>
      <parameter name="save" transfer-ownership="full" direction="inout">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="basename" c:identifier="g_basename">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="file_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="bit_lock" c:identifier="g_bit_lock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="address" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="lock_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="bit_nth_lsf" c:identifier="g_bit_nth_lsf">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="mask" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="nth_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="bit_nth_msf" c:identifier="g_bit_nth_msf">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="mask" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="nth_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="bit_storage" c:identifier="g_bit_storage">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="number" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="bit_trylock" c:identifier="g_bit_trylock">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="address" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="lock_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="bit_unlock" c:identifier="g_bit_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="address" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="lock_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="bookmark_file_error_quark" c:identifier="g_bookmark_file_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="build_filenamev" c:identifier="g_build_filenamev">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="args" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="build_pathv" c:identifier="g_build_pathv">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="separator" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="args" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="byte_array_free" c:identifier="g_byte_array_free">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.ByteArray">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="free_segment" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="byte_array_free_to_bytes" c:identifier="g_byte_array_free_to_bytes">
    <return-value transfer-ownership="full">
      <type name="Bytes"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="full">
        <array name="GLib.ByteArray">
          <type name="guint8"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="byte_array_new_take" c:identifier="g_byte_array_new_take">
    <return-value transfer-ownership="full">
      <array name="GLib.ByteArray">
        <type name="guint8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <array length="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="byte_array_unref" c:identifier="g_byte_array_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.ByteArray">
          <type name="guint8"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="chdir" c:identifier="g_chdir">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="path" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="check_version" c:identifier="glib_check_version">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="required_major" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="required_minor" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="required_micro" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="checksum_type_get_length" c:identifier="g_checksum_type_get_length">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="checksum_type" transfer-ownership="none">
        <type name="ChecksumType"/>
      </parameter>
    </parameters>
  </function>
  <function name="child_watch_add" c:identifier="g_child_watch_add_full">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="pid" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="function" transfer-ownership="none" scope="notified" closure="3" destroy="4">
        <type name="ChildWatchFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="child_watch_source_new" c:identifier="g_child_watch_source_new">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="pid" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="clear_error" c:identifier="g_clear_error" throws="1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="compute_checksum_for_data" c:identifier="g_compute_checksum_for_data">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="checksum_type" transfer-ownership="none">
        <type name="ChecksumType"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="compute_checksum_for_string" c:identifier="g_compute_checksum_for_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="checksum_type" transfer-ownership="none">
        <type name="ChecksumType"/>
      </parameter>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="compute_hmac_for_data" c:identifier="g_compute_hmac_for_data">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="digest_type" transfer-ownership="none">
        <type name="ChecksumType"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <array length="2">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="key_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="compute_hmac_for_string" c:identifier="g_compute_hmac_for_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="digest_type" transfer-ownership="none">
        <type name="ChecksumType"/>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <array length="2">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="key_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="convert" c:identifier="g_convert" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="to_codeset" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="from_codeset" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="convert_error_quark" c:identifier="g_convert_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="convert_with_fallback" c:identifier="g_convert_with_fallback" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="to_codeset" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="from_codeset" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="fallback" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="convert_with_iconv" c:identifier="g_convert_with_iconv" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="converter" transfer-ownership="none">
        <type name="IConv"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="datalist_clear" c:identifier="g_datalist_clear">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="datalist" transfer-ownership="none">
        <type name="Data"/>
      </parameter>
    </parameters>
  </function>
  <function name="datalist_get_flags" c:identifier="g_datalist_get_flags">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="datalist" transfer-ownership="none">
        <type name="Data"/>
      </parameter>
    </parameters>
  </function>
  <function name="datalist_id_set_data_full" c:identifier="g_datalist_id_set_data_full">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="datalist" transfer-ownership="none">
        <type name="Data"/>
      </parameter>
      <parameter name="key_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="data" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="destroy_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="datalist_init" c:identifier="g_datalist_init">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="datalist" transfer-ownership="none">
        <type name="Data"/>
      </parameter>
    </parameters>
  </function>
  <function name="datalist_set_flags" c:identifier="g_datalist_set_flags">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="datalist" transfer-ownership="none">
        <type name="Data"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="datalist_unset_flags" c:identifier="g_datalist_unset_flags">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="datalist" transfer-ownership="none">
        <type name="Data"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="dataset_destroy" c:identifier="g_dataset_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dataset_location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="dataset_id_set_data_full" c:identifier="g_dataset_id_set_data_full">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dataset_location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="key_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="destroy_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_get_days_in_month" c:identifier="g_date_get_days_in_month">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_get_monday_weeks_in_year" c:identifier="g_date_get_monday_weeks_in_year">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_get_sunday_weeks_in_year" c:identifier="g_date_get_sunday_weeks_in_year">
    <return-value transfer-ownership="none">
      <type name="guint8"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_is_leap_year" c:identifier="g_date_is_leap_year">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_strftime" c:identifier="g_date_strftime">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="s" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="slen" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="format" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="date" transfer-ownership="none">
        <type name="Date"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_time_compare" c:identifier="g_date_time_compare">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="dt1" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="dt2" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_time_equal" c:identifier="g_date_time_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="dt1" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="dt2" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_time_hash" c:identifier="g_date_time_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="datetime" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_valid_day" c:identifier="g_date_valid_day">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_valid_dmy" c:identifier="g_date_valid_dmy">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="day" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_valid_julian" c:identifier="g_date_valid_julian">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="julian_date" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_valid_month" c:identifier="g_date_valid_month">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="month" transfer-ownership="none">
        <type name="DateMonth"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_valid_weekday" c:identifier="g_date_valid_weekday">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="weekday" transfer-ownership="none">
        <type name="DateWeekday"/>
      </parameter>
    </parameters>
  </function>
  <function name="date_valid_year" c:identifier="g_date_valid_year">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="year" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
    </parameters>
  </function>
  <function name="dcgettext" c:identifier="g_dcgettext">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgid" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="category" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="dgettext" c:identifier="g_dgettext">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgid" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="dir_make_tmp" c:identifier="g_dir_make_tmp" throws="1">
    <return-value transfer-ownership="full">
      <type name="filename"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none" allow-none="1">
        <type name="filename"/>
      </parameter>
    </parameters>
  </function>
  <function name="direct_equal" c:identifier="g_direct_equal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="v1" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="v2" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="direct_hash" c:identifier="g_direct_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="v" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="dngettext" c:identifier="g_dngettext">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgid" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgid_plural" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="double_equal" c:identifier="g_double_equal">
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
  <function name="double_hash" c:identifier="g_double_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="v" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="dpgettext" c:identifier="g_dpgettext">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgctxtid" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgidoffset" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="dpgettext2" c:identifier="g_dpgettext2">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="context" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgid" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="environ_getenv" c:identifier="g_environ_getenv">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="envp" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="variable" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="environ_setenv" c:identifier="g_environ_setenv">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="envp" transfer-ownership="full">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="variable" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="overwrite" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="environ_unsetenv" c:identifier="g_environ_unsetenv">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="envp" transfer-ownership="full">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="variable" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="file_error_from_errno" c:identifier="g_file_error_from_errno">
    <return-value transfer-ownership="none">
      <type name="FileError"/>
    </return-value>
    <parameters>
      <parameter name="err_no" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="file_error_quark" c:identifier="g_file_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="file_get_contents" c:identifier="g_file_get_contents" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="contents" transfer-ownership="full" direction="out" caller-allocates="0">
        <array length="2">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="file_open_tmp" c:identifier="g_file_open_tmp" throws="1">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none" allow-none="1">
        <type name="filename"/>
      </parameter>
      <parameter name="name_used" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="filename"/>
      </parameter>
    </parameters>
  </function>
  <function name="file_read_link" c:identifier="g_file_read_link" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="file_set_contents" c:identifier="g_file_set_contents" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="contents" transfer-ownership="none">
        <array length="2">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="file_test" c:identifier="g_file_test">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="test" transfer-ownership="none">
        <type name="FileTest"/>
      </parameter>
    </parameters>
  </function>
  <function name="filename_display_basename" c:identifier="g_filename_display_basename">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="filename_display_name" c:identifier="g_filename_display_name">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="filename_from_uri" c:identifier="g_filename_from_uri" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="hostname" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="filename_from_utf8" c:identifier="g_filename_from_utf8" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="utf8string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="filename_to_uri" c:identifier="g_filename_to_uri" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="hostname" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="filename_to_utf8" c:identifier="g_filename_to_utf8" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="opsysstring" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="find_program_in_path" c:identifier="g_find_program_in_path">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="program" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="format_size" c:identifier="g_format_size">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="format_size_for_display" c:identifier="g_format_size_for_display">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="size" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="format_size_full" c:identifier="g_format_size_full">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="FormatSizeFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="free" c:identifier="g_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="mem" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_application_name" c:identifier="g_get_application_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_charset" c:identifier="g_get_charset">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="charset" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_codeset" c:identifier="g_get_codeset">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_current_dir" c:identifier="g_get_current_dir">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_current_time" c:identifier="g_get_current_time">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="result" transfer-ownership="none">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_environ" c:identifier="g_get_environ">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </function>
  <function name="get_filename_charsets" c:identifier="g_get_filename_charsets">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="charsets" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_home_dir" c:identifier="g_get_home_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_host_name" c:identifier="g_get_host_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_language_names" c:identifier="g_get_language_names">
    <return-value transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </function>
  <function name="get_locale_variants" c:identifier="g_get_locale_variants">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
    <parameters>
      <parameter name="locale" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="get_monotonic_time" c:identifier="g_get_monotonic_time">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </function>
  <function name="get_prgname" c:identifier="g_get_prgname">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_real_name" c:identifier="g_get_real_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_real_time" c:identifier="g_get_real_time">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
  </function>
  <function name="get_system_config_dirs" c:identifier="g_get_system_config_dirs">
    <return-value transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </function>
  <function name="get_system_data_dirs" c:identifier="g_get_system_data_dirs">
    <return-value transfer-ownership="none">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </function>
  <function name="get_tmp_dir" c:identifier="g_get_tmp_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_user_cache_dir" c:identifier="g_get_user_cache_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_user_config_dir" c:identifier="g_get_user_config_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_user_data_dir" c:identifier="g_get_user_data_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_user_name" c:identifier="g_get_user_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_user_runtime_dir" c:identifier="g_get_user_runtime_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
  </function>
  <function name="get_user_special_dir" c:identifier="g_get_user_special_dir">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="directory" transfer-ownership="none">
        <type name="UserDirectory"/>
      </parameter>
    </parameters>
  </function>
  <function name="getenv" c:identifier="g_getenv">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="variable" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_add" c:identifier="g_hash_table_add">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_contains" c:identifier="g_hash_table_contains">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_destroy" c:identifier="g_hash_table_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_insert" c:identifier="g_hash_table_insert">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_lookup_extended" c:identifier="g_hash_table_lookup_extended">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="lookup_key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="orig_key" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none" allow-none="1">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_remove" c:identifier="g_hash_table_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_remove_all" c:identifier="g_hash_table_remove_all">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_replace" c:identifier="g_hash_table_replace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_size" c:identifier="g_hash_table_size">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_steal" c:identifier="g_hash_table_steal">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
      <parameter name="key" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_steal_all" c:identifier="g_hash_table_steal_all">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="hash_table_unref" c:identifier="g_hash_table_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hash_table" transfer-ownership="none">
        <type name="GLib.HashTable">
          <type name="any"/>
          <type name="any"/>
        </type>
      </parameter>
    </parameters>
  </function>
  <function name="hook_destroy" c:identifier="g_hook_destroy">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook_id" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="hook_destroy_link" c:identifier="g_hook_destroy_link">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="hook_free" c:identifier="g_hook_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="hook_insert_before" c:identifier="g_hook_insert_before">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="sibling" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="hook_prepend" c:identifier="g_hook_prepend">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="hook_unref" c:identifier="g_hook_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="hook_list" transfer-ownership="none">
        <type name="HookList"/>
      </parameter>
      <parameter name="hook" transfer-ownership="none">
        <type name="Hook"/>
      </parameter>
    </parameters>
  </function>
  <function name="hostname_is_ascii_encoded" c:identifier="g_hostname_is_ascii_encoded">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hostname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="hostname_is_ip_address" c:identifier="g_hostname_is_ip_address">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hostname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="hostname_is_non_ascii" c:identifier="g_hostname_is_non_ascii">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="hostname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="hostname_to_ascii" c:identifier="g_hostname_to_ascii">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="hostname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="hostname_to_unicode" c:identifier="g_hostname_to_unicode">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="hostname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="idle_add" c:identifier="g_idle_add_full">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="function" transfer-ownership="none" scope="notified" closure="2" destroy="3">
        <type name="SourceFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="idle_remove_by_data" c:identifier="g_idle_remove_by_data">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="idle_source_new" c:identifier="g_idle_source_new">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
  </function>
  <function name="int64_equal" c:identifier="g_int64_equal">
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
  <function name="int64_hash" c:identifier="g_int64_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="v" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="int_equal" c:identifier="g_int_equal">
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
  <function name="int_hash" c:identifier="g_int_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="v" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="intern_static_string" c:identifier="g_intern_static_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="intern_string" c:identifier="g_intern_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="io_add_watch" c:identifier="g_io_add_watch_full">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="channel" transfer-ownership="none">
        <type name="IOChannel"/>
      </parameter>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="condition" transfer-ownership="none">
        <type name="IOCondition"/>
      </parameter>
      <parameter name="func" transfer-ownership="none" scope="notified" closure="4" destroy="5">
        <type name="IOFunc"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="io_channel_error_from_errno" c:identifier="g_io_channel_error_from_errno">
    <return-value transfer-ownership="none">
      <type name="IOChannelError"/>
    </return-value>
    <parameters>
      <parameter name="en" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="io_channel_error_quark" c:identifier="g_io_channel_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="io_create_watch" c:identifier="g_io_create_watch">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="channel" transfer-ownership="none">
        <type name="IOChannel"/>
      </parameter>
      <parameter name="condition" transfer-ownership="none">
        <type name="IOCondition"/>
      </parameter>
    </parameters>
  </function>
  <function name="key_file_error_quark" c:identifier="g_key_file_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="listenv" c:identifier="g_listenv">
    <return-value transfer-ownership="full">
      <array zero-terminated="1">
        <type name="utf8"/>
      </array>
    </return-value>
  </function>
  <function name="locale_from_utf8" c:identifier="g_locale_from_utf8" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="utf8string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="locale_to_utf8" c:identifier="g_locale_to_utf8" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="opsysstring" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="bytes_read" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="bytes_written" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="log_default_handler" c:identifier="g_log_default_handler">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="log_level" transfer-ownership="none">
        <type name="LogLevelFlags"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="unused_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="log_remove_handler" c:identifier="g_log_remove_handler">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="handler_id" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="log_set_always_fatal" c:identifier="g_log_set_always_fatal">
    <return-value transfer-ownership="none">
      <type name="LogLevelFlags"/>
    </return-value>
    <parameters>
      <parameter name="fatal_mask" transfer-ownership="none">
        <type name="LogLevelFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="log_set_fatal_mask" c:identifier="g_log_set_fatal_mask">
    <return-value transfer-ownership="none">
      <type name="LogLevelFlags"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="fatal_mask" transfer-ownership="none">
        <type name="LogLevelFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="main_context_default" c:identifier="g_main_context_default">
    <return-value transfer-ownership="none">
      <type name="MainContext"/>
    </return-value>
  </function>
  <function name="main_context_get_thread_default" c:identifier="g_main_context_get_thread_default">
    <return-value transfer-ownership="none">
      <type name="MainContext"/>
    </return-value>
  </function>
  <function name="main_context_ref_thread_default" c:identifier="g_main_context_ref_thread_default">
    <return-value transfer-ownership="full">
      <type name="MainContext"/>
    </return-value>
  </function>
  <function name="main_current_source" c:identifier="g_main_current_source">
    <return-value transfer-ownership="none">
      <type name="Source"/>
    </return-value>
  </function>
  <function name="main_depth" c:identifier="g_main_depth">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </function>
  <function name="markup_error_quark" c:identifier="g_markup_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="markup_escape_text" c:identifier="g_markup_escape_text">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="text" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="mem_is_system_malloc" c:identifier="g_mem_is_system_malloc">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </function>
  <function name="mem_profile" c:identifier="g_mem_profile">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="mem_set_vtable" c:identifier="g_mem_set_vtable">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="vtable" transfer-ownership="none">
        <type name="MemVTable"/>
      </parameter>
    </parameters>
  </function>
  <function name="mkdir_with_parents" c:identifier="g_mkdir_with_parents">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="pathname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="mode" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="mkdtemp" c:identifier="g_mkdtemp">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
    </parameters>
  </function>
  <function name="mkdtemp_full" c:identifier="g_mkdtemp_full">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="mode" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="mkstemp" c:identifier="g_mkstemp">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
    </parameters>
  </function>
  <function name="mkstemp_full" c:identifier="g_mkstemp_full">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="tmpl" transfer-ownership="none">
        <type name="filename"/>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="mode" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="nullify_pointer" c:identifier="g_nullify_pointer">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="nullify_location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="on_error_query" c:identifier="g_on_error_query">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="prg_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="on_error_stack_trace" c:identifier="g_on_error_stack_trace">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="prg_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="once_init_enter" c:identifier="g_once_init_enter">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="once_init_leave" c:identifier="g_once_init_leave">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="location" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="result" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="option_error_quark" c:identifier="g_option_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="parse_debug_string" c:identifier="g_parse_debug_string">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="keys" transfer-ownership="none">
        <array length="2">
          <type name="DebugKey"/>
        </array>
      </parameter>
      <parameter name="nkeys" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="path_get_basename" c:identifier="g_path_get_basename">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="file_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="path_get_dirname" c:identifier="g_path_get_dirname">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="file_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="path_is_absolute" c:identifier="g_path_is_absolute">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="file_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="path_skip_root" c:identifier="g_path_skip_root">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="file_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="pattern_match" c:identifier="g_pattern_match">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="PatternSpec"/>
      </parameter>
      <parameter name="string_length" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="string_reversed" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="pattern_match_simple" c:identifier="g_pattern_match_simple">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pattern" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="pattern_match_string" c:identifier="g_pattern_match_string">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pspec" transfer-ownership="none">
        <type name="PatternSpec"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="pointer_bit_lock" c:identifier="g_pointer_bit_lock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="address" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="lock_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="pointer_bit_trylock" c:identifier="g_pointer_bit_trylock">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="address" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="lock_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="pointer_bit_unlock" c:identifier="g_pointer_bit_unlock">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="address" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="lock_bit" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="poll" c:identifier="g_poll">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="fds" transfer-ownership="none">
        <type name="PollFD"/>
      </parameter>
      <parameter name="nfds" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="timeout" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="propagate_error" c:identifier="g_propagate_error">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="GLib.Error"/>
      </parameter>
      <parameter name="src" transfer-ownership="none">
        <type name="GLib.Error"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_add" c:identifier="g_ptr_array_add">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_remove" c:identifier="g_ptr_array_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_remove_fast" c:identifier="g_ptr_array_remove_fast">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_remove_range" c:identifier="g_ptr_array_remove_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="index_" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_set_free_func" c:identifier="g_ptr_array_set_free_func">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="element_free_func" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_set_size" c:identifier="g_ptr_array_set_size">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="ptr_array_unref" c:identifier="g_ptr_array_unref">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="array" transfer-ownership="none">
        <array name="GLib.PtrArray">
          <type name="any"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="quark_from_static_string" c:identifier="g_quark_from_static_string">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="quark_from_string" c:identifier="g_quark_from_string">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="quark_to_string" c:identifier="g_quark_to_string">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="quark" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="quark_try_string" c:identifier="g_quark_try_string">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="random_double" c:identifier="g_random_double">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </function>
  <function name="random_double_range" c:identifier="g_random_double_range">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </function>
  <function name="random_int" c:identifier="g_random_int">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="random_int_range" c:identifier="g_random_int_range">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="random_set_seed" c:identifier="g_random_set_seed">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="seed" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="regex_check_replacement" c:identifier="g_regex_check_replacement" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="replacement" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="has_references" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="regex_error_quark" c:identifier="g_regex_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="regex_escape_nul" c:identifier="g_regex_escape_nul">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="regex_escape_string" c:identifier="g_regex_escape_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <array length="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="length" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="regex_match_simple" c:identifier="g_regex_match_simple">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="pattern" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="compile_options" transfer-ownership="none">
        <type name="RegexCompileFlags"/>
      </parameter>
      <parameter name="match_options" transfer-ownership="none">
        <type name="RegexMatchFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="reload_user_special_dirs_cache" c:identifier="g_reload_user_special_dirs_cache">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="return_if_fail_warning" c:identifier="g_return_if_fail_warning">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="log_domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="pretty_function" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="expression" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="rmdir" c:identifier="g_rmdir">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="sequence_move" c:identifier="g_sequence_move">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="src" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="dest" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="sequence_move_range" c:identifier="g_sequence_move_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="begin" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="sequence_remove" c:identifier="g_sequence_remove">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="iter" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="sequence_remove_range" c:identifier="g_sequence_remove_range">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="sequence_set" c:identifier="g_sequence_set">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="iter" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="sequence_swap" c:identifier="g_sequence_swap">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="SequenceIter"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_application_name" c:identifier="g_set_application_name">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="application_name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_error_literal" c:identifier="g_set_error_literal">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="err" transfer-ownership="none" allow-none="1">
        <type name="GLib.Error"/>
      </parameter>
      <parameter name="domain" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="code" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="message" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="set_prgname" c:identifier="g_set_prgname">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="prgname" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="setenv" c:identifier="g_setenv">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="variable" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="overwrite" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="shell_error_quark" c:identifier="g_shell_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="shell_parse_argv" c:identifier="g_shell_parse_argv" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="command_line" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="argcp" transfer-ownership="full" direction="out" caller-allocates="0">
        <type name="gint32"/>
      </parameter>
      <parameter name="argvp" transfer-ownership="full" direction="out" caller-allocates="0">
        <array length="1" zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
    </parameters>
  </function>
  <function name="shell_quote" c:identifier="g_shell_quote">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="unquoted_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="shell_unquote" c:identifier="g_shell_unquote" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="quoted_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="slice_free1" c:identifier="g_slice_free1">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="block_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="mem_block" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="slice_free_chain_with_offset" c:identifier="g_slice_free_chain_with_offset">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="block_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="mem_chain" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="next_offset" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="slice_get_config" c:identifier="g_slice_get_config">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="ckey" transfer-ownership="none">
        <type name="SliceConfig"/>
      </parameter>
    </parameters>
  </function>
  <function name="slice_get_config_state" c:identifier="g_slice_get_config_state">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="ckey" transfer-ownership="none">
        <type name="SliceConfig"/>
      </parameter>
      <parameter name="address" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="n_values" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="slice_set_config" c:identifier="g_slice_set_config">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="ckey" transfer-ownership="none">
        <type name="SliceConfig"/>
      </parameter>
      <parameter name="value" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="source_remove" c:identifier="g_source_remove">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="tag" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="source_remove_by_funcs_user_data" c:identifier="g_source_remove_by_funcs_user_data">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="funcs" transfer-ownership="none">
        <type name="SourceFuncs"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="source_remove_by_user_data" c:identifier="g_source_remove_by_user_data">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="source_set_name_by_id" c:identifier="g_source_set_name_by_id">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="tag" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="name" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="spaced_primes_closest" c:identifier="g_spaced_primes_closest">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="num" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="spawn_async" c:identifier="g_spawn_async" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="working_directory" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="argv" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="envp" transfer-ownership="none" allow-none="1">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="SpawnFlags"/>
      </parameter>
      <parameter name="child_setup" transfer-ownership="none" allow-none="1" scope="async" closure="5">
        <type name="SpawnChildSetupFunc"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="child_pid" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="spawn_async_with_pipes" c:identifier="g_spawn_async_with_pipes" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="working_directory" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="argv" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="envp" transfer-ownership="none" allow-none="1">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="SpawnFlags"/>
      </parameter>
      <parameter name="child_setup" transfer-ownership="none" allow-none="1" scope="async" closure="5">
        <type name="SpawnChildSetupFunc"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="child_pid" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="standard_input" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="standard_output" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
      <parameter name="standard_error" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="spawn_close_pid" c:identifier="g_spawn_close_pid">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="pid" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="spawn_command_line_async" c:identifier="g_spawn_command_line_async" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="command_line" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="spawn_command_line_sync" c:identifier="g_spawn_command_line_sync" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="command_line" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="standard_output" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <array zero-terminated="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="standard_error" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <array zero-terminated="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="exit_status" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="spawn_error_quark" c:identifier="g_spawn_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="spawn_sync" c:identifier="g_spawn_sync" throws="1">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="working_directory" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="argv" transfer-ownership="none">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="envp" transfer-ownership="none" allow-none="1">
        <array zero-terminated="1">
          <type name="utf8"/>
        </array>
      </parameter>
      <parameter name="flags" transfer-ownership="none">
        <type name="SpawnFlags"/>
      </parameter>
      <parameter name="child_setup" transfer-ownership="none" allow-none="1" scope="async" closure="5">
        <type name="SpawnChildSetupFunc"/>
      </parameter>
      <parameter name="user_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="standard_output" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <array zero-terminated="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="standard_error" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <array zero-terminated="1">
          <type name="guint8"/>
        </array>
      </parameter>
      <parameter name="exit_status" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="stpcpy" c:identifier="g_stpcpy">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="src" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="str_equal" c:identifier="g_str_equal">
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
  <function name="str_has_prefix" c:identifier="g_str_has_prefix">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="prefix" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="str_has_suffix" c:identifier="g_str_has_suffix">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="suffix" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="str_hash" c:identifier="g_str_hash">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="v" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="strcanon" c:identifier="g_strcanon">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="valid_chars" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="substitutor" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strcasecmp" c:identifier="g_strcasecmp">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="s1" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="s2" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strchomp" c:identifier="g_strchomp">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strchug" c:identifier="g_strchug">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strcmp0" c:identifier="g_strcmp0">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="str1" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="str2" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strcompress" c:identifier="g_strcompress">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="source" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strdelimit" c:identifier="g_strdelimit">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="delimiters" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="new_delimiter" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strdown" c:identifier="g_strdown">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strdup" c:identifier="g_strdup">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strerror" c:identifier="g_strerror">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="errnum" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="strescape" c:identifier="g_strescape">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="source" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="exceptions" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strfreev" c:identifier="g_strfreev">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="str_array" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="string_new" c:identifier="g_string_new">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="init" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="string_new_len" c:identifier="g_string_new_len">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="init" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="string_sized_new" c:identifier="g_string_sized_new">
    <return-value transfer-ownership="full">
      <type name="String"/>
    </return-value>
    <parameters>
      <parameter name="dfl_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="strip_context" c:identifier="g_strip_context">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="msgid" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="msgval" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strjoinv" c:identifier="g_strjoinv">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="separator" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="str_array" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strlcat" c:identifier="g_strlcat">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="src" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="dest_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="strlcpy" c:identifier="g_strlcpy">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="src" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="dest_size" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="strncasecmp" c:identifier="g_strncasecmp">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="s1" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="s2" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="strndup" c:identifier="g_strndup">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="strnfill" c:identifier="g_strnfill">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="length" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="fill_char" transfer-ownership="none">
        <type name="guint8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strreverse" c:identifier="g_strreverse">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strrstr" c:identifier="g_strrstr">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="haystack" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="needle" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strrstr_len" c:identifier="g_strrstr_len">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="haystack" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="haystack_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="needle" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strsignal" c:identifier="g_strsignal">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="signum" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="strstr_len" c:identifier="g_strstr_len">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="haystack" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="haystack_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="needle" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strtod" c:identifier="g_strtod">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="nptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strup" c:identifier="g_strup">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="strv_get_type" c:identifier="g_strv_get_type">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
  </function>
  <function name="strv_length" c:identifier="g_strv_length">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="str_array" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_bug" c:identifier="g_test_bug">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="bug_uri_snippet" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_bug_base" c:identifier="g_test_bug_base">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="uri_pattern" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_fail" c:identifier="g_test_fail">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="test_log_type_name" c:identifier="g_test_log_type_name">
    <return-value transfer-ownership="none">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="log_type" transfer-ownership="none">
        <type name="TestLogType"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_queue_destroy" c:identifier="g_test_queue_destroy">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="destroy_func" transfer-ownership="none" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
      <parameter name="destroy_data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_queue_free" c:identifier="g_test_queue_free">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="gfree_pointer" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_rand_double" c:identifier="g_test_rand_double">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </function>
  <function name="test_rand_double_range" c:identifier="g_test_rand_double_range">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
    <parameters>
      <parameter name="range_start" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
      <parameter name="range_end" transfer-ownership="none">
        <type name="gdouble"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_rand_int" c:identifier="g_test_rand_int">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </function>
  <function name="test_rand_int_range" c:identifier="g_test_rand_int_range">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="begin" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_run" c:identifier="g_test_run">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </function>
  <function name="test_run_suite" c:identifier="g_test_run_suite">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="suite" transfer-ownership="none">
        <type name="TestSuite"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_timer_elapsed" c:identifier="g_test_timer_elapsed">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </function>
  <function name="test_timer_last" c:identifier="g_test_timer_last">
    <return-value transfer-ownership="none">
      <type name="gdouble"/>
    </return-value>
  </function>
  <function name="test_timer_start" c:identifier="g_test_timer_start">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="test_trap_assertions" c:identifier="g_test_trap_assertions">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="assertion_flags" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="pattern" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_trap_fork" c:identifier="g_test_trap_fork">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="usec_timeout" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
      <parameter name="test_trap_flags" transfer-ownership="none">
        <type name="TestTrapFlags"/>
      </parameter>
    </parameters>
  </function>
  <function name="test_trap_has_passed" c:identifier="g_test_trap_has_passed">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </function>
  <function name="test_trap_reached_timeout" c:identifier="g_test_trap_reached_timeout">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
  </function>
  <function name="thread_error_quark" c:identifier="g_thread_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="thread_exit" c:identifier="g_thread_exit">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="retval" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="thread_pool_get_max_idle_time" c:identifier="g_thread_pool_get_max_idle_time">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="thread_pool_get_max_unused_threads" c:identifier="g_thread_pool_get_max_unused_threads">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
  </function>
  <function name="thread_pool_get_num_unused_threads" c:identifier="g_thread_pool_get_num_unused_threads">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="thread_pool_set_max_idle_time" c:identifier="g_thread_pool_set_max_idle_time">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="thread_pool_set_max_unused_threads" c:identifier="g_thread_pool_set_max_unused_threads">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="max_threads" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="thread_pool_stop_unused_threads" c:identifier="g_thread_pool_stop_unused_threads">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="thread_yield" c:identifier="g_thread_yield">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
  </function>
  <function name="time_val_from_iso8601" c:identifier="g_time_val_from_iso8601">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="iso_date" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="time_" transfer-ownership="none" direction="out" caller-allocates="1">
        <type name="TimeVal"/>
      </parameter>
    </parameters>
  </function>
  <function name="timeout_add" c:identifier="g_timeout_add_full">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="interval" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="function" transfer-ownership="none" scope="notified" closure="3" destroy="4">
        <type name="SourceFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="timeout_add_seconds" c:identifier="g_timeout_add_seconds_full">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="priority" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="interval" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
      <parameter name="function" transfer-ownership="none" scope="notified" closure="3" destroy="4">
        <type name="SourceFunc"/>
      </parameter>
      <parameter name="data" transfer-ownership="none">
        <type name="any"/>
      </parameter>
      <parameter name="notify" transfer-ownership="none" allow-none="1" scope="async">
        <type name="DestroyNotify"/>
      </parameter>
    </parameters>
  </function>
  <function name="timeout_source_new" c:identifier="g_timeout_source_new">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="timeout_source_new_seconds" c:identifier="g_timeout_source_new_seconds">
    <return-value transfer-ownership="full">
      <type name="Source"/>
    </return-value>
    <parameters>
      <parameter name="interval" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="trash_stack_height" c:identifier="g_trash_stack_height">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="stack_p" transfer-ownership="none">
        <type name="TrashStack"/>
      </parameter>
    </parameters>
  </function>
  <function name="trash_stack_push" c:identifier="g_trash_stack_push">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="stack_p" transfer-ownership="none">
        <type name="TrashStack"/>
      </parameter>
      <parameter name="data_p" transfer-ownership="none">
        <type name="any"/>
      </parameter>
    </parameters>
  </function>
  <function name="ucs4_to_utf16" c:identifier="g_ucs4_to_utf16" throws="1">
    <return-value transfer-ownership="none">
      <type name="guint16"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_read" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="ucs4_to_utf8" c:identifier="g_ucs4_to_utf8" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_read" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_break_type" c:identifier="g_unichar_break_type">
    <return-value transfer-ownership="none">
      <type name="UnicodeBreakType"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_combining_class" c:identifier="g_unichar_combining_class">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="uc" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_compose" c:identifier="g_unichar_compose">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="a" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_decompose" c:identifier="g_unichar_decompose">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="a" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="b" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_digit_value" c:identifier="g_unichar_digit_value">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_fully_decompose" c:identifier="g_unichar_fully_decompose">
    <return-value transfer-ownership="none">
      <type name="guint64"/>
    </return-value>
    <parameters>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="compat" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
      <parameter name="result" transfer-ownership="none" allow-none="1">
        <type name="gunichar"/>
      </parameter>
      <parameter name="result_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_get_mirror_char" c:identifier="g_unichar_get_mirror_char">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="mirrored_ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_get_script" c:identifier="g_unichar_get_script">
    <return-value transfer-ownership="none">
      <type name="UnicodeScript"/>
    </return-value>
    <parameters>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isalnum" c:identifier="g_unichar_isalnum">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isalpha" c:identifier="g_unichar_isalpha">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_iscntrl" c:identifier="g_unichar_iscntrl">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isdefined" c:identifier="g_unichar_isdefined">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isdigit" c:identifier="g_unichar_isdigit">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isgraph" c:identifier="g_unichar_isgraph">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_islower" c:identifier="g_unichar_islower">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_ismark" c:identifier="g_unichar_ismark">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isprint" c:identifier="g_unichar_isprint">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_ispunct" c:identifier="g_unichar_ispunct">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isspace" c:identifier="g_unichar_isspace">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_istitle" c:identifier="g_unichar_istitle">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isupper" c:identifier="g_unichar_isupper">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_iswide" c:identifier="g_unichar_iswide">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_iswide_cjk" c:identifier="g_unichar_iswide_cjk">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_isxdigit" c:identifier="g_unichar_isxdigit">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_iszerowidth" c:identifier="g_unichar_iszerowidth">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_to_utf8" c:identifier="g_unichar_to_utf8">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="outbuf" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_tolower" c:identifier="g_unichar_tolower">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_totitle" c:identifier="g_unichar_totitle">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_toupper" c:identifier="g_unichar_toupper">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_type" c:identifier="g_unichar_type">
    <return-value transfer-ownership="none">
      <type name="UnicodeType"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_validate" c:identifier="g_unichar_validate">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unichar_xdigit_value" c:identifier="g_unichar_xdigit_value">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="unicode_canonical_decomposition" c:identifier="g_unicode_canonical_decomposition" deprecated="1">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="ch" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="result_len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="unicode_canonical_ordering" c:identifier="g_unicode_canonical_ordering">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="unicode_script_from_iso15924" c:identifier="g_unicode_script_from_iso15924">
    <return-value transfer-ownership="none">
      <type name="UnicodeScript"/>
    </return-value>
    <parameters>
      <parameter name="iso15924" transfer-ownership="none">
        <type name="guint32"/>
      </parameter>
    </parameters>
  </function>
  <function name="unicode_script_to_iso15924" c:identifier="g_unicode_script_to_iso15924">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
    <parameters>
      <parameter name="script" transfer-ownership="none">
        <type name="UnicodeScript"/>
      </parameter>
    </parameters>
  </function>
  <function name="unlink" c:identifier="g_unlink">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="filename" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="unsetenv" c:identifier="g_unsetenv">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="variable" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_escape_string" c:identifier="g_uri_escape_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="unescaped" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="reserved_chars_allowed" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="allow_utf8" transfer-ownership="none">
        <type name="gboolean"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_parse_scheme" c:identifier="g_uri_parse_scheme">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="uri" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_unescape_segment" c:identifier="g_uri_unescape_segment">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="escaped_string" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="escaped_string_end" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="illegal_characters" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="uri_unescape_string" c:identifier="g_uri_unescape_string">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="escaped_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="illegal_characters" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="usleep" c:identifier="g_usleep">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="microseconds" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf16_to_ucs4" c:identifier="g_utf16_to_ucs4" throws="1">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_read" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf16_to_utf8" c:identifier="g_utf16_to_utf8" throws="1">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="guint16"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_read" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_casefold" c:identifier="g_utf8_casefold">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_collate" c:identifier="g_utf8_collate">
    <return-value transfer-ownership="none">
      <type name="gint32"/>
    </return-value>
    <parameters>
      <parameter name="str1" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="str2" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_collate_key" c:identifier="g_utf8_collate_key">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_collate_key_for_filename" c:identifier="g_utf8_collate_key_for_filename">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_find_next_char" c:identifier="g_utf8_find_next_char">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="end" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_find_prev_char" c:identifier="g_utf8_find_prev_char">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_get_char" c:identifier="g_utf8_get_char">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_get_char_validated" c:identifier="g_utf8_get_char_validated">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="max_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_normalize" c:identifier="g_utf8_normalize">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="mode" transfer-ownership="none">
        <type name="NormalizeMode"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_offset_to_pointer" c:identifier="g_utf8_offset_to_pointer">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="offset" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_pointer_to_offset" c:identifier="g_utf8_pointer_to_offset">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="pos" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_prev_char" c:identifier="g_utf8_prev_char">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strchr" c:identifier="g_utf8_strchr">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strdown" c:identifier="g_utf8_strdown">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strlen" c:identifier="g_utf8_strlen">
    <return-value transfer-ownership="none">
      <type name="gint64"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="max" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strncpy" c:identifier="g_utf8_strncpy">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="dest" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="src" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="n" transfer-ownership="none">
        <type name="guint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strrchr" c:identifier="g_utf8_strrchr">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="p" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="c" transfer-ownership="none">
        <type name="gunichar"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strreverse" c:identifier="g_utf8_strreverse">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_strup" c:identifier="g_utf8_strup">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_substring" c:identifier="g_utf8_substring">
    <return-value transfer-ownership="full">
      <type name="utf8"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="start_pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="end_pos" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_to_ucs4" c:identifier="g_utf8_to_ucs4" throws="1">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_read" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_to_ucs4_fast" c:identifier="g_utf8_to_ucs4_fast">
    <return-value transfer-ownership="none">
      <type name="gunichar"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_to_utf16" c:identifier="g_utf8_to_utf16" throws="1">
    <return-value transfer-ownership="none">
      <type name="guint16"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_read" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
      <parameter name="items_written" transfer-ownership="none" allow-none="1">
        <type name="gint64"/>
      </parameter>
    </parameters>
  </function>
  <function name="utf8_validate" c:identifier="g_utf8_validate">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="str" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="max_len" transfer-ownership="none">
        <type name="gint64"/>
      </parameter>
      <parameter name="end" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="variant_get_gtype" c:identifier="g_variant_get_gtype">
    <return-value transfer-ownership="none">
      <type name="GType"/>
    </return-value>
  </function>
  <function name="variant_is_object_path" c:identifier="g_variant_is_object_path">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="variant_is_signature" c:identifier="g_variant_is_signature">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="variant_parse" c:identifier="g_variant_parse" throws="1">
    <return-value transfer-ownership="full">
      <type name="Variant"/>
    </return-value>
    <parameters>
      <parameter name="type" transfer-ownership="none" allow-none="1">
        <type name="VariantType"/>
      </parameter>
      <parameter name="text" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="limit" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="variant_parser_get_error_quark" c:identifier="g_variant_parser_get_error_quark">
    <return-value transfer-ownership="none">
      <type name="guint32"/>
    </return-value>
  </function>
  <function name="variant_type_checked_" c:identifier="g_variant_type_checked_">
    <return-value transfer-ownership="none">
      <type name="VariantType"/>
    </return-value>
    <parameters>
      <parameter name="unknown" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="variant_type_string_is_valid" c:identifier="g_variant_type_string_is_valid">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="type_string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="variant_type_string_scan" c:identifier="g_variant_type_string_scan">
    <return-value transfer-ownership="none">
      <type name="gboolean"/>
    </return-value>
    <parameters>
      <parameter name="string" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="limit" transfer-ownership="none" allow-none="1">
        <type name="utf8"/>
      </parameter>
      <parameter name="endptr" transfer-ownership="full" direction="out" caller-allocates="0" allow-none="1">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
  <function name="warn_message" c:identifier="g_warn_message">
    <return-value transfer-ownership="none">
      <type name="none"/>
    </return-value>
    <parameters>
      <parameter name="domain" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="file" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="line" transfer-ownership="none">
        <type name="gint32"/>
      </parameter>
      <parameter name="func" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
      <parameter name="warnexpr" transfer-ownership="none">
        <type name="utf8"/>
      </parameter>
    </parameters>
  </function>
} // namespace GLib
</repository>
