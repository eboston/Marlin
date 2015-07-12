/*
 *  RGBBacklight.h
 *
 *  Support for displays that have RGB back lights.
 */

#include "boards.h"

#if MB(RAMPS_13_EFB)
  #define RGB_BACKLIGHT_GREEN_PIN   17
  #define RGB_BACKLIGHT_RED_PIN     25
  #define RGB_BACKLIGHT_BLUE_PIN    33

  #define HAS_RGB_BACKLIGHT
#endif

#ifdef HAS_RGB_BACKLIGHT
  void SendColors(byte red, byte grn, byte blu);
#endif
