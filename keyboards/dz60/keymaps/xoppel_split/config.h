#ifndef CONFIG_USER_H
#define CONFIG_USER_H

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

#define PREVENT_STUCK_MODIFIERS
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
#endif
