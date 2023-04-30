/* Copyright 2023 Remon Pel
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

#pragma once

#include "quantum.h"

#define LAYOUT( \
    K00,         K01,  K02,   K03,   K04,   K05,  K06,   K07,   K08,   K09,  K10,  K11,   K12,  K13,   K14,   K15,   \
    K20,  K21,   K22,  K23,   K24,   K25,   K26,  K27,   K28,   K29,   K30,  K31,  K32,   K34,  K35,   K36,   K37,   \
    K42,  K43,   K44,  K45,   K46,   K47,   K48,  K49,   K50,   K51,   K52,  K53,  K54,   K55,  K56,   K57,   K58,   \
    K63,  K64,   K65,  K66,   K67,   K68,   K69,  K70,   K71,   K72,   K73,  K74,         K76,                       \
    K81,         K83,  K84,   K85,   K86,   K87,  K88,   K89,   K90,   K91,  K92,         K93,         K95,          \
    K100, K101,  K102,                      K103,                      K104, K105, K106,  K107, K108,  K109,  K110   \
) { \
  { K00,  KC_NO, K01,  K02,   K03,   K04,   K05,  K06,   K07,   K08,   K09,  K10,  K11,   K12,  K13,   K14,   K15    }, \
  { K20,  K21,   K22,  K23,   K24,   K25,   K26,  K27,   K28,   K29,   K30,  K31,  K32,   K34,  K35,   K36,   K37    }, \
  { K42,  K43,   K44,  K45,   K46,   K47,   K48,  K49,   K50,   K51,   K52,  K53,  K54,   K55,  K56,   K57,   K58    }, \
  { K63,  K64,   K65,  K66,   K67,   K68,   K69,  K70,   K71,   K72,   K73,  K74,  KC_NO, K76,  KC_NO, KC_NO, KC_NO  }, \
  { K81,  KC_NO, K83,  K84,   K85,   K86,   K87,  K88,   K89,   K90,   K91,  K92,  KC_NO, K93,  KC_NO, K95,   KC_NO  }, \
  { K100, K101,  K102, KC_NO, KC_NO, KC_NO, K103, KC_NO, KC_NO, KC_NO, K104, K105, K106,  K107, K108,  K109,  K110   }  \
}


