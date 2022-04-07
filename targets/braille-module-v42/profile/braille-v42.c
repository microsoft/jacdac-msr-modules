#include "jdprofile.h"
#include "jacdac/dist/c/dotmatrix.h"

FIRMWARE_IDENTIFIER(0x3e6654a4, "Braille Module V42");

const uint8_t cell_map[] = {2,0,1,3};

void app_init_services() {
    braille_dm_init(&ncv7726b_daisy, 4, 8, cell_map);
    //braille_char_init(&ncv7726b_daisy, 1, 4, cell_map);
}