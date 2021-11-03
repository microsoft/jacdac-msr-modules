#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x36a8433b, "JM SPI bridge v3.3");

void bridge_init(uint8_t pin_cs, uint8_t pin_flow);

void app_init_services() {
    bridge_init(PA_3, PA_4);
}
