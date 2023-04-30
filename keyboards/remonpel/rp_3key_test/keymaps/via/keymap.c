// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │FN1│ A │FN2│
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_1x3(
        MO(1),    KC_A,  MO(2)
    ),
    [1] = LAYOUT_ortho_1x3(
        KC_TRNS, KC_B,  KC_TRNS
    ),
    [2] = LAYOUT_ortho_1x3(
        MO(3),   KC_C,  KC_TRNS
    ),
    [3] = LAYOUT_ortho_1x3(
        KC_TRNS, KC_D,  KC_TRNS
    )
};
