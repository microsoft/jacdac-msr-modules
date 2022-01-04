#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x33d141ab, "JM Pressure MPL3115A2 72 v3.8");

#include <math.h>

extern double foo;

void app_init_services() {
    double f = foo;
    f = pow(f,f);
    DMESG("f=%d", f);

    barometer_init(&pressure_mpl3115a2);
    thermometer_init(&temperature_mpl3115a2);
}
