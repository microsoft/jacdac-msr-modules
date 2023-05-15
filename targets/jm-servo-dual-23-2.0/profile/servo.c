#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"

FIRMWARE_IDENTIFIER(0x3854ddfe, "JM Servo Dual v2.0");

const servo_params_t servo_params0 = {.pin = PA_6,
                                      .fixed = 0,
                                      .min_angle = -90 << 16,
                                      .min_pulse = 600,
                                      .max_angle = 90 << 16,
                                      .max_pulse = 2500,
                                      .power_pin = PB_7};

const servo_params_t servo_params1 = {.pin = PA_7,
                                      .fixed = 0,
                                      .min_angle = -90 << 16,
                                      .min_pulse = 600,
                                      .max_angle = 90 << 16,
                                      .max_pulse = 2500,
                                      .power_pin = PC_15};

const relay_params_t hi_power = {.relay_variant = JD_RELAY_VARIANT_ELECTROMECHANICAL,
                                 .max_switching_current = 20,
                                 .pin_relay_drive = PA_0,
                                 .pin_relay_feedback = NO_PIN,
                                 .pin_relay_led = NO_PIN,
                                 .drive_active_lo = true,
                                 .led_active_lo = false,
                                 .initial_state = true};

void app_init_services() {
    // high power mode when we get there
    servo_init(&servo_params0);
    servo_init(&servo_params1);
    relay_service_init(&hi_power);
}

const char *app_get_instance_name(int service_idx) {
    switch (service_idx) {
    case 1:
        return "SERVO 0";
    case 2:
        return "SERVO 1";
    case 3:
        return "HiPower";
    }
    return NULL;
}
