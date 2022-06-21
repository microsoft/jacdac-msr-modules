#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x37180c2c, "MSR Gyro 215 v4.1");

// this depends on physical placement of accelerometer on PCB
void accelerometer_data_transform(int32_t sample[3]) {
    int32_t v0 = sample[0]; // x
    int32_t v1 = sample[1]; // y
    int32_t v2 = sample[2]; // z
    sample[0] = -v0;
    sample[1] = v1;
    sample[2] = -v2;
}

void app_init_services() {
    // note that gyroscope must be *after* accelerometer due to gyroscope_pending variable
    // processing
    accelerometer_init(&accelerometer_lsm6ds);
    gyroscope_init(&gyroscope_lsm6ds);
}
