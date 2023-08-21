#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/


// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

//#define TAPPING_FORCE_HOLD
//#define TAPPING_TERM 100
#define TAPPING_TOGGLE 2

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 50

#define CIRQUE_PINNACLE_DIAMETER_MM 40
#define POINTING_DEVICE_ROTATION_90
#define CIRQUE_PINNACLE_CURVED_OVERLAY
#define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X //default 4x: 4x= less sensitive, 1x= more sensitive
// #define POINTING_DEVICE_INVERT_X
// #define POINTING_DEVICE_INVERT_Y

#define CIRQUE_PINNACLE_TAP_ENABLE
#define CIRQUE_PINNACLE_SECONDARY_TAP_ENABLE
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE
