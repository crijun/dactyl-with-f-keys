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
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_RBRC,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_UNDS, KC_RSFT,
        KC_ENT, KC_SPC, KC_HOME, KC_END,
        KC_PSCR, KC_ESC,
        KC_LCTL, KC_LALT

        ),
    [_LOWER] = LAYOUT_6x6_4(
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_RBRC,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_UNDS, KC_RSFT,
        KC_ENT, KC_SPC, KC_HOME, KC_END,
        KC_PSCR, KC_ESC,
        KC_LCTL, KC_LALT
	),
    [_RAISE] = LAYOUT_6x6_4(
        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_RBRC,
        KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
        KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_N, KC_M, KC_COMM, KC_DOT, KC_UNDS, KC_RSFT,
        KC_ENT, KC_SPC, KC_HOME, KC_END,
        KC_PSCR, KC_ESC,
        KC_LCTL, KC_LALT
	)
};
