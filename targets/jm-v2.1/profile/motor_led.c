#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3a722dc2, "JM Motor LED v2.1");

static const led_params_t params = {
    .pin_r = PA_6,
    .pin_g = NO_PIN,
    .pin_b = NO_PIN,
    .active_high = 1,
    .led_count = 64,
    .max_power = 300,
};

void app_init_services() {
    pin_setup_output(PA_4);
    pin_set(PA_4, 0); // second PWM pin of controller

    pin_setup_output(PA_3);
    pin_set(PA_3, 1); // EN pin of controller - always enable

    led_service_init(&params);
}
