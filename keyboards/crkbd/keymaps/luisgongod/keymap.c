/*

*/

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_LSFT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,   KC_BSPC,  MO(2),     MO(2),  KC_SPC,  MO(1)
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,               KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10, KC_F11,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,                        KC_6,   KC_7,   KC_8,   KC_9,  KC_0, KC_F12,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_EXLM,  KC_AT, KC_HASH, KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______,   _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______, KC_MS_ACCEL0,   KC_AT, KC_MS_UP,  KC_DLR, KC_PERC,                      KC_VOLU, KC_BTN1, KC_UP, KC_BTN2, KC_PSCR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_MS_ACCEL1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, XXXXXXX,                      KC_VOLD,  KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_MS_ACCEL2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MUTE, KC_MEDIA_PLAY_PAUSE, KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_VAI,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, RGB_VAD,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, RGB_TOG,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};



// layer_state_t layer_state_set_user(layer_state_t state) {
//     switch (get_highest_layer(state)) {
//         case 1:
//             rgblight_setrgb(RGB_BLUE);
//             break;
//         case 2:
//             rgblight_setrgb(RGB_RED);
//             break;
//         case 0:
//             rgblight_setrgb(RGB_GREEN);
//             break;
//         default: // for any other layers, or the default layer
//             rgblight_setrgb (RGB_WHITE);
//             break;
//     }
//   return state;
// }

// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     { HSV_RED}     // Light 4 LEDs, starting with LED 12
// );
// // Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
// const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     { HSV_CYAN}
// );
// // Light LEDs 11 & 12 in purple when keyboard layer 2 is active
// const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     { HSV_PURPLE}
// );
// // Light LEDs 13 & 14 in green when keyboard layer 3 is active
// const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     { HSV_GREEN}
// );