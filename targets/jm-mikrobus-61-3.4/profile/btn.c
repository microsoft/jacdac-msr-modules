#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x32b36f38, "JM Btn v3.4");

void app_init_services() {
    button_init(PIN_X0, 0, -1);
}
