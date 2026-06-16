// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤ + │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┴───┼───┤Ent│
     * │   0   │ . │   │
     * └───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_4x4(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,
        KC_F5,   KC_F6,   KC_F7,   KC_F8
        KC_F9,   KC_F10,   KC_F11,   KC_F12,
        KC_F13,   KC_F14,   KC_F15    KC_F16
    )
};

#ifdef OLED_ENABLE

bool oled_task_user(){

    oled_set_cursor(0,1);
    oled_write("Macropad!", false);
    return false;
}

#endif