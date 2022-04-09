#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3ff4e45b, "JM-Buzzer 89 v4.1");

void app_init_services() {
    buzzer_init(PIN_PWM);
}
