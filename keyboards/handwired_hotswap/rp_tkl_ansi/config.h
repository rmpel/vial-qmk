// Copyright 2023 Remon Pel (@rmpel)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROW_PINS { F7, F6, F5, F4, F3, F2 }
#define MATRIX_COL_PINS { C7, C6, C5, C4, C3, C2, C1, C0, D7, E0, D5, D4, D3, D2, D1, D0, E7 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PWM_DRIVER PWMD2
#define BACKLIGHT_PWM_CHANNEL 2
#define BACKLIGHT_PAL_MODE 2
#define BACKLIGHT_PWM_OUTPUT_FREQUENCY 1000 // Increases backlight PWM freq if compiled with an unmerged PR. Does no harm without it.
