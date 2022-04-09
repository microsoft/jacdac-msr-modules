#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"
#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x3cf463ad, "JM Haptic MACH-1.0");


void app_init_services() {
    pin_setup_output(PA_13);
    pin_set(PA_13, 1);
    vibration_motor_init(&aw86224fcr);
}
