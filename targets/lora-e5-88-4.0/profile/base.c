#include "jdprofile.h"
#include "tinyhw.h"

FIRMWARE_IDENTIFIER(0, "JM-Lora E5 88 v4.0");

void app_init_services() {
    spiflash_init();
     //lorawan_init();
}
