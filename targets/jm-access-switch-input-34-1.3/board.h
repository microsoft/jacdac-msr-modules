#define PIN_LED PA_1
#define PIN_LED_GND -1

// RGB LED sink connected to these pins
#define PIN_LED_R PA_4
#define PIN_LED_G PA_9
#define PIN_LED_B PB_1

// these values calibrate to ~60lux for each of ff0000, 00ff00, 0000ff
#define LED_R_MULT 250
#define LED_G_MULT 150
#define LED_B_MULT 42
#define RGB_LED_PERIOD 600

#define PIN_BL_LED PIN_LED_B
#define PIN_BL_PERIOD 300

#define PIN_PWR NO_PIN
#define PIN_P0 NO_PIN
#define PIN_P1 NO_PIN

#define PIN_SDA PA_10
#define PIN_SCL PA_9
#define I2C_AF LL_GPIO_AF_4

#define UART_PIN PA_2
#define UART_PIN_AF LL_GPIO_AF_1
#define USART_IDX 1

#define DEVICE_DMESG_BUFFER_SIZE 0
#define JD_CONFIG_CONTROL_FLOOD 0
#define JD_CONFIG_TEMPERATURE 0

