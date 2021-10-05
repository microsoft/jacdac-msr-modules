#include "jdprofile.h"
#include "jacdac/dist/c/dotmatrix.h"

FIRMWARE_IDENTIFIER(0x3997beeb, "JM Braille v3.4");

void app_init_services() {
    braille_init(&ncv7726b, 4, 8, JD_DOT_MATRIX_VARIANT_BRAILLE);
}