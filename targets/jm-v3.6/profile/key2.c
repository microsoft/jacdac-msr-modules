#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x39231094, "JM 2Key 69 v3.7");

void app_init_services() {
    button_init(PIN_INT, 0, NO_PIN);
    button_init(PIN_AN, 0, NO_PIN);
}
