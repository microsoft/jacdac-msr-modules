#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"

FIRMWARE_IDENTIFIER(0x35a6ed1c, "JM Relay MACH-0.1");

#define RELAY_LED PA_13
#define RELAY_DRIVE PA_8
#define RELAY_FEEDBACK PA_10
// solid state relay
static const relay_params_t params = {
    .relay_variant = JD_RELAY_VARIANT_ELECTROMECHANICAL,
    .max_switching_current = 2000,
    .pin_relay_drive = RELAY_DRIVE,
    .pin_relay_feedback = RELAY_FEEDBACK,
    .pin_relay_led = RELAY_LED,
    .drive_active_lo = 0,
    .led_active_lo = 1,
    .initial_state = false
};

void app_init_services() {
    relay_service_init(&params);
}
