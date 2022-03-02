#include "jdprofile.h"
#include "jacdac/dist/c/ledstrip.h"

FIRMWARE_IDENTIFIER(0x39ae4b81, "JM RGB LED GENERIC v0.1");

void app_init_services() {
    ledstrip_init(JD_LED_STRIP_LIGHT_TYPE_WS2812B_GRB, 32, 200, JD_LED_STRIP_VARIANT_STRIP);
}
