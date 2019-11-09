#include "../../config.h"

#undef VENDOR_ID
#define VENDOR_ID       0x046D
#undef PRODUCT_ID
#define PRODUCT_ID      0xC31C
#undef DEVICE_VER
#define DEVICE_VER      0x0064
#undef MANUFACTURER
#define MANUFACTURER    Logitech
#undef PRODUCT
#define PRODUCT         USB Keyboard
#undef DESCRIPTION
#define DESCRIPTION     K120 Keyboard

#define RGB_DI_PIN B2
#define RGBLED_NUM 20
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8

// not working with default D4?
#undef BACKLIGHT_PIN
#define BACKLIGHT_PIN D4
//#define BACKLIGHT_BREATHING
#undef BACKLIGHT_LEVELS
#define BACKLIGHT_LEVELS 3

#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1
#define RGBLIGHT_EFFECT_BREATHE_MAX 200
#define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 666*2
#define RGBLIGHT_EFFECT_CHRISTMAS_STEP 1
#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 3   // How many LEDs wide to light up
#define RGBLIGHT_EFFECT_KNIGHT_OFFSET 2   // The led to start at
#define RGBLIGHT_EFFECT_KNIGHT_LED_NUM 5  // How many LEDs to travel
#define RGBLIGHT_EFFECT_SNAKE_LENGTH 4    // How many LEDs wide to light up
