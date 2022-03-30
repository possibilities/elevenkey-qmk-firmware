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
/* LAYER 2-4
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
),
[2] = LAYOUT(
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS
),
[3] = LAYOUT(
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS,
  KC_TRNS,       KC_TRNS,      KC_TRNS,      KC_TRNS
)
};
