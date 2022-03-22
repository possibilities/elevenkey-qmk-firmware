#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-------------------------------.
 * |  L1   | Prev  | Next  | Play  |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * `-------------------------------'
 */
[0] = LAYOUT(
  TG(1),       KC_MPRV,    KC_MNXT,    KC_MPLY,
  KC_NO,       KC_NO,      KC_NO,      KC_NO,
  KC_NO,       KC_NO,      KC_NO,      KC_NO,
  KC_NO,       KC_NO,      KC_NO,      KC_NO
),
/* LAYER 1
 * ,-------------------------------.
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * |-------+-------+-------+-------|
 * |       |       |       |       |
 * `-------------------------------'
 */
[1] = LAYOUT(
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS
)
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (get_highest_layer(layer_state|default_layer_state) > 0) {
          if (clockwise) {
              tap_code_delay(KC_MS_WH_RIGHT, 10);
          } else {
              tap_code_delay(KC_MS_WH_LEFT, 10);
          }
        } else {
          if (clockwise) {
              tap_code_delay(KC_MS_WH_DOWN, 10);
          } else {
              tap_code_delay(KC_MS_WH_UP, 10);
          }
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code_delay(KC_VOLU, 10);
        } else {
            tap_code_delay(KC_VOLD, 10);
        }
    }
    return false;
};
