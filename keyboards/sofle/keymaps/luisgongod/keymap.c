#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include <stdio.h>
#include "quantum.h"
#include "credentials.h"


//go to https://jhelvy.shinyapps.io/qmkjsonconverter/ to convert json to c code


enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _QWERTY,
    _COLEMAK,
    _LOWER,
    _RAISE,
    _ADJUST,
};

enum custom_keycodes {
    S_OC = SAFE_RANGE,
    S_BU,  
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[0] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_BSPC,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_DEL,
  KC_LSFT,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_LSFT,
  KC_LCTL,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,     XXXXXXX,KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
                      KC_BTN1,KC_BTN2,KC_LALT, MO(1), KC_LCTL,      KC_SPC,  MO(2), KC_RGUI, KC_PGDN, KC_PGUP
),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * | Shift|  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[1] = LAYOUT(
  _______,   KC_F1,   KC_F2,     KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  KC_GRV,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                       KC_PLUS,    KC_7,    KC_8,    KC_9,    KC_0,  KC_F12,
  _______,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                       KC_MINUS, KC_4, KC_5, KC_6, KC_RPRN, KC_PIPE,
  _______,  KC_F11,  KC_F12, KC_PLUS, KC_LCBR, KC_RCBR, _______,       _______, KC_EQUAL, KC_1, KC_2, KC_3, KC_BSLS, _______,
                       _______, _______, _______, _______, _______,       _______, MO(3), KC_0, _______, _______
),
/* RAISE
 * ,----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE  |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
[2] = LAYOUT(
  _______, _______ , _______ , _______ , _______ , _______,                        _______,  _______  , _______,  _______ ,  _______ ,_______,
  _______,  KC_MS_ACCEL0, _______  , KC_MS_UP,  KC_DLR, KC_PERC,                       KC_VOLU, KC_BTN1,   KC_UP, KC_BTN2, KC_PSCR, KC_BSPC,
  _______, KC_MS_ACCEL1, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,_______,                  KC_VOLD,  KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL, KC_BSPC,
  _______,_______,_______, _______, _______, _______,  _______,       _______,  KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, _______,
                         _______, _______, _______, MO(3), _______,       _______, _______, _______, _______, _______
),

[3] = LAYOUT(
  _______,_______,_______, _______, _______, _______,                       _______,_______,_______, _______, _______, _______, 
  _______,_______,_______, _______, _______, _______,                       _______,_______,_______, _______, S_OC, _______, 
  _______,_______,_______, _______, _______, _______,                       _______,_______,_______, _______, _______, _______, 
  _______,_______,_______, _______, _______, _______,  _______,       _______,  _______,_______,_______, _______, _______, _______,
                   _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______
)
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case S_OC:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
        } else {
            SEND_STRING(P_OC);
            // when keycode QMKBEST is released
        }
        break;
    case S_BU:
        if (record->event.pressed) {
        
        } else {
            SEND_STRING(P_BU);
            
        }
        break;
    }
    return true;
};

#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 0) {
        if (clockwise) {
            tap_code(KC_MS_WH_UP);
        } else {
            tap_code(KC_MS_WH_DOWN);
        }
    }
    return true;
}

#endif
