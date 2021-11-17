#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x30bc03c7, "JM SPI bridge v3.5A");

void bridge_init(void);

void app_init_services() {
    bridge_init();
}
