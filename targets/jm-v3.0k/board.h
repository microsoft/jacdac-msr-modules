#define PIN_LED PA_1
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

// pins P0/P1 on the silk
#define PIN_X0 PA_7
#define PIN_X1 PA_5

#define UART_PIN PA_9
#define UART_PIN_AF LL_GPIO_AF_1
#define USART_IDX 1

// here, the anode (source) is common
// #define LED_RGB_COMMON_CATHODE 1
#define PIN_LED_R PA_4
#define PIN_LED_G PA_6
#define PIN_LED_B PB_1
// calibrated to ~5lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 14
#define LED_B_MULT 16

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 30
