/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 20
#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"brqPj/owbYl"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_16BIT
#define RGB_MATRIX_STARTUP_SPD 60

