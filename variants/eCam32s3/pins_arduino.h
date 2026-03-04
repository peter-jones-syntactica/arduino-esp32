#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>
#include "soc/soc_caps.h"

#define USB_VID 0x10C4
#define USB_PID 0xEA60
#define USB_MANUFACTURER "Syntactica"
#define USB_PRODUCT      "eCam32-S3"

static const uint8_t TX = 43;
static const uint8_t RX = 44;

static const uint8_t A0 = 14;
static const uint8_t A1 = 13;
static const uint8_t A2 = 12;
static const uint8_t A3 = 10;

#define PWDN_GPIO_NUM     32
#define RESET_GPIO_NUM    -1
#define XCLK_GPIO_NUM      0
#define SIOD_GPIO_NUM     26
#define SIOC_GPIO_NUM     27
#define Y9_GPIO_NUM       35
#define Y8_GPIO_NUM       34
#define Y7_GPIO_NUM       39
#define Y6_GPIO_NUM       36
#define Y5_GPIO_NUM       21
#define Y4_GPIO_NUM       19
#define Y3_GPIO_NUM       18
#define Y2_GPIO_NUM        5
#define VSYNC_GPIO_NUM    25
#define HREF_GPIO_NUM     23
#define PCLK_GPIO_NUM     22

#endif /* Pins_Arduino_h */