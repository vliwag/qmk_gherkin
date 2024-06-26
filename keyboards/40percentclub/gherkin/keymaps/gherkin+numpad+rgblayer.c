#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	
	[0] = LAYOUT_ortho_3x10(
	KC_PPLS, KC_P1,  KC_P4,  KC_P7,  KC_PSLS,  KC_NLCK,  KC_F16,  MO(1),   KC_MPRV,  KC_VOLD, 
	KC_P0,   KC_P2,  KC_P5,  KC_P8,  KC_PAST,  KC_F19,   KC_F17,  KC_F14,  KC_MNXT,  KC_VOLU, 
	KC_PENT, KC_P3,  KC_P6,  KC_P9,  KC_PMNS,  KC_F20,   KC_F18,  KC_F15,  KC_MPLY,  KC_MUTE
	),
	
	[1] = LAYOUT_ortho_3x10(
	KC_NO,  RGB_M_P,  RGB_M_SW,  RGB_M_X,  KC_NO,  KC_NO,  RGB_TOG,  KC_TRNS,   RGB_SAD,  RGB_HUD, 
	KC_NO,  RGB_M_B,  RGB_M_SN,  RGB_M_G,  KC_NO,  KC_NO,  RGB_VAD,  RGB_RMOD,  RGB_SAI,  RGB_HUI, 
	KC_NO,  RGB_M_R,  RGB_M_K,   RGB_M_T,  KC_NO,  KC_NO,  RGB_VAI,  RGB_MOD,   RGB_SPD,  RGB_SPI
	)
};


