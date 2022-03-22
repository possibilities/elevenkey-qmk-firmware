#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-------------------------------.
 * |   A   |   B   |   C   |   D   |
 * |-------+-------+-------+-------|
 * |   E   |   F   |   G   |   H   |
 * |-------+-------+-------+-------|
 * |   I   |   J   |   K   |   L   |
 * |-------+-------+-------+-------|
 * |   X   |       |       |       |
 * `-------------------------------'
 */
[0] = LAYOUT(
  KC_A,       KC_B,      KC_C,      KC_D,
  KC_E,       KC_F,      KC_G,      KC_H,
  KC_I,       KC_J,      KC_K,      KC_L,
  KC_X,       KC_NO,     KC_NO,     KC_NO
)
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    /* TODO */
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_A);
        } else {
            tap_code(KC_B);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_C);
        } else {
            tap_code(KC_D);
        }
    }
    return false;
};
