#include "jdprofile.h"

FIRMWARE_IDENTIFIER(0x35708db9, "JM-Matrix 87 v4.0");

void app_init_services() {
    dotmatrix_init();
}
