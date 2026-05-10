// Copyright 2023 Ryan Neff (@JellyTitan)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// Haptics
#define SOLENOID_PIN GP2
#define SOLENOID_DEFAULT_DWELL 20
#define HAPTIC_OFF_IN_LOW_POWER 1

// The left hand matrix at 0,0 is not used, 'Esc' is at 0,1.
#define BOOTMAGIC_ROW 3
#define BOOTMAGIC_COLUMN 4

// // When flashing, the right hand is perceived as the left hand, 'j' is at 3,4 on the swapped matrix.
// #define BOOTMAGIC_LITE_ROW_RIGHT 3
// #define BOOTMAGIC_LITE_COLUMN_RIGHT 4
