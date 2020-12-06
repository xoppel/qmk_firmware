// Xoppel's layout for Instant60
#include QMK_KEYBOARD_H

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Default layer
[0] = LAYOUT_60_tsangan_hhkb(
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(2),
	MO(1),   KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RWIN, MO(1)),

// Fn1 Layer
[1] = LAYOUT_60_tsangan_hhkb(
	KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, KC_DEL,
	_______, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,
	_______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,  KC_DEL,  _______,
	MO(2),   KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, KC_UP,   MO(2),
	_______, _______, KC_DEL,                             KC_BSPC,                            KC_LEFT, KC_DOWN, KC_RGHT),

// Fn2 Layer
[2] = LAYOUT_60_tsangan_hhkb(
	_______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, BL_BRTG, BL_DEC,  BL_INC,  KC_CALC, KC_CALC,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, BL_OFF,  BL_ON,   _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	RESET,   _______, _______,                            _______,                            _______, _______, _______),

};
