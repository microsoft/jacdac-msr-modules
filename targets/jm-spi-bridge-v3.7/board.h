#define PIN_LED NO_PIN
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

#define SPI_RX 1
#define USE_SPIS 1

#define PIN_ASCK PA_1
#define PIN_AMOSI PA_2
#define PIN_AMISO PA_6
#define PIN_SCS PA_3

#define PIN_CS PIN_SCS

// pins not used:
#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA11 | LL_SYSCFG_PIN_RMP_PA12)

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

// here, the anode (source) is common
// #define LED_RGB_COMMON_CATHODE 1
#define PIN_LED_R PB_0
#define PIN_LED_G PA_7
#define PIN_LED_B PB_8

// calibrated to ~50lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 76
#define LED_B_MULT 221
#define RGB_LED_PERIOD 600

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300

#define PIN_BR_TX_READY PA_0
#define PIN_BR_RX_READY PA_5

#define PIN_BR_FAULT PA_4
#define PIN_BR_LIM PC_15

struct _jd_frame_t;
void bridge_forward_frame(struct _jd_frame_t *frame);
#define JD_SERVICES_PROCESS_FRAME_PRE(fr) bridge_forward_frame(fr)

#define JD_RAW_FRAME 1
#define JD_CONFIG_IGNORE_STATUS 1
