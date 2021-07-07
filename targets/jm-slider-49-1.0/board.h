#define PIN_LED NO_PIN
#define PIN_LED_GND -1

#define PIN_PWR NO_PIN
#define PIN_P0 NO_PIN
#define PIN_P1 NO_PIN

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0  // set alternate function AF0 for USART1_TX
#define USART_IDX 1

#define PIN_LED_R PB_0
#define PIN_LED_G PA_7
#define PIN_LED_B PA_6

// these values calibrate to ~60lux for each of ff0000, 00ff00, 0000ff
// taken from accelerometer module (34), which is designed for the HSMF-C114 RGB LED
// with 150 ohm (red), 30 ohm (green), 30 ohm (blue) resistors.
#define LED_R_MULT 250
#define LED_G_MULT 150
#define LED_B_MULT 42
#define RGB_LED_PERIOD 600

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300
