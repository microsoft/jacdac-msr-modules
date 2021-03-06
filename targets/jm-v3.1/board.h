#define PIN_LED PB_9
#define PIN_LED_GND -1

// RGB LED sink connected to these pins
#define PIN_LED_R PA_7 // TIM3_ch2
#define PIN_LED_G PB_0 // TIM3_ch3
#define PIN_LED_B PA_6 // TIM3_ch1

#define PIN_PWR -1
#define PIN_P0 -1
#define PIN_P1 -1

// Left header
#define PIN_AN PA_5
#define PIN_RST PA_3
#define PIN_CS PA_1
#define PIN_SCK PA_0
#define PIN_TX_MISO PB_6 // USART1 SPI2
#define PIN_RX_MOSI PB_7 // USART1 SPI2
// VCC
// GND

// Right header
#define PIN_PWM PA_4 // TIM14
#define PIN_INT PC_15
// MOSI
// MISO
#define PIN_SCL PA_11 // I2C2
#define PIN_SDA PA_12 // I2C2
// 5V
// GND

#define UART_PIN PA_2
#define UART_PIN_AF LL_GPIO_AF_1
#define USART_IDX 2
