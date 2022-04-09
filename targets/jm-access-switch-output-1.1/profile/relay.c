#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"

FIRMWARE_IDENTIFIER(0x382ac0ef, "JM Access Switch Output-1.1");

#define RELAY_LED NO_PIN
#define RELAY_DRIVE PA_12
#define RELAY_FEEDBACK NO_PIN
#define PLUG_SLEEVE PA_8

// solid state relay
static const relay_params_t params = {
    .relay_variant = JD_RELAY_VARIANT_SOLID_STATE,
    .max_switching_current = 20,
    .pin_relay_drive = RELAY_DRIVE,
    .pin_relay_feedback = RELAY_FEEDBACK,
    .pin_relay_led = RELAY_LED,
    .drive_active_lo = 1,
    .led_active_lo = 1,
    .initial_state = false,
};

void app_init_services() {
    pin_set_opendrain(PLUG_SLEEVE);
    relay_service_init(&params);
}
