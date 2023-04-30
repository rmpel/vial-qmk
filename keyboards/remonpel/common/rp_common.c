/* Copyright 2022 @ rp (https://www.rp.com)
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
#include "rp_common.h"

key_combination_t key_comb_list[7] = {
    {2, {KC_LWIN, KC_TAB}},
    {2, {KC_LWIN, KC_E}},
    {3, {KC_LSFT, KC_LCMD, KC_4}},
    {3, {KC_LCTL, KC_LGUI, KC_Q}},
    {2, {KC_LGUI, KC_L}},
    {2, {KC_LCTL, KC_A}},
    {2, {KC_LCTL, KC_E}}
};

uint8_t mod_state;

bool process_record_rp(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();
    switch (keycode) {
        case KC_MISSION_CONTROL:
            if (record->event.pressed) {
                if (mod_state & MOD_MASK_GUI) {
                    set_mods(0);
                    tap_code(KC_F11);
                    set_mods(mod_state);
                    return false;
                }
            }
            break;
        case KC_P00:
            if (record->event.pressed) {
                tap_code(KC_P0);
                tap_code(KC_P0);
                return false;
            }
            break;
        case KC_TASK_VIEW:
        case KC_FILE_EXPLORER:
        case KC_SCREEN_SHOT:
        case KC_LCKM:
        case KC_LCKW:
        case KC_THME:
        case KC_TEND:
            if (record->event.pressed) {
                for (uint8_t i = 0; i < key_comb_list[keycode - KC_TASK_VIEW].len; i++) {
                    register_code(key_comb_list[keycode - KC_TASK_VIEW].keycode[i]);
                }
            } else {
                for (uint8_t i = 0; i < key_comb_list[keycode - KC_TASK_VIEW].len; i++) {
                    unregister_code(key_comb_list[keycode - KC_TASK_VIEW].keycode[i]);
                }
            }
            return false;
    }
    return true;
}
