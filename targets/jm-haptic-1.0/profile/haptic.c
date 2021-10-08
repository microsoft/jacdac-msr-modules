#include "jdprofile.h"
#include "jacdac/dist/c/relay.h"
#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x3cf463ad, "JM Haptic MACH-1.0");


void app_init_services() {
    vibration_service_init(&aw86224fcr);
}
