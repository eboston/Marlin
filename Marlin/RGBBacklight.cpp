/*
 *  RGBBacklight.cpp
 *
 *  Support for displays that have RGB back lights.
 */

#include "Marlin.h"

#if defined(HAS_RGB_BACKLIGHT)
  #if defined(ELB_FULL_GRAPHIC_CONTROLLER)

    // The pins the RGB lines are connected to may, or may not, be pwm.  Send as analog just
    // to be sure.  If they are not, any value over 127 will be on.  127 or less is off.
    void SendColors(byte red, byte grn, byte blu) {
      analogWrite(RGB_BACKLIGHT_RED_PIN, red);
      analogWrite(RGB_BACKLIGHT_GREEN_PIN, red);
      analogWrite(RGB_BACKLIGHT_BLUE_PIN, red);
    }

  #endif // ELB_FULL_GRAPHIC_CONTROLLER
#endif  // HAS_RGB_BACKLIGHT
