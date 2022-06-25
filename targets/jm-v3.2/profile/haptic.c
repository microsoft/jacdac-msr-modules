#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"
#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x39a14b1b, "JM Haptic Proto");

void app_init_services() {
    pin_setup_input(PIN_INT, PIN_PULL_UP);
    pin_setup_output(PIN_AN);
    pin_set(PIN_AN, 1);

    pin_setup_output(PIN_RST);
    pin_set(PIN_RST, 1);

    vibration_motor_init(&aw86224fcr);
}
