#include "jdprofile.h"

#include "tinyhw.h"
#include "interfaces/jd_hw.h"

FIRMWARE_IDENTIFIER(0x3997beeb, "JM Braille v3.4");
uint8_t rxdata[255];

#define HS_ON   1
#define LS_ON   0

#define ROW0    9
#define COL0    1

// TL->TR->BL->BR
// const uint8_t col_map[] = {1, 5, 2, 6, 3, 7, 4 ,8};
// TL->TR top-bottom-top
// const uint8_t col_map[] = {1, 2, 3, 4, 8, 7, 6, 5};
// TL->BL->TR->BR
const uint8_t col_map[] = {1, 2, 3, 4, 5, 6, 7, 8};
const uint8_t row_map[] = {9, 11, 12, 10};

void set_row(int r, int val) {
    for (uint8_t i = 0; i < sizeof(row_map); i++)
        if (i == r)
            ncv7726b.channel_set(row_map[r], val);
        else 
            ncv7726b.channel_set(row_map[r], (val == HS_ON) ? LS_ON : HS_ON);
}

void all_up (void) {
    for (uint8_t c = 0; c < sizeof(col_map); c++) {
        ncv7726b.channel_set(row_map[0], HS_ON);
        ncv7726b.channel_set(col_map[c], LS_ON);
        ncv7726b.write();
        target_wait_us(4000);
        ncv7726b.clear_all();
        ncv7726b.write();
        target_wait_us(100000);
    }
}

void all_down (void) {
    for (uint8_t c = 0; c < sizeof(col_map); c++) {
        ncv7726b.channel_set(row_map[0], LS_ON);
        ncv7726b.channel_set(col_map[c], HS_ON);
        ncv7726b.write();
        target_wait_us(4000);
        ncv7726b.clear_all();
        ncv7726b.write();
        // target_wait_us(100000);
    }
}

void done_handler(void) {
    pin_set(PIN_RX_CS,1);
    DMESG("DONE %d",*(uint16_t*)rxdata);
}

static inline uint16_t flip (uint16_t v) {
    return ((v & 0xff00) >> 8) | ((v & 0x00ff) << 8);
}

void braille_send(void* data) {
    pin_set(PIN_RX_CS, 0);
    dspi_xfer(data, rxdata, 2, done_handler);
}

void braille_u8(const uint8_t* data) {
    pin_set(PIN_RX_CS, 0);
    dspi_xfer(data, rxdata, 2, done_handler);
}

uint16_t tx_buf;
bool breakout = false;
#define CELL_SHIFT  8
void braille_write(uint32_t state) {
    DMESG("STATE: %x",state);
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 8; col++) {
            // get dot state for each cell
            uint32_t dot_map[4]= { 
                state & (1 << col), 
                state & (1 << (col + CELL_SHIFT)), 
                state & (1 << (col + (2 * CELL_SHIFT))), 
                state & (1 << (col + (3 * CELL_SHIFT)))
            };
            DMESG("CELL state %d %x %x %x %x", state, dot_map[0], dot_map[1], dot_map[2], dot_map[3]);
            // if the current dot in "row" needs to be up
            if (dot_map[row]) {
                breakout = true;
                ncv7726b.channel_set(row_map[row], HS_ON);
                ncv7726b.channel_set(col_map[col], LS_ON);

                // set state of other rows to ensure no unintentional actuation
                for (int i = 0; i < 4; i++) {
                    if (i == row)
                        continue;

                    // if (dot_map[i])
                        // ncv7726b.channel_set(row_map[i], LS_ON);
                    // else
                    //     ncv7726b.channel_set(row_map[i], LS_ON);
                    // if (!dot_map[i])
                        ncv7726b.channel_set(row_map[i], LS_ON);
                }
            // otherwise current dot in "row" needs to be down.
            } else {
                ncv7726b.channel_set(row_map[row], LS_ON);
                ncv7726b.channel_set(col_map[col], HS_ON);

                // set state of other rows to ensure no unintentional actuation
                for (int i = 0; i < 4; i++) {
                    if (i == row)
                        continue;

                    // if (dot_map[i])
                        ncv7726b.channel_set(row_map[i], HS_ON);
                    // else
                        // ncv7726b.channel_set(row_map[i], HS_ON);
                }
            }

            ncv7726b.write();

            // if (breakout)
            //     while(1);

            ncv7726b.clear_all();
            // ncv7726b.write();
        }

        // ncv7726b.write();
    }
}

void app_init_services() {
    ncv7726b.init();

    all_down();

    target_wait_us(500000);
#if 1 
    #define ACTIVE_ROW  2
    #define ACTIVE_COL  5

    while (1) {
        // down
        ncv7726b.channel_set(row_map[ACTIVE_ROW], LS_ON);
        ncv7726b.channel_set(row_map[0], HS_ON);
        // ncv7726b.channel_set(row_map[1], HS_ON);
        // ncv7726b.channel_set(row_map[2], HS_ON);
        // ncv7726b.channel_set(row_map[3], HS_ON);
        ncv7726b.channel_set(col_map[ACTIVE_COL], HS_ON);

        ncv7726b.write();
        ncv7726b.clear_all();

        target_wait_us(500000);

        // up
        ncv7726b.channel_set(row_map[ACTIVE_ROW], HS_ON);
        ncv7726b.channel_set(row_map[0], LS_ON);
        // ncv7726b.channel_set(row_map[1], LS_ON);
        // ncv7726b.channel_set(row_map[2], LS_ON);
        // ncv7726b.channel_set(row_map[3], LS_ON);
        ncv7726b.channel_set(col_map[ACTIVE_COL], LS_ON);

        ncv7726b.write();
        ncv7726b.clear_all();

        target_wait_us(500000);
    }
    

#endif

#if 0
    while (1) {
        for (int i = 0; i < 8; i++) {
            if (i > 3) {
                ncv7726b.channel_set(row_map[0], HS_ON);
                ncv7726b.channel_set(row_map[1], LS_ON);
                ncv7726b.channel_set(row_map[2], LS_ON);
                ncv7726b.channel_set(row_map[3], LS_ON);
                ncv7726b.channel_set(col_map[i], LS_ON);

                ncv7726b.write();
                ncv7726b.clear_all();

                target_wait_us(250000);

                ncv7726b.channel_set(row_map[0], LS_ON);
                ncv7726b.channel_set(row_map[1], HS_ON);
                ncv7726b.channel_set(row_map[2], HS_ON);
                ncv7726b.channel_set(row_map[3], HS_ON);
                ncv7726b.channel_set(col_map[i], HS_ON);

                ncv7726b.write();
                ncv7726b.clear_all();

                target_wait_us(250000);
            } else {
                // down
                ncv7726b.channel_set(row_map[0], LS_ON);
                ncv7726b.channel_set(row_map[1], HS_ON);
                ncv7726b.channel_set(row_map[2], HS_ON);
                ncv7726b.channel_set(row_map[3], HS_ON);
                ncv7726b.channel_set(col_map[i], HS_ON);

                ncv7726b.write();
                ncv7726b.clear_all();

                target_wait_us(250000);

                // up
                ncv7726b.channel_set(row_map[0], HS_ON);
                ncv7726b.channel_set(row_map[1], LS_ON);
                ncv7726b.channel_set(row_map[2], LS_ON);
                ncv7726b.channel_set(row_map[3], LS_ON);
                ncv7726b.channel_set(col_map[i], LS_ON);

                ncv7726b.write();
                ncv7726b.clear_all();

                target_wait_us(250000);
            }
            
        }
    }
    
#endif

#if 0 
    braille_write(0);
    target_wait_us(500000);
    
    // while(1);
    uint32_t count = 0;
    while(1) {
        if (count >= 8)
            count = 0;

        braille_write(1 << count); 
        target_wait_us(500000);
        all_down();
        target_wait_us(500000);
        count++;
    }

#endif

#if 0
    const uint8_t cmds[] = { 0x42,0x09, 0x02,0x01, 0xc0,0x01, 0x42,0x01, 0x02,0x09, 0x80,0x01};

    while(1) {
        for (uint32_t i = 0; i < sizeof(cmds); i+=2) {
            braille_u8(&cmds[i]);
            target_wait_us(250000);
        }
    }

#endif

#if 0

    // const uint16_t  cmds[] = {0x4821, 0x0181, 0xc001, 0x4821, 0x0201, 0xc001,0x4821,0x0401,0xc001,0x4821,0x0801,0xc001, 0x4821,0x1001,0xc001,0x48a1, 0xc001, 0x4921,0xc001};
    const uint16_t  cmds[] = {0x4209, 0x0201, 0xc001, 0x4201, 0x0209, 0x8001};

    while(1) {
        for (uint32_t i =0; i < (sizeof(cmds)/sizeof(uint16_t)); i++) {
            tx_buf = flip(cmds[i]);
            braille_send(&tx_buf);

            target_wait_us(250000);
        }
    }
    

    while(1);
#endif

    // all_up();
    // while(1);
#if 0
    while (1) {
        for (int r = 0; r < 4; r++) {
            for (uint8_t c = 0; c < sizeof(col_map); c++) {
                ncv7726b.channel_set(row_map[0], HS_ON);
                ncv7726b.channel_set(col_map[c], LS_ON);

                if (c < 6)
                    ncv7726b.channel_set(col_map[c+1], HS_ON);

                ncv7726b.write();
                target_wait_us(4000);
                ncv7726b.clear_all();
                ncv7726b.write();
                target_wait_us(100000);
            }

            for (uint8_t c = 0; c < sizeof(col_map); c++) {
                ncv7726b.channel_set(row_map[0], LS_ON);
                ncv7726b.channel_set(col_map[c], HS_ON);

                if (c < 6)
                    ncv7726b.channel_set(col_map[c+1], HS_ON);

                ncv7726b.write();
                ncv7726b.clear_all();
                ncv7726b.write();
                target_wait_us(100000);
            }
        }
        
    }
#endif
#if 0
    while(1) {
        DMESG("ROW0 HS, COL3 LS");
        ncv7726b.channel_set(10, HS_ON);
        ncv7726b.channel_set(9, LS_ON);
        ncv7726b.channel_set(11, LS_ON);
        ncv7726b.channel_set(12, LS_ON);
        ncv7726b.channel_set(3, LS_ON);
        ncv7726b.write();
        target_wait_us(4000);
        ncv7726b.clear_all();
        // ncv7726b.write();
        target_wait_us(500000);
        DMESG("ROW0 LS, COL3 HS");
        ncv7726b.channel_set(10, LS_ON);
        ncv7726b.channel_set(9, LS_ON);
        ncv7726b.channel_set(11, LS_ON);
        ncv7726b.channel_set(12, LS_ON);
        ncv7726b.channel_set(3, HS_ON);
        ncv7726b.write();
        target_wait_us(4000);
        ncv7726b.clear_all();
        // ncv7726b.write();
        target_wait_us(500000);
    }
#endif
}

#if 0
#define HIGH_REG    0x4000

#define ROW0    9
#define ROW1    10
#define ROW2    11
#define ROW3    12

#define HB_SEL  (1 << 14)
#define SRR     (1 << 15)
#define OVLO    (1 << 0)

#define ROW_EN_START    0x0200
#define ROW_CNF_START   0x8
#define EN_START    0x80
#define CNF_START   0x2

#define DOWN        0
#define UP        1


// braille cell map
const uint8_t row_en_map[] = {ROW0, ROW1, ROW2, ROW3};

// select and enable a row (cell)
// rows always require HBSEL
uint16_t row_set(uint8_t row, uint8_t hs_on) {
    uint16_t bit_msk = HB_SEL | OVLO;

    hs_on = (hs_on > 0) ? 1 : 0;

    if (hs_on)
        bit_msk |= ROW_CNF_START << row;

    bit_msk |= ROW_EN_START << row;

    return bit_msk;
}

uint16_t row_release(void) {
    return SRR | HB_SEL | OVLO;
}


uint16_t dot_set(uint8_t dot, uint8_t up) {
    uint16_t bit_msk = OVLO;
    // invert
    uint8_t state = (up > 0) ? 0 : 1;

    // if (dot > 5)
    // {
    //     bit_msk |= HB_SEL;
    //     dot -= 5; // With HB_SEL, in upper channels (>=OUT7)
    // }
    if (state)
        bit_msk |= (CNF_START << dot);

    bit_msk |= (EN_START << dot);

    return bit_msk;
}

uint16_t dot_release(void) {
    return SRR | OVLO;
}

uint16_t cell_set(uint8_t row, uint8_t dot, uint8_t up) {
    return 0;
}
//     0 [9]       1 [10]      2 [11]      3 [12]
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -
//     -   -       -   -       -   -       -   -

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

uint16_t flip (uint16_t v) {
    return ((v & 0xff00) >> 8) | ((v & 0x00ff) << 8);
}

void braille_send(void* data) {
    pin_set(PIN_RX_CS, 0);
    dspi_xfer(data, rxdata, 2, done_handler);
}

void check (uint16_t v1 , uint16_t v2 , uint16_t v3, uint8_t row, uint8_t dot, uint8_t state) {

    if (v1 == row_set(row,state)&& v2 == dot_set(dot, state) && (v3 == dot_release() || v3 == row_release()))
        return;

    DMESG("ERR[%d, %d, %d]: %x [%x] %x [%x] %x|%x [%x]", row, dot, state, row_set(row,state), v1, dot_set(dot, state), v2,dot_release(), row_release(), v3);
    while(1);
}
// uint16_t t = 0;
void app_init_services() {

    // 0
    // check(0x4201, 0x0083, 0x8001, 0, 0, DOWN);
    // check(0x4209, 0x0081, 0xc001, 0, 0, UP);
    // // 1
    // check(0x4201, 0x0105, 0x8001, 0, 1, DOWN);
    // check(0x4209, 0x0101, 0xc001, 0, 1, UP);
    // // 2
    // check(0x4201, 0x0209, 0x8001, 0, 2, DOWN);
    // check(0x4209, 0x0201, 0xc001, 0, 2, UP);
    // // 3
    // check(0x4201, 0x0411, 0x8001, 0, 3, DOWN);
    // check(0x4209, 0x0401, 0xc001, 0, 3, UP);
    // // 4
    // check(0x4201, 0x0821, 0x8001, 0, 4, DOWN);
    // check(0x4209, 0x0801, 0xc001, 0, 4, UP);
    // // 5
    // check(0x4201, 0x1041, 0x8001, 0, 5, DOWN);
    // check(0x4209, 0x1001, 0xc001, 0, 5, UP);
    // // 6
    // check(0x4201, 0x0411, 0x8001, 0, 6, DOWN);
    // check(0x4209, 0x0401, 0xc001, 0, 6, UP);
    // // 7
    // check(0x4283, 0x0, 0xc001, 0, 7, DOWN);
    // check(0x4289, 0x0, 0xc001, 0, 7, UP);
    // // 8
    // check(0x4205, 0x0, 0xc001, 0, 8, DOWN);
    // check(0x4309, 0x0, 0xc001, 0, 8, UP);

    dspi_init();
    pin_setup_output(PIN_RX_CS);
    memset(rxdata,0,255);

    while(1) {
        for (int i =0 ; i < 5; i ++) {
            uint16_t r = flip(row_set(0, DOWN));
            braille_send(&r);
            target_wait_us(3000);
            r = flip(dot_set(i, DOWN));
            braille_send(&r);
            target_wait_us(3000);
            r = flip(dot_release());
            braille_send(&r);
            target_wait_us(500000);
        }

        for (int i =0 ; i < 5; i ++) {
            uint16_t r = flip(row_set(0, UP));
            braille_send(&r);
            target_wait_us(3000);
            r = flip(dot_set(i, UP));
            braille_send(&r);
            target_wait_us(3000);
            r = flip(row_release());
            braille_send(&r);
            target_wait_us(500000);
        }
    }

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

#endif