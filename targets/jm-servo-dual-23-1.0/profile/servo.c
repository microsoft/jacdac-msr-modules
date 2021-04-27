#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x322c83ab, "JM Servo Dual v1.0");


const servo_params_t servo_params0 = {
    .pin = PA_6,
    .fixed = 0,
    .min_angle = -90 << 16,
    .min_pulse = 600,
    .max_angle = 90 << 16,
    .max_pulse = 2500,
};

const servo_params_t servo_params1 = {
    .pin = PA_7,
    .fixed = 0,
    .min_angle = -90 << 16,
    .min_pulse = 600,
    .max_angle = 90 << 16,
    .max_pulse = 2500,
};

void app_init_services() {
    pin_setup_output(PA_0);
    pin_set(PA_0, 0);
    pin_setup_input(PA_3, 1);
    servo_init(&servo_params0, PF_0);
    servo_init(&servo_params1, PF_1);
}
