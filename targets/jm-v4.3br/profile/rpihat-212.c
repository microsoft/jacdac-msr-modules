#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x308c7c98, "JM-RPiHat SPI bridge 212 v4.3");

void bridge_init(void);

static const power_config_t pcfg = {
    .pin_fault = PA_4,
    .pin_en = PC_15,
    .pin_pulse = NO_PIN,
    .en_active_high = 1,
};

void app_init_services() {
    bridge_init();
    power_init(&pcfg);
}
