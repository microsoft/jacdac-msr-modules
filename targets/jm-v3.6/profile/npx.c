#include "jdprofile.h"
#include "jacdac/dist/c/led.h"

FIRMWARE_IDENTIFIER(0x3865915a, "JM RGB-Ring 67 v3.7");

void app_init_services() {
    leddisplay_init(LIGHT_TYPE_WS2812B_GRB, 8, 50, JD_LED_VARIANT_RING);
}
