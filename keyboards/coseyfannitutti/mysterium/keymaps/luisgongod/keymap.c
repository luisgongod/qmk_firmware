/* Copyright 2019 COSEYFANNITUTTI
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "credentials.h"
#include "g/keymap_combo.h"

enum custom_keycodes {
    S_OC = SAFE_RANGE,
    S_BU,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_tkl_ansi(
      KC_ESC,          KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,   KC_PSCR,  KC_BTN1, KC_BTN2,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_INS,   KC_HOME, KC_PGUP,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_DEL,   KC_END,  KC_PGDN,
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,                     KC_UP,
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_SPC,                 KC_RALT, KC_RGUI, MO(1),  KC_RCTL,            KC_LEFT, KC_DOWN, KC_RIGHT),

  [1] = LAYOUT_tkl_ansi(
    //   ESC   F1     F2     F3     F4     F5     F6     F7     F8     F9     F10    F11    F12    PSCR   SLCK   PAUS
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_BTN3,  KC_BTN1, KC_BTN2,

    //   ~          1       2           3       4       5       6       7       8       9        0       -          =      Bksp     Ins      Home     PgUp
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,

    //   Tab       Q       W           E       R       T       Y       U       I       O        P       [          ]      \        Del      End      PgDn
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,S_BU, S_OC, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,

    //   Caps      A       S           D       F       G       H       J       K       L        ;       '          Enter
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,

    //   LShift             Z       X           C       V       B       N       M       ,       .        /        RShift                Up
      KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_MNXT,KC_MUTE,KC_MPLY, KC_TRNS, KC_TRNS,  KC_TRNS,                     KC_VOLU,

    //   LCtrl     LGui     LAlt                                Space                               RAlt     RGui     Fn       RCtrl      Left    Down    Right
      KC_TRNS, KC_TRNS, KC_TRNS,                          KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,            KC_TRNS, KC_VOLD, KC_TRNS)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case S_OC:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
        } else {
            SEND_STRING(S_CATCHPHRASE);
            // when keycode QMKBEST is released
        }
        break;
    case S_BU:
        if (record->event.pressed) {
        
        } else {
            SEND_STRING(S_BUBU);
            
        }
        break;
    }
    return true;
};