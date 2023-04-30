// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "rp_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │M1 │M2 │MSE│SLP│
     * ├───┼───┼───┼───┤
     * │Num│ / │ * │ - │
     * ├───┼───┼───┼───┤
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT_ortho_6x4(
        KC_NO,   KC_NO,   TG(2),   KC_SLEP,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_P1,   KC_P2,   KC_P3,
        KC_P0,            KC_PDOT, KC_PENT
    ),

    /*
     * ┌───┐───┬───┬───┐
     * │Rst│   │   │   │
     * └───┘───┼───┼───┤
     * │Num│ / │ * │ - │
     * ┌───┬───┬───┐───┤
     * │Hom│ ↑ │PgU│   │
     * ├───┼───┼───┤ + │
     * │ ← │   │ → │   │
     * ├───┼───┼───┤───┤
     * │End│ ↓ │PgD│   │
     * ├───┴───┼───┤Ent│
     * │  Ins  │Del│   │
     * └───────┴───┘───┘
     */
    [1] = LAYOUT_ortho_6x4(
        QK_BOOT, _______, _______, _______,
        _______, _______, _______, _______,
        KC_HOME, KC_UP,   KC_PGUP,
        KC_LEFT, XXXXXXX, KC_RGHT, _______,
        KC_END,  KC_DOWN, KC_PGDN,
        KC_INS,           KC_DEL,  _______
    ),


    /*
     * ┌───┬───┬───┬───┐
     * │   │   │MSE│   │
     * ├───┼───┼───┼───┤
     * │   │Lmb│Mmb│Rmb│
     * ├───┼───┼───┼───┤
     * │   │ ↑ │   │ w │
     * ├───┼───┼───┤ ↑ │
     * │ ← │   │ → │   │
     * ├───┼───┼───┼───┤
     * │   │ ↓ │   │ w │
     * ├───┴───┼───┤ ↓ │
     * │   >   │>>>│   │
     * └───────┴───┴───┘
     */
    [2] = LAYOUT_ortho_6x4(
        XXXXXXX, XXXXXXX, TG(2),   _______,
        XXXXXXX, KC_BTN1, KC_BTN3, KC_BTN2,
        XXXXXXX, KC_MS_U, XXXXXXX,
        KC_MS_L, XXXXXXX, KC_MS_R, KC_WH_U,
        XXXXXXX, KC_MS_D, XXXXXXX,
        KC_ACL0,          KC_ACL2, KC_WH_D
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_rp(keycode, record)) {
        return false;
    }

    return true;
}
