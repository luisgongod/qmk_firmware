/* Copyright 2020 gtips
REV 42
 */
#include QMK_KEYBOARD_H

#include "g/keymap_combo.h"
#include <stdio.h>
enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_reviung41(
    
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_LSFT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LALT,     TT(1),   KC_SPC, TT(2),   KC_LEFT_GUI
                                      //`--------------------------'  `--------------------------'

  ),
  
  [_LOWER] = LAYOUT_reviung41(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,               KC_PLUS,    KC_7,    KC_8,    KC_9,    _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                   KC_MINUS,   KC_4,   KC_5,   KC_6,  _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F11,  KC_F12, KC_HASH, KC_DLR, KC_PERC,                      KC_EQUAL, KC_1, KC_2, KC_3, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,    _______,   KC_0, KC_DOT
                                      //`--------------------------'  `--------------------------'
  ),
  
  [_RAISE] = LAYOUT_reviung41(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______, KC_MS_ACCEL0,   KC_AT, KC_MS_UP,  KC_DLR, KC_PERC,              KC_VOLU, KC_BTN1, KC_UP, KC_BTN2, KC_PSCR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_MS_ACCEL1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, XXXXXXX,      KC_VOLD,  KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_MS_ACCEL2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                KC_MUTE, KC_MEDIA_PLAY_PAUSE, KC_PGDN, KC_PGUP, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,      _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),
  
  [_ADJUST] = LAYOUT_reviung41(
    RGB_VAI,   RGB_SAI, RGB_HUI,  RGB_MOD,  XXXXXXX,   RGB_TOG,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    RGB_VAD,   RGB_SAD, RGB_HUD,  RGB_RMOD, XXXXXXX,   XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,            QK_BOOT,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                            _______,   _______,  XXXXXXX,  _______,  _______
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

