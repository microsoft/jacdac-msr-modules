#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x38c5de8f, "JM Accelerometer 30-1.0");

// this depends on physical placement of accelerometer on PCB
void accelerometer_data_transform(int32_t sample[3]) {
    int32_t v0 = sample[0]; // x
    int32_t v1 = sample[1]; // y
    int32_t v2 = sample[2]; // z
    sample[0] = v1;
    sample[1] = v0;
    sample[2] = v2;
}

void app_init_services() {
    accelerometer_init(&accelerometer_kxtj3);
}
