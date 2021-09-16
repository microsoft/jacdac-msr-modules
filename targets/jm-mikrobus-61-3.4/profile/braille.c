#include "jdprofile.h"

#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x3997beeb, "JM Braille v3.4");
uint8_t rxdata[255];

#define HIGH_REG    0x4000

// braille cell map


//     0 [9]       1 [10]      2 [11]      3 [12]
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -

const uint16_t rows[4] = {0x4200,0,0,0};

#define RESET           0x8000

#define ROW_0_LS_ON     0x0942
#define COL_0_HS_UP     0x8100
#define COL_0_HS_UP_P2  0x01C0

#define ROW_0_LS_OFF    0x0142
#define COL_0_HS_DWN    0x8300
#define COL_0_HS_DWN_P2  0x0180

// #define ROW_0_LS_UP     0x4209
// #define COL_0_HS_UP     0x0081
// #define COL_0_HS_UP_P2  0xC001

// #define ROW_0_LS_DWN    0x4201
// #define COL_0_HS_DWN    0x0083
// #define COL_0_HS_DWN_P2  0x8001


void done_handler(void) {
    pin_set(PIN_RX_CS,1);
    DMESG("DONE %d",*(uint16_t*)rxdata);
}

uint16_t reset = RESET;
uint16_t row0En = ROW_0_LS_ON;
uint16_t col0On = COL_0_HS_UP;
uint16_t col0OnP2 = COL_0_HS_UP_P2;

uint16_t row0Dis = ROW_0_LS_OFF;
uint16_t col0Off = COL_0_HS_DWN;
uint16_t col0OffP2 = COL_0_HS_DWN_P2;


void braille_send(void* data) {
    pin_set(PIN_RX_CS, 0);
    dspi_xfer(data, rxdata, 2, done_handler);
}
// uint16_t t = 0;
void app_init_services() {
    dspi_init();
    pin_setup_output(PIN_RX_CS);
    memset(rxdata,0,255);

    //Configure OUT1 to low side, configure OUT2 to high side, and enable both drivers
    // uint16_t t = 0b0000000110000010;
    target_wait_us(500000);

    while(1) {

        //Configure OUT1 to high side, configure OUT2 to low side, enable both drivers
        // t = 0b0000000110000100;
        braille_send(&row0En);
        target_wait_us(3000);
        braille_send(&col0On);
        target_wait_us(3000);
        braille_send(&col0OnP2);
        target_wait_us(500000);

        // t = 0b0000000110000010;
        braille_send(&row0Dis);
        target_wait_us(3000);
        braille_send(&col0Off);
        target_wait_us(3000);
        braille_send(&col0OffP2);
        target_wait_us(500000);
    }
}