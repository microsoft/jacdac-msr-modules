#include "jdprofile.h"
#include "jacdac/dist/c/ledpixel.h"

FIRMWARE_IDENTIFIER(0x3e60b6fb, "JM RGB LED BAR 10 v0.1");

void app_init_services() {
    ledpixel_init(JD_LED_PIXEL_LIGHT_TYPE_WS2812B_GRB, 10, 200, JD_LED_PIXEL_VARIANT_STICK);
}
