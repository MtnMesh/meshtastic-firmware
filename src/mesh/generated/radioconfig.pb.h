/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_RADIOCONFIG_PB_H_INCLUDED
#define PB_RADIOCONFIG_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _RegionCode {
    RegionCode_Unset = 0,
    RegionCode_US = 1,
    RegionCode_EU433 = 2,
    RegionCode_EU868 = 3,
    RegionCode_CN = 4,
    RegionCode_JP = 5,
    RegionCode_ANZ = 6,
    RegionCode_KR = 7,
    RegionCode_TW = 8,
    RegionCode_RU = 9,
    RegionCode_IN = 10,
    RegionCode_NZ865 = 11,
    RegionCode_TH = 12
} RegionCode;

typedef enum _Role {
    Role_Default = 0,
    Role_Router = 1
} Role;

typedef enum _ChargeCurrent {
    ChargeCurrent_MAUnset = 0,
    ChargeCurrent_MA100 = 1,
    ChargeCurrent_MA190 = 2,
    ChargeCurrent_MA280 = 3,
    ChargeCurrent_MA360 = 4,
    ChargeCurrent_MA450 = 5,
    ChargeCurrent_MA550 = 6,
    ChargeCurrent_MA630 = 7,
    ChargeCurrent_MA700 = 8,
    ChargeCurrent_MA780 = 9,
    ChargeCurrent_MA880 = 10,
    ChargeCurrent_MA960 = 11,
    ChargeCurrent_MA1000 = 12,
    ChargeCurrent_MA1080 = 13,
    ChargeCurrent_MA1160 = 14,
    ChargeCurrent_MA1240 = 15,
    ChargeCurrent_MA1320 = 16
} ChargeCurrent;

typedef enum _GpsCoordinateFormat {
    GpsCoordinateFormat_GpsFormatDec = 0,
    GpsCoordinateFormat_GpsFormatDMS = 1,
    GpsCoordinateFormat_GpsFormatUTM = 2,
    GpsCoordinateFormat_GpsFormatMGRS = 3,
    GpsCoordinateFormat_GpsFormatOLC = 4,
    GpsCoordinateFormat_GpsFormatOSGR = 5
} GpsCoordinateFormat;

typedef enum _PositionFlags {
    PositionFlags_POS_UNDEFINED = 0,
    PositionFlags_POS_ALTITUDE = 1,
    PositionFlags_POS_ALT_MSL = 2,
    PositionFlags_POS_GEO_SEP = 4,
    PositionFlags_POS_DOP = 8,
    PositionFlags_POS_HVDOP = 16,
    PositionFlags_POS_BATTERY = 32,
    PositionFlags_POS_SATINVIEW = 64,
    PositionFlags_POS_SEQ_NOS = 128,
    PositionFlags_POS_TIMESTAMP = 256
} PositionFlags;

typedef enum _InputEventChar {
    InputEventChar_KEY_NONE = 0,
    InputEventChar_KEY_UP = 17,
    InputEventChar_KEY_DOWN = 18,
    InputEventChar_KEY_LEFT = 19,
    InputEventChar_KEY_RIGHT = 20,
    InputEventChar_KEY_SELECT = 10,
    InputEventChar_KEY_BACK = 27,
    InputEventChar_KEY_CANCEL = 24
} InputEventChar;

typedef enum _RadioConfig_UserPreferences_TelemetrySensorType {
    RadioConfig_UserPreferences_TelemetrySensorType_DHT11 = 0,
    RadioConfig_UserPreferences_TelemetrySensorType_DS18B20 = 1,
    RadioConfig_UserPreferences_TelemetrySensorType_DHT12 = 2,
    RadioConfig_UserPreferences_TelemetrySensorType_DHT21 = 3,
    RadioConfig_UserPreferences_TelemetrySensorType_DHT22 = 4,
    RadioConfig_UserPreferences_TelemetrySensorType_BME280 = 5,
    RadioConfig_UserPreferences_TelemetrySensorType_BME680 = 6,
    RadioConfig_UserPreferences_TelemetrySensorType_MCP9808 = 7,
    RadioConfig_UserPreferences_TelemetrySensorType_SHTC3 = 8
} RadioConfig_UserPreferences_TelemetrySensorType;

/* Struct definitions */
typedef struct _RadioConfig_UserPreferences {
    uint32_t position_broadcast_secs;
    uint32_t send_owner_interval;
    uint32_t wait_bluetooth_secs;
    uint32_t screen_on_secs;
    uint32_t phone_timeout_secs;
    uint32_t phone_sds_timeout_sec;
    uint32_t mesh_sds_timeout_secs;
    uint32_t sds_secs;
    uint32_t ls_secs;
    uint32_t min_wake_secs;
    char wifi_ssid[33];
    char wifi_password[64];
    bool wifi_ap_mode;
    RegionCode region;
    ChargeCurrent charge_current;
    bool position_broadcast_smart_disabled;
    Role role;
    bool location_share_disabled;
    bool gps_disabled;
    uint32_t gps_update_interval;
    uint32_t gps_attempt_time;
    bool is_low_power;
    bool fixed_position;
    bool serial_disabled;
    float frequency_offset;
    char mqtt_server[32];
    bool mqtt_disabled;
    GpsCoordinateFormat gps_format;
    bool gps_accept_2d;
    uint32_t gps_max_dop;
    bool factory_reset;
    bool debug_log_enabled;
    pb_size_t ignore_incoming_count;
    uint32_t ignore_incoming[3];
    bool serial_module_enabled;
    bool serial_module_echo;
    uint32_t serial_module_rxd;
    uint32_t serial_module_txd;
    uint32_t serial_module_timeout;
    uint32_t serial_module_mode;
    bool ext_notification_module_enabled;
    uint32_t ext_notification_module_output_ms;
    uint32_t ext_notification_module_output;
    bool ext_notification_module_active;
    bool ext_notification_module_alert_message;
    bool ext_notification_module_alert_bell;
    bool range_test_module_enabled;
    uint32_t range_test_module_sender;
    bool range_test_module_save;
    uint32_t store_forward_module_records;
    uint32_t store_forward_module_history_return_max;
    uint32_t store_forward_module_history_return_window;
    bool telemetry_module_measurement_enabled;
    bool telemetry_module_screen_enabled;
    uint32_t telemetry_module_read_error_count_threshold;
    uint32_t telemetry_module_update_interval;
    uint32_t telemetry_module_recovery_interval;
    bool telemetry_module_display_fahrenheit;
    RadioConfig_UserPreferences_TelemetrySensorType telemetry_module_sensor_type;
    uint32_t telemetry_module_sensor_pin;
    bool store_forward_module_enabled;
    bool store_forward_module_heartbeat;
    uint32_t position_flags;
    bool is_always_powered;
    uint32_t auto_screen_carousel_secs;
    uint32_t on_battery_shutdown_after_secs;
    uint32_t hop_limit;
    char mqtt_username[32];
    char mqtt_password[32];
    bool is_lora_tx_disabled;
    bool is_power_saving;
    bool rotary1_enabled;
    uint32_t rotary1_pin_a;
    uint32_t rotary1_pin_b;
    uint32_t rotary1_pin_press;
    InputEventChar rotary1_event_cw;
    InputEventChar rotary1_event_ccw;
    InputEventChar rotary1_event_press;
    bool canned_message_module_enabled;
    char canned_message_module_allow_input_source[16];
    bool canned_message_module_send_bell;
    bool mqtt_encryption_enabled;
    float adc_multiplier_override;
    uint32_t serial_module_baud;
} RadioConfig_UserPreferences;

typedef struct _RadioConfig {
    bool has_preferences;
    RadioConfig_UserPreferences preferences;
} RadioConfig;


/* Helper constants for enums */
#define _RegionCode_MIN RegionCode_Unset
#define _RegionCode_MAX RegionCode_TH
#define _RegionCode_ARRAYSIZE ((RegionCode)(RegionCode_TH+1))

#define _Role_MIN Role_Default
#define _Role_MAX Role_Router
#define _Role_ARRAYSIZE ((Role)(Role_Router+1))

#define _ChargeCurrent_MIN ChargeCurrent_MAUnset
#define _ChargeCurrent_MAX ChargeCurrent_MA1320
#define _ChargeCurrent_ARRAYSIZE ((ChargeCurrent)(ChargeCurrent_MA1320+1))

#define _GpsCoordinateFormat_MIN GpsCoordinateFormat_GpsFormatDec
#define _GpsCoordinateFormat_MAX GpsCoordinateFormat_GpsFormatOSGR
#define _GpsCoordinateFormat_ARRAYSIZE ((GpsCoordinateFormat)(GpsCoordinateFormat_GpsFormatOSGR+1))

#define _PositionFlags_MIN PositionFlags_POS_UNDEFINED
#define _PositionFlags_MAX PositionFlags_POS_TIMESTAMP
#define _PositionFlags_ARRAYSIZE ((PositionFlags)(PositionFlags_POS_TIMESTAMP+1))

#define _InputEventChar_MIN InputEventChar_KEY_NONE
#define _InputEventChar_MAX InputEventChar_KEY_BACK
#define _InputEventChar_ARRAYSIZE ((InputEventChar)(InputEventChar_KEY_BACK+1))

#define _RadioConfig_UserPreferences_TelemetrySensorType_MIN RadioConfig_UserPreferences_TelemetrySensorType_DHT11
#define _RadioConfig_UserPreferences_TelemetrySensorType_MAX RadioConfig_UserPreferences_TelemetrySensorType_SHTC3
#define _RadioConfig_UserPreferences_TelemetrySensorType_ARRAYSIZE ((RadioConfig_UserPreferences_TelemetrySensorType)(RadioConfig_UserPreferences_TelemetrySensorType_SHTC3+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define RadioConfig_init_default                 {false, RadioConfig_UserPreferences_init_default}
#define RadioConfig_UserPreferences_init_default {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, _RegionCode_MIN, _ChargeCurrent_MIN, 0, _Role_MIN, 0, 0, 0, 0, 0, 0, 0, 0, "", 0, _GpsCoordinateFormat_MIN, 0, 0, 0, 0, 0, {0, 0, 0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, _RadioConfig_UserPreferences_TelemetrySensorType_MIN, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, 0, 0, 0, 0, 0, _InputEventChar_MIN, _InputEventChar_MIN, _InputEventChar_MIN, 0, "", 0, 0, 0, 0}
#define RadioConfig_init_zero                    {false, RadioConfig_UserPreferences_init_zero}
#define RadioConfig_UserPreferences_init_zero    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, _RegionCode_MIN, _ChargeCurrent_MIN, 0, _Role_MIN, 0, 0, 0, 0, 0, 0, 0, 0, "", 0, _GpsCoordinateFormat_MIN, 0, 0, 0, 0, 0, {0, 0, 0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, _RadioConfig_UserPreferences_TelemetrySensorType_MIN, 0, 0, 0, 0, 0, 0, 0, 0, "", "", 0, 0, 0, 0, 0, 0, _InputEventChar_MIN, _InputEventChar_MIN, _InputEventChar_MIN, 0, "", 0, 0, 0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define RadioConfig_UserPreferences_position_broadcast_secs_tag 1
#define RadioConfig_UserPreferences_send_owner_interval_tag 2
#define RadioConfig_UserPreferences_wait_bluetooth_secs_tag 4
#define RadioConfig_UserPreferences_screen_on_secs_tag 5
#define RadioConfig_UserPreferences_phone_timeout_secs_tag 6
#define RadioConfig_UserPreferences_phone_sds_timeout_sec_tag 7
#define RadioConfig_UserPreferences_mesh_sds_timeout_secs_tag 8
#define RadioConfig_UserPreferences_sds_secs_tag 9
#define RadioConfig_UserPreferences_ls_secs_tag  10
#define RadioConfig_UserPreferences_min_wake_secs_tag 11
#define RadioConfig_UserPreferences_wifi_ssid_tag 12
#define RadioConfig_UserPreferences_wifi_password_tag 13
#define RadioConfig_UserPreferences_wifi_ap_mode_tag 14
#define RadioConfig_UserPreferences_region_tag   15
#define RadioConfig_UserPreferences_charge_current_tag 16
#define RadioConfig_UserPreferences_position_broadcast_smart_disabled_tag 17
#define RadioConfig_UserPreferences_role_tag     18
#define RadioConfig_UserPreferences_location_share_disabled_tag 32
#define RadioConfig_UserPreferences_gps_disabled_tag 33
#define RadioConfig_UserPreferences_gps_update_interval_tag 34
#define RadioConfig_UserPreferences_gps_attempt_time_tag 36
#define RadioConfig_UserPreferences_is_low_power_tag 38
#define RadioConfig_UserPreferences_fixed_position_tag 39
#define RadioConfig_UserPreferences_serial_disabled_tag 40
#define RadioConfig_UserPreferences_frequency_offset_tag 41
#define RadioConfig_UserPreferences_mqtt_server_tag 42
#define RadioConfig_UserPreferences_mqtt_disabled_tag 43
#define RadioConfig_UserPreferences_gps_format_tag 44
#define RadioConfig_UserPreferences_gps_accept_2d_tag 45
#define RadioConfig_UserPreferences_gps_max_dop_tag 46
#define RadioConfig_UserPreferences_factory_reset_tag 100
#define RadioConfig_UserPreferences_debug_log_enabled_tag 101
#define RadioConfig_UserPreferences_ignore_incoming_tag 103
#define RadioConfig_UserPreferences_serial_module_enabled_tag 120
#define RadioConfig_UserPreferences_serial_module_echo_tag 121
#define RadioConfig_UserPreferences_serial_module_rxd_tag 122
#define RadioConfig_UserPreferences_serial_module_txd_tag 123
#define RadioConfig_UserPreferences_serial_module_timeout_tag 124
#define RadioConfig_UserPreferences_serial_module_mode_tag 125
#define RadioConfig_UserPreferences_ext_notification_module_enabled_tag 126
#define RadioConfig_UserPreferences_ext_notification_module_output_ms_tag 127
#define RadioConfig_UserPreferences_ext_notification_module_output_tag 128
#define RadioConfig_UserPreferences_ext_notification_module_active_tag 129
#define RadioConfig_UserPreferences_ext_notification_module_alert_message_tag 130
#define RadioConfig_UserPreferences_ext_notification_module_alert_bell_tag 131
#define RadioConfig_UserPreferences_range_test_module_enabled_tag 132
#define RadioConfig_UserPreferences_range_test_module_sender_tag 133
#define RadioConfig_UserPreferences_range_test_module_save_tag 134
#define RadioConfig_UserPreferences_store_forward_module_records_tag 137
#define RadioConfig_UserPreferences_store_forward_module_history_return_max_tag 138
#define RadioConfig_UserPreferences_store_forward_module_history_return_window_tag 139
#define RadioConfig_UserPreferences_telemetry_module_measurement_enabled_tag 140
#define RadioConfig_UserPreferences_telemetry_module_screen_enabled_tag 141
#define RadioConfig_UserPreferences_telemetry_module_read_error_count_threshold_tag 142
#define RadioConfig_UserPreferences_telemetry_module_update_interval_tag 143
#define RadioConfig_UserPreferences_telemetry_module_recovery_interval_tag 144
#define RadioConfig_UserPreferences_telemetry_module_display_fahrenheit_tag 145
#define RadioConfig_UserPreferences_telemetry_module_sensor_type_tag 146
#define RadioConfig_UserPreferences_telemetry_module_sensor_pin_tag 147
#define RadioConfig_UserPreferences_store_forward_module_enabled_tag 148
#define RadioConfig_UserPreferences_store_forward_module_heartbeat_tag 149
#define RadioConfig_UserPreferences_position_flags_tag 150
#define RadioConfig_UserPreferences_is_always_powered_tag 151
#define RadioConfig_UserPreferences_auto_screen_carousel_secs_tag 152
#define RadioConfig_UserPreferences_on_battery_shutdown_after_secs_tag 153
#define RadioConfig_UserPreferences_hop_limit_tag 154
#define RadioConfig_UserPreferences_mqtt_username_tag 155
#define RadioConfig_UserPreferences_mqtt_password_tag 156
#define RadioConfig_UserPreferences_is_lora_tx_disabled_tag 157
#define RadioConfig_UserPreferences_is_power_saving_tag 158
#define RadioConfig_UserPreferences_rotary1_enabled_tag 160
#define RadioConfig_UserPreferences_rotary1_pin_a_tag 161
#define RadioConfig_UserPreferences_rotary1_pin_b_tag 162
#define RadioConfig_UserPreferences_rotary1_pin_press_tag 163
#define RadioConfig_UserPreferences_rotary1_event_cw_tag 164
#define RadioConfig_UserPreferences_rotary1_event_ccw_tag 165
#define RadioConfig_UserPreferences_rotary1_event_press_tag 166
#define RadioConfig_UserPreferences_canned_message_module_enabled_tag 170
#define RadioConfig_UserPreferences_canned_message_module_allow_input_source_tag 171
#define RadioConfig_UserPreferences_canned_message_module_send_bell_tag 173
#define RadioConfig_UserPreferences_mqtt_encryption_enabled_tag 174
#define RadioConfig_UserPreferences_adc_multiplier_override_tag 175
#define RadioConfig_UserPreferences_serial_module_baud_tag 176
#define RadioConfig_preferences_tag              1

/* Struct field encoding specification for nanopb */
#define RadioConfig_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  preferences,       1)
#define RadioConfig_CALLBACK NULL
#define RadioConfig_DEFAULT NULL
#define RadioConfig_preferences_MSGTYPE RadioConfig_UserPreferences

#define RadioConfig_UserPreferences_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   position_broadcast_secs,   1) \
X(a, STATIC,   SINGULAR, UINT32,   send_owner_interval,   2) \
X(a, STATIC,   SINGULAR, UINT32,   wait_bluetooth_secs,   4) \
X(a, STATIC,   SINGULAR, UINT32,   screen_on_secs,    5) \
X(a, STATIC,   SINGULAR, UINT32,   phone_timeout_secs,   6) \
X(a, STATIC,   SINGULAR, UINT32,   phone_sds_timeout_sec,   7) \
X(a, STATIC,   SINGULAR, UINT32,   mesh_sds_timeout_secs,   8) \
X(a, STATIC,   SINGULAR, UINT32,   sds_secs,          9) \
X(a, STATIC,   SINGULAR, UINT32,   ls_secs,          10) \
X(a, STATIC,   SINGULAR, UINT32,   min_wake_secs,    11) \
X(a, STATIC,   SINGULAR, STRING,   wifi_ssid,        12) \
X(a, STATIC,   SINGULAR, STRING,   wifi_password,    13) \
X(a, STATIC,   SINGULAR, BOOL,     wifi_ap_mode,     14) \
X(a, STATIC,   SINGULAR, UENUM,    region,           15) \
X(a, STATIC,   SINGULAR, UENUM,    charge_current,   16) \
X(a, STATIC,   SINGULAR, BOOL,     position_broadcast_smart_disabled,  17) \
X(a, STATIC,   SINGULAR, UENUM,    role,             18) \
X(a, STATIC,   SINGULAR, BOOL,     location_share_disabled,  32) \
X(a, STATIC,   SINGULAR, BOOL,     gps_disabled,     33) \
X(a, STATIC,   SINGULAR, UINT32,   gps_update_interval,  34) \
X(a, STATIC,   SINGULAR, UINT32,   gps_attempt_time,  36) \
X(a, STATIC,   SINGULAR, BOOL,     is_low_power,     38) \
X(a, STATIC,   SINGULAR, BOOL,     fixed_position,   39) \
X(a, STATIC,   SINGULAR, BOOL,     serial_disabled,  40) \
X(a, STATIC,   SINGULAR, FLOAT,    frequency_offset,  41) \
X(a, STATIC,   SINGULAR, STRING,   mqtt_server,      42) \
X(a, STATIC,   SINGULAR, BOOL,     mqtt_disabled,    43) \
X(a, STATIC,   SINGULAR, UENUM,    gps_format,       44) \
X(a, STATIC,   SINGULAR, BOOL,     gps_accept_2d,    45) \
X(a, STATIC,   SINGULAR, UINT32,   gps_max_dop,      46) \
X(a, STATIC,   SINGULAR, BOOL,     factory_reset,   100) \
X(a, STATIC,   SINGULAR, BOOL,     debug_log_enabled, 101) \
X(a, STATIC,   REPEATED, UINT32,   ignore_incoming, 103) \
X(a, STATIC,   SINGULAR, BOOL,     serial_module_enabled, 120) \
X(a, STATIC,   SINGULAR, BOOL,     serial_module_echo, 121) \
X(a, STATIC,   SINGULAR, UINT32,   serial_module_rxd, 122) \
X(a, STATIC,   SINGULAR, UINT32,   serial_module_txd, 123) \
X(a, STATIC,   SINGULAR, UINT32,   serial_module_timeout, 124) \
X(a, STATIC,   SINGULAR, UINT32,   serial_module_mode, 125) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_module_enabled, 126) \
X(a, STATIC,   SINGULAR, UINT32,   ext_notification_module_output_ms, 127) \
X(a, STATIC,   SINGULAR, UINT32,   ext_notification_module_output, 128) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_module_active, 129) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_module_alert_message, 130) \
X(a, STATIC,   SINGULAR, BOOL,     ext_notification_module_alert_bell, 131) \
X(a, STATIC,   SINGULAR, BOOL,     range_test_module_enabled, 132) \
X(a, STATIC,   SINGULAR, UINT32,   range_test_module_sender, 133) \
X(a, STATIC,   SINGULAR, BOOL,     range_test_module_save, 134) \
X(a, STATIC,   SINGULAR, UINT32,   store_forward_module_records, 137) \
X(a, STATIC,   SINGULAR, UINT32,   store_forward_module_history_return_max, 138) \
X(a, STATIC,   SINGULAR, UINT32,   store_forward_module_history_return_window, 139) \
X(a, STATIC,   SINGULAR, BOOL,     telemetry_module_measurement_enabled, 140) \
X(a, STATIC,   SINGULAR, BOOL,     telemetry_module_screen_enabled, 141) \
X(a, STATIC,   SINGULAR, UINT32,   telemetry_module_read_error_count_threshold, 142) \
X(a, STATIC,   SINGULAR, UINT32,   telemetry_module_update_interval, 143) \
X(a, STATIC,   SINGULAR, UINT32,   telemetry_module_recovery_interval, 144) \
X(a, STATIC,   SINGULAR, BOOL,     telemetry_module_display_fahrenheit, 145) \
X(a, STATIC,   SINGULAR, UENUM,    telemetry_module_sensor_type, 146) \
X(a, STATIC,   SINGULAR, UINT32,   telemetry_module_sensor_pin, 147) \
X(a, STATIC,   SINGULAR, BOOL,     store_forward_module_enabled, 148) \
X(a, STATIC,   SINGULAR, BOOL,     store_forward_module_heartbeat, 149) \
X(a, STATIC,   SINGULAR, UINT32,   position_flags,  150) \
X(a, STATIC,   SINGULAR, BOOL,     is_always_powered, 151) \
X(a, STATIC,   SINGULAR, UINT32,   auto_screen_carousel_secs, 152) \
X(a, STATIC,   SINGULAR, UINT32,   on_battery_shutdown_after_secs, 153) \
X(a, STATIC,   SINGULAR, UINT32,   hop_limit,       154) \
X(a, STATIC,   SINGULAR, STRING,   mqtt_username,   155) \
X(a, STATIC,   SINGULAR, STRING,   mqtt_password,   156) \
X(a, STATIC,   SINGULAR, BOOL,     is_lora_tx_disabled, 157) \
X(a, STATIC,   SINGULAR, BOOL,     is_power_saving, 158) \
X(a, STATIC,   SINGULAR, BOOL,     rotary1_enabled, 160) \
X(a, STATIC,   SINGULAR, UINT32,   rotary1_pin_a,   161) \
X(a, STATIC,   SINGULAR, UINT32,   rotary1_pin_b,   162) \
X(a, STATIC,   SINGULAR, UINT32,   rotary1_pin_press, 163) \
X(a, STATIC,   SINGULAR, UENUM,    rotary1_event_cw, 164) \
X(a, STATIC,   SINGULAR, UENUM,    rotary1_event_ccw, 165) \
X(a, STATIC,   SINGULAR, UENUM,    rotary1_event_press, 166) \
X(a, STATIC,   SINGULAR, BOOL,     canned_message_module_enabled, 170) \
X(a, STATIC,   SINGULAR, STRING,   canned_message_module_allow_input_source, 171) \
X(a, STATIC,   SINGULAR, BOOL,     canned_message_module_send_bell, 173) \
X(a, STATIC,   SINGULAR, BOOL,     mqtt_encryption_enabled, 174) \
X(a, STATIC,   SINGULAR, FLOAT,    adc_multiplier_override, 175) \
X(a, STATIC,   SINGULAR, UINT32,   serial_module_baud, 176)
#define RadioConfig_UserPreferences_CALLBACK NULL
#define RadioConfig_UserPreferences_DEFAULT NULL

extern const pb_msgdesc_t RadioConfig_msg;
extern const pb_msgdesc_t RadioConfig_UserPreferences_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define RadioConfig_fields &RadioConfig_msg
#define RadioConfig_UserPreferences_fields &RadioConfig_UserPreferences_msg

/* Maximum encoded size of messages (where known) */
#define RadioConfig_size                         605
#define RadioConfig_UserPreferences_size         602

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
