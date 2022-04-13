#include "jdprofile.h"
#include "jacdac/dist/c/capacitivebutton.h"
#include "jacdac-c/inc/interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x303b04aa, "Touch Sensor v1.0");

void app_init_services() {
    multicaptouch_init(&captouch_cap1298, 8);
}
