#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define xxxxxxx KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	  [0] = LAYOUT_all(
	    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                    KC_PSCR, KC_SLCK, KC_PAUS,
	    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_INS,  KC_HOME, KC_PGUP,
	    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL,  KC_END,  KC_PGDN,
	    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                                     KC_UP,
	    MO(1),   KC_LGUI, KC_LALT,                            KC_SPC,                                      KC_RALT, KC_RGUI, MO(1),            KC_LEFT, KC_DOWN, KC_RGHT),

	  [1] = LAYOUT_all(
	    KC_GRV,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, KC_CALC,
	    KC_ESC,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,           _______, _______, KC_VOLU,
	    _______, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, KC_INS,           _______, KC_MUTE, KC_VOLD,
	    _______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,  _______, _______,
	    _______, KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, _______,                                     KC_PGUP,
	    _______, _______, _______,                            KC_BSPC,                                     MO(2),   _______, _______,          KC_MPRV, KC_PGDN, KC_MNXT),

	  [2] = LAYOUT_all(
	    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______,
	    _______, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  _______, _______, _______, _______, BR_DEC,  BR_INC,  _______,          _______, _______, _______,
	    _______, _______, _______, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  _______, _______, _______, _______, ES_DEC,  ES_INC,  _______,          _______, _______, _______,
	    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                     _______,
	    RESET,   _______, _______,                            _______,                                     _______, _______, _______,          _______, _______, _______)
};

