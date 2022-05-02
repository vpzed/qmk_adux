#include QMK_KEYBOARD_H

const uint16_t PROGMEM esc_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM bksp_combo[] = {KC_U, KC_Y, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(bksp_combo, KC_BSPC)
    };