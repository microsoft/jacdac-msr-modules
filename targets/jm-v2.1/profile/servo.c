#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x3ac74e57, "JM PWM+SERVO v2.1");

const servo_params_t servo_params = {
    .pin = PA_7,
    .fixed = 0,
    .min_angle = -90 << 16,
    .min_pulse = 500,
    .max_angle = 90 << 16,
    .max_pulse = 2500,
    .power_pin = PF_1
};

void app_init_services() {
    servo_init(&servo_params);

    // The sense lines are not connected on this hw revision, so we just skip the actual power
    // service.
}
