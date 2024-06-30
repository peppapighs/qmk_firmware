/*
Copyright 2024 Pontakorn Prasertsuk <ptk.prasertsuk@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM_THUMB 150

#define HOLD_ON_OTHER_KEY_PRESS

#define PERMISSIVE_HOLD

#define COMBO_TERM 40

#define ONESHOT_TAP_TOGGLE 3
#define ONESHOT_TIMEOUT 2000

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// Underglow
/*
#undef RGBLIGHT_LED_COUNT
#define RGBLIGHT_LED_COUNT 14    // Number of LEDs
#define RGBLIGHT_SLEEP
*/
