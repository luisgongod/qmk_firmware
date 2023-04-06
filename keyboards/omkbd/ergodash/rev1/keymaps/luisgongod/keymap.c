#include QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include <stdio.h>
#include "quantum.h"
#include "credentials.h"


//go to https://jhelvy.shinyapps.io/qmkjsonconverter/ to convert json to c code



enum custom_keycodes {
    S_OC = SAFE_RANGE,
    S_BU,
};


#define EISU LALT(KC_GRV)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_4key_2u_inner(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, LALT(KC_F4), KC_VOLU, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BTN1, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_PGUP, KC_VOLD, KC_Y, KC_U, 
  KC_I, KC_O, KC_P, KC_DEL, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PGDN, KC_MUTE, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LSFT, KC_LSFT, KC_N, KC_M, 
  KC_COMM, KC_DOT, KC_SLSH, KC_ENT, KC_LGUI, LCTL(LSFT(KC_TAB)), LCTL(KC_TAB), KC_LALT, MO(1), KC_LCTL, KC_LCTL, KC_LCTL, KC_SPC, MO(2), KC_LGUI, LALT(LSFT(KC_TAB)), LALT(KC_TAB), KC_BTN2),

	[1] = LAYOUT_4key_2u_inner(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PERC, KC_PPLS, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_PMNS,
   KC_4, KC_5, KC_6, S_OC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_PAST, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, LALT(KC_F4), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
   KC_PSLS, KC_0, KC_0, KC_DOT, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

	[2] = LAYOUT_4key_2u_inner(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_ACL2, KC_MNXT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_ACL1, KC_MPRV, 
  KC_NO, KC_BTN1, KC_UP, KC_BTN2, KC_PSCR, KC_F12, KC_LSFT, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_ACL0, KC_MPLY, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO,
   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_TRNS, KC_LGUI, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO)
};



#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

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