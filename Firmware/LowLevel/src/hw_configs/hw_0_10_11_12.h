#ifndef HW_0_10_11_12_H
#define HW_0_10_11_12_H

#ifdef HW_0_12_X
#include <PioSPI.h>
#endif

#define WT901_WIRE Wire

#define PIN_WT901_SDA 8
#define PIN_WT901_SCL 9

#define PIN_IMU_CS 9
#define PIN_IMU_MOSI 7
#define PIN_IMU_MISO 8
#define PIN_IMU_SCK 6

#define PIN_ANALOG_BATTERY_VOLTAGE 27
#define PIN_ANALOG_CHARGE_VOLTAGE 26
#define PIN_ANALOG_CHARGE_CURRENT 28

#define PIN_ENABLE_CHARGE 22

#define PIN_ESC_SHUTDOWN 20
#define PIN_RASPI_POWER 21

#define PIN_EMERGENCY_1 18
#define PIN_EMERGENCY_2 19
#define PIN_EMERGENCY_3 3
#define PIN_EMERGENCY_4 2

#define PIN_MUX_IN 11
#define PIN_MUX_OUT 12
#define PIN_MUX_ADDRESS_0 13
#define PIN_MUX_ADDRESS_1 14
#define PIN_MUX_ADDRESS_2 15

#define PIN_NEOPIXEL 10

#define PIN_UI_TX 4
#define PIN_UI_RX 5

#ifdef ENABLE_SOUND_MODULE
#define PIN_SOUND_TX 16
#define PIN_SOUND_RX 17
#endif


// In this version we need PIO for the IMU SPI
PioSPI IMU_SPI(PIN_IMU_MOSI, PIN_IMU_MISO, PIN_IMU_SCK, PIN_IMU_CS, SPI_MODE3, 1000000);

void hw_assign_pins() {
    // we don't need to assign anything here, since PioSPI has pin assignments in its constructor
}

#endif