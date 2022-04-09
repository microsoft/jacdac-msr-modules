#include "jdprofile.h"
#include "jacdac/dist/c/dotmatrix.h"

FIRMWARE_IDENTIFIER(0x3e6654a4, "Braille Module V42");

#define NUM_COLUMNS 8
#define NUM_ROWS 4

static uint32_t get_channels(int row, int col) {
    col ^= 1;
    row = NUM_ROWS - row - 1;
    unsigned ch0 = (NUM_COLUMNS * NUM_ROWS) + (col >> 1);
    unsigned ch1 = col * NUM_ROWS + row;
    return ch0 | (ch1 << 16);
}

void app_init_services() {
    braille_display_init(&ncv7726b_daisy, NUM_COLUMNS >> 1, get_channels);
}