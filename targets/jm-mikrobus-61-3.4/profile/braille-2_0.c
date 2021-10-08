#include "jdprofile.h"
#include "jacdac/dist/c/dotmatrix.h"

FIRMWARE_IDENTIFIER(0x3ca56301, "JM Braille v3.4-2.0");

// translates from sim to real life accurately.
const uint8_t cell_map[] = {0,1,2,3};

void app_init_services() {
    braille_dm_init(&ncv7726b, 4, 8, cell_map);
    braille_char_init(&ncv7726b, 1, 4, cell_map);
}