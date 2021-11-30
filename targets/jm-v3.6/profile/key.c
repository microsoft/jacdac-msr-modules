#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x38861484, "JM Key 68 v3.7");

void app_init_services() {
    button_init(PIN_INT, 0, NO_PIN);
}
