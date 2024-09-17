#include "kb.h"


#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, 
		KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, 
		KC_BSLS, KC_Q, KC_W, KC_E, KC_R, KC_T, 
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, 
		KC_LSFT, KC_Y, KC_X, KC_C, KC_V, KC_B, 
		KC_END, KC_HOME, KC_BSPC, KC_DEL, 
		KC_LCTL, KC_LALT, KC_LGUI, KC_LALT)

};
