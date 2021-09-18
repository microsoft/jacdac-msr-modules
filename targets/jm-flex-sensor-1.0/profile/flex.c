#include "jdprofile.h"
#include "interfaces/jd_adc.h"

FIRMWARE_IDENTIFIER(0x321e3946, "JM Flex v1.0");

void app_init_services() {
    while(1) {
        int adc = adc_read_pin(PA_12);
        (void) adc;
        DMESG("adc %d ", adc);
        target_wait_us(250000);
    }
    potentiometer_init(NO_PIN, PA_12, NO_PIN);  // L, M, H
}
