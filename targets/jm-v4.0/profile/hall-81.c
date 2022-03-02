#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x36db2b55, "JM-Hall (magnetic) 81 v4.0");

void app_init_services() {
    pin_set(PIN_RST, 1);
    pin_setup_output(PIN_RST);
    potentiometer_init(NO_PIN, PIN_AN, NO_PIN);
}
