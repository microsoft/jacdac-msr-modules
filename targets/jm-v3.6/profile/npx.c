#include "jdprofile.h"
#include "jacdac/dist/c/leddisplay.h"

FIRMWARE_IDENTIFIER(0x3865915a, "JM RGB-Ring 67 v3.7");

void app_init_services() {
    leddisplay_init(JD_LED_DISPLAY_LIGHT_TYPE_WS2812B_GRB, 8, 50, JD_LED_DISPLAY_VARIANT_RING);
}
