/*
Copyright 2012 Mike Bannister <mikebannister@gmail.com>

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x1102
#define DEVICE_VER      0x0001
#define MANUFACTURER    Ryan Bates
#define PRODUCT         ElevenKey

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* 9Key PCB default pin-out */
#define MATRIX_ROW_PINS { D4, C6, F4, F7 }
#define MATRIX_COL_PINS { D7, E6, B4, B5 }
#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define ENCODERS_PAD_A { B2, B1 }
#define ENCODERS_PAD_B { B6, B3 }
