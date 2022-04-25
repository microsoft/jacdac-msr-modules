#include "jdprofile.h"
#include "jacdac/dist/c/led.h"

FIRMWARE_IDENTIFIER(0x3e60b6fb, "JM RGB LED BAR 10 v0.1");

void app_init_services() {
    leddisplay_init(LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_VARIANT_STICK);
}
