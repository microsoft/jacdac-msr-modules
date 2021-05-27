#include "jdprofile.h"
#include "jacdac/dist/c/ledpixel.h"

FIRMWARE_IDENTIFIER(0x352f5acf, "JM RGB LED RING v2.0");

void app_init_services() {
    ledpixel_init(JD_LED_PIXEL_LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_PIXEL_VARIANT_RING);
}
