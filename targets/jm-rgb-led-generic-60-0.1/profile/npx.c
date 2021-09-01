#include "jdprofile.h"
#include "jacdac/dist/c/ledpixel.h"

FIRMWARE_IDENTIFIER(0x39ae4b81, "JM RGB LED GENERIC v0.1");

void app_init_services() {
    ledpixel_init(JD_LED_PIXEL_LIGHT_TYPE_WS2812B_GRB, 0, 200, JD_LED_PIXEL_VARIANT_STRIP);
}
