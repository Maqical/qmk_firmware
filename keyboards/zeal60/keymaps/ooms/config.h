#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#if !defined(NO_DEBUG) && !defined(CONSOLE_ENABLE)
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define DISABLE_LEADER

#include "../../config.h"

/* Enable/disable LEDs based on layout. */
#undef BACKLIGHT_USE_SPLIT_BACKSPACE
#define BACKLIGHT_USE_SPLIT_BACKSPACE 0

#undef BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define BACKLIGHT_USE_SPLIT_LEFT_SHIFT 0

#undef BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 0

#undef BACKLIGHT_USE_7U_SPACEBAR
#define BACKLIGHT_USE_7U_SPACEBAR 0

#undef BACKLIGHT_USE_ISO_ENTER
#define BACKLIGHT_USE_ISO_ENTER 0

#undef BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS
#define BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

// Set's how many keys are sent in a single scan. (default 0)
#define QMK_KEYS_PER_SCAN 4

// Set up RGB underglow.
#define RGB_DI_PIN B0          // The pin your RGB strip is wired to
#define RGBLED_NUM 31          // Number of LEDs
#define RGBLIGHT_ANIMATIONS    // Require for fancier stuff (not compatible with audio)
#define RGBLIGHT_HUE_STEP 5    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 10   // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 10   // How much each press of rgb_val changes val

// RGB underglow brightness (default 255)
#define RGBLIGHT_LIMIT_VAL 200
#define RGBLIGHT_EFFECT_BREATHE_MAX 200

// Enable current limiting for RGB underglow.
// Changes to this don't do anything but cause errors to the build, your backlight will still work!
//#define USB_MAX_POWER_CONSUMPTION 500     // Max USB power

// Scale brightnes according to BRIGHTNESS_CORRECTION_TABLE in quantum/rgblight.c.
// This allows to mitigate uneven brightness from LED underglow strips.
// #define LED_BRIGHTNESS_CORRECTION

#endif
