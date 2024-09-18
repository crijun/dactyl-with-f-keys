#include QMK_KEYBOARD_H

enum custom_layers {
    _QWERTY,
    _LOWER,
    _RAISE,
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_6x6_4(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_CAPS, KC_Y, KC_X, KC_C, KC_V, KC_B,
        KC_BSPC, KC_DEL, KC_COMM, KC_DOT,
        KC_LCTL, KC_LALT,
        KC_PSCR, KC_ESC
        ),
    [_LOWER] = LAYOUT_6x6_4(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_CAPS, KC_Y, KC_X, KC_C, KC_V, KC_B,
        KC_BSPC, KC_DEL, KC_COMM, KC_DOT,
        KC_LCTL, KC_LALT,
        KC_PSCR, KC_ESC
	),
    [_RAISE] = LAYOUT_6x6_4(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_CAPS, KC_Y, KC_X, KC_C, KC_V, KC_B,
        KC_BSPC, KC_DEL, KC_COMM, KC_DOT,
        KC_LCTL, KC_LALT,
        KC_PSCR, KC_ESC
	)
};
