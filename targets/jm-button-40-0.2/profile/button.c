#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3865780e, "JM Button 40-0.2");

void app_init_services() {
    button_init(PA_13, 0, -1);
}
