#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x375c4bf6, "JM Touch Test v1.0");


void app_init_services() {
    touch_init(PIN_TOUCH0);
    touch_init(PIN_TOUCH1);
}
