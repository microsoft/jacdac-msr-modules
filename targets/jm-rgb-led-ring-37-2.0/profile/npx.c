#include "jdprofile.h"
#include "jacdac/dist/c/ledstrip.h"

FIRMWARE_IDENTIFIER(0x352f5acf, "JM RGB LED RING v2.0");

void app_init_services() {
    ledstrip_init(JD_LED_STRIP_LIGHT_TYPE_WS2812B_GRB, 8, 200, JD_LED_STRIP_VARIANT_RING);
}
