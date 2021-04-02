/* Copyright 2019 ShadeDream
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

// Helpful defines
#define _______ KC_TRNS
#define xxxxxxx KC_NO

#define _BL 0
#define _FL 1
#define _NL 2
#define _CL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* Keymap _BL: Base Layer (Default)
  */
  [_BL] = LAYOUT_multi(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, xxxxxxx, KC_HOME,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN,
    KC_LSFT, xxxxxxx, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,            KC_END,
    MO(_FL), KC_LGUI, KC_LALT,          xxxxxxx, KC_SPC,  xxxxxxx,          KC_RALT, MO(_FL), xxxxxxx,          KC_LEFT, KC_DOWN, KC_RGHT
  ),
 /* Keymap _FL: Function Layer
  */
  [_FL] = LAYOUT_multi(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  xxxxxxx, KC_CALC,
    _______, KC_MPRV, KC_MPLY, KC_MNXT, RGB_TOG, BL_TOGG, _______, KC_PGUP, KC_HOME, KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, _______,          KC_VOLU,
    _______, _______, KC_VOLD, KC_VOLU, KC_PGDN, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_INS,  _______, _______,                   KC_VOLD,
    _______, xxxxxxx, KC_WBAK, KC_WFWD, _______, _______, KC_PGUP, KC_END,  KC_MUTE, KC_MPRV, KC_MNXT, KC_MPLY, _______, KC_PGUP,          KC_MUTE,
    _______, _______, _______,          xxxxxxx, KC_BSPC, xxxxxxx,          MO(_CL), _______, xxxxxxx,          KC_MPRV, KC_PGDN, KC_MNXT 
  ),
 /* Keymap _NL: Numpad layer - UNUSED
  */
  [_NL] = LAYOUT_multi(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NLCK, xxxxxxx, KC_CALC,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_VOLU,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   KC_VOLD,
    _______, xxxxxxx, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MUTE,
    _______, _______, _______,          _______, _______, _______,          _______, _______, xxxxxxx,          _______, _______, _______
  ),
 /* Keymap _CL: Control layer
  */
  [_CL] = LAYOUT_multi(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, xxxxxxx, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
    _______, xxxxxxx, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
    RESET,   _______, _______,          _______, _______, _______,          _______, _______, xxxxxxx,          _______, _______, _______
  ),
};
