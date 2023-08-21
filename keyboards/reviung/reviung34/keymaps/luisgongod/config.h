

#pragma once

//#define USE_MATRIX_I2C
// #define TAPPING_TOGGLE 2

// only for new 4mb frood board:
// #define RP2040_FLASH_GD25Q64CS




// #define COMBO_VARIABLE_LEN
// #define COMBO_TERM 50

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED D5 // Specify an optional status LED by GPIO number which blinks when entering the bootloader