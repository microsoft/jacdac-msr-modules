#include "jdprofile.h"
#include "jacdac/dist/c/leddisplay.h"

FIRMWARE_IDENTIFIER(0x3027f977, "JM RGB LED RING v2.1");

void app_init_services() {
    leddisplay_init(JD_LED_DISPLAY_LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_DISPLAY_VARIANT_RING);
}
