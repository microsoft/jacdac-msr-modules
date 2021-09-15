#define PIN_LED NO_PIN
#define PIN_LED_GND -1

#define PIN_PWR NO_PIN
#define PIN_P0 NO_PIN
#define PIN_P1 NO_PIN

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

#define PIN_LED_R PA_10
#define PIN_LED_G PB_8
#define PIN_LED_B PB_1

// calibrated to ~50lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 150
#define LED_B_MULT 42
#define RGB_LED_PERIOD 600

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA12);

#define DISABLE_SWCLK_FUNC