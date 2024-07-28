#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_DEL, KC_LCTL, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_MINS, KC_LALT, KC_LSFT, KC_ENT, MO(2), MO(1), KC_SPC, KC_RGUI),
	[1] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_WH_U, KC_CIRC, KC_BTN1, KC_BTN2, KC_DLR, KC_NO, KC_BSPC, KC_NO, KC_TILD, KC_DQUO, KC_END, KC_PGDN, KC_WH_D, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_DEL, KC_LCTL, KC_NO, KC_NO, KC_LSFT, KC_LGUI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_ENT, MO(3), KC_TRNS, KC_NO, KC_NO),
	[2] = LAYOUT_split_3x6_3(KC_CIRC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_PLUS, KC_SLSH, KC_LCBR, KC_LBRC, KC_LPRN, KC_LT, KC_GT, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, KC_QUOT, KC_LSFT, KC_EXLM, KC_ASTR, KC_GRV, KC_DLR, KC_PERC, KC_AMPR, KC_QUES, KC_HASH, KC_PIPE, KC_AT, KC_EQL, KC_NO, KC_NO, KC_TRNS, MO(3), KC_SPC, KC_LCTL),
	[3] = LAYOUT_split_3x6_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_BRID, KC_BRIU, KC_WBAK, KC_WFWD, KC_NO, KC_MNXT, KC_MPLY, KC_MUTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_AGIN, KC_NO, KC_MPRV, KC_VOLU, KC_VOLD, TG(4), TG(5), TG(6), KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_PAST, KC_PSLS, KC_NO, KC_NUM, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_PPLS, KC_PDOT, KC_PCMM, KC_NO, KC_P4, KC_P5, KC_P6, KC_PAST, KC_PSLS, KC_NO, KC_NO, KC_NO, KC_PMNS, KC_PEQL, KC_NO, KC_P0, KC_P1, KC_P2, KC_P3, KC_NO, KC_EQL, KC_NO, KC_SPC, KC_NO, TO(0), KC_PENT, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, TO(0), KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LALT, KC_LSFT, KC_ENT, MO(2), MO(1), KC_SPC, KC_LGUI),
	[6] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, BL_TOGG, BL_BRTG, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO, RGB_M_P, RGB_M_R, RGB_M_K, RGB_M_X, RGB_M_SN, KC_NO, KC_NO, KC_NO, TO(0), TO(0), KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





