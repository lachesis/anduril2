#ifndef HANK_CFG
#define HANK_CFG

// config preferences for Hank Wang of Intl-Outdoor (Emisar, Noctigon)

// RGB aux LEDs should use voltage mode
#ifdef RGB_LED_OFF_DEFAULT
#undef RGB_LED_OFF_DEFAULT
#endif
#define RGB_LED_OFF_DEFAULT 0x19  // low, voltage

// RGB aux LEDs should be off in lockout mode
#ifdef RGB_LED_LOCKOUT_DEFAULT
#undef RGB_LED_LOCKOUT_DEFAULT
#endif
#define RGB_LED_LOCKOUT_DEFAULT 0x0

// half a second per color in rainbow mode
//#define RGB_RAINBOW_SPEED 0x03

// double click while on goes to full-power turbo, not ramp ceiling
#define USE_2C_MAX_TURBO

#endif  // ifndef HANK_CFG
