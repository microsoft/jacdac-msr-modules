#define PIN_LED NO_PIN
#define PIN_LED_GND NO_PIN

#define PIN_PWR NO_PIN
#define PIN_P0 NO_PIN
#define PIN_P1 NO_PIN

#define PIN_AMOSI PA_7
#define PIN_ASCK PA_5

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

// here, the anode (source) is common
// #define LED_RGB_COMMON_CATHODE 1
#define PIN_LED_R PA_0
#define PIN_LED_G PA_2
#define PIN_LED_B PA_1

// calibrated to ~5lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 14
#define LED_B_MULT 16

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300
