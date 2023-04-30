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

#include "stdint.h"
#include "via.h"
#include "quantum_keycodes.h"


#ifdef VIA_ENABLE
#    define USER_START USER00
#else
#    define USER_START SAFE_RANGE
#endif

enum custom_keycodes {
    KC_MISSION_CONTROL = USER_START,
    KC_LAUNCHPAD,
    KC_TASK_VIEW,
    KC_FILE_EXPLORER,
    KC_SCREEN_SHOT,
    KC_LCKM,
    KC_LCKW,
    KC_TERMINAL_HOME,
    KC_TERMINAL_END,
    KC_P00
};

#define KC_MCTL KC_MISSION_CONTROL
#define KC_LPAD KC_LAUNCHPAD
#define KC_TASK KC_TASK_VIEW
#define KC_FLXP KC_FILE_EXPLORER
#define KC_FILE KC_FILE_EXPLORER
#define KC_SNAP KC_SCREEN_SHOT
#define KC_THME KC_TERMINAL_HOME
#define KC_TEND KC_TERMINAL_END

#define KC_LAUNCHPAD C(KC_DOWN)
#define KC_MISSION_CONTROL C(KC_UP)

typedef struct PACKED {
    uint8_t len;
    uint8_t keycode[3];
} key_combination_t;

bool process_record_rp(uint16_t keycode, keyrecord_t *record);
