#define PIN_LED PA_12
#define PIN_LED_GND -1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

// TX/MOSI
#define PIN_SCL PA_9  // I2C1
#define PIN_SDA PA_10 // I2C1

#define BOARD_STARTUP_CODE LL_SYSCFG_EnablePinRemap(LL_SYSCFG_PIN_RMP_PA12 | LL_SYSCFG_PIN_RMP_PA11)

#define I2C_AF LL_GPIO_AF_6
#define I2C_IDX 1

#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

#define DISABLE_SWCLK_FUNC