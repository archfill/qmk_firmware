/*
Copyright 2022 aki27

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

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "quantum.h"
#include "keymap.h"

// Ignore this key (NOOP)
// XXXXXXX
// Use the next lowest non-transparent key
// _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,              KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
        KC_A,     KC_S,     KC_D,     KC_F,     KC_G,              KC_H,     KC_J,     KC_K,     KC_L,     KC_MINS,
        KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,              KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
                  RGB_MOD,  MT_G_EN,  L2_SPC,   KC_LCTL,  MS_BTN1, MT_S_BS,  L1_ENT,   MT_A_JA,  RGB_RMOD
    ),
    [1] = LAYOUT(
        KC_BSLS,  KC_CIRC,  KC_EXLM,  KC_AMPR,  KC_PIPE,           KC_AT,    KC_EQL,   KC_PLUS,  KC_ASTR,  KC_PERC,
        KC_HASH,  KC_DLR,   KC_DQUO,  KC_QUOT,  KC_TILD,           KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_GRV,
        KC_LSFT,  KC_COLN,  KC_LPRN,  KC_LCBR,  KC_LBRC,           KC_RBRC,  KC_RCBR,  KC_RPRN,  KC_SCLN,  XXXXXXX,
                  RGB_MOD,  KC_LALT,  MO(3),    KC_LSFT,  MS_BTN1, XXXXXXX,  XXXXXXX,  XXXXXXX,  RGB_RMOD
    ),
    [2] = LAYOUT(
        KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,             KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
        KC_1,     KC_2,     KC_3,     KC_4,     KC_5,              KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
        KC_F11,   XXXXXXX,  XXXXXXX,  M_S_TAB,  KC_TAB,            KC_ESC,   KC_DEL,   _______,  _______,  KC_F12,
                  RGB_MOD,  XXXXXXX,  XXXXXXX,  XXXXXXX,  MS_BTN1, M_S_ENT,  MO(3),    KC_LCTL,  RGB_RMOD
    ),
    [3] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  M_CS_T,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  M_A_GRV,
        M_SG_4,   XXXXXXX,  M_CS_SC,  M_A_SC,   M_C_UP,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_INS,
                  RGB_MOD,  EE_CLR,   _______,  _______,  MS_BTN1, _______,  EE_CLR,   QK_BOOT,  RGB_RMOD
    ),
    [4] = LAYOUT(
        _______,  _______,  _______,  MS_BTN2,  MS_BTN3,           MS_BTN3,  MS_BTN2,  _______,  _______,  TO(5),
        _______,  _______,  _______,  MS_BTN4,  MS_BTN1,           MS_BTN1,  MS_BTN4,  _______,  _______,  _______,
        _______,  _______,  _______,  MS_BTN5,  _______,           _______,  MS_BTN5,  _______,  _______,  _______,
                  _______,  _______,  _______,  SCRL_MO,  XXXXXXX, SCRL_MO,  _______,  _______,  _______
    ),
    [5] = LAYOUT(
        KC_TG_OS, _______,  _______,  MS_BTN2,  MS_BTN3,           MS_BTN3,  MS_BTN2,  MS_SLDV,  _______,  SCRL_IN,
        KC_LGUI,  _______,  _______,  MS_BTN4,  MS_BTN1,           MS_BTN1,  MS_BTN4,  MS_SLDH,  _______,  CPI_SW,
        KC_LSFT,  _______,  RGB_TOG,  MS_BTN5,  _______,           _______,  MS_BTN5,  MS_L_LK,  ROT_L15,  ROT_R15,
                  RGB_MOD,  EE_CLR,   TO(0),    SCRL_MO,  XXXXXXX, SCRL_MO,  TO(0),    QK_BOOT,  RGB_RMOD
    ),
    [6] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
    ),
    [7] = LAYOUT(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,           XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX
    )
};


keyevent_t encoder1_ccw = {
    .key = (keypos_t){.row = 3, .col = 0},
    .pressed = false
};

keyevent_t encoder1_cw = {
    .key = (keypos_t){.row = 3, .col = 9},
    .pressed = false
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            encoder1_cw.pressed = true;
            encoder1_cw.time = (timer_read() | 1);
            action_exec(encoder1_cw);
        } else {
            encoder1_ccw.pressed = true;
            encoder1_ccw.time = (timer_read() | 1);
            action_exec(encoder1_ccw);
        }
    }

    return true;
}

void matrix_scan_user(void) {

    if (IS_PRESSED(encoder1_ccw)) {
        encoder1_ccw.pressed = false;
        encoder1_ccw.time = (timer_read() | 1);
        action_exec(encoder1_ccw);
    }

    if (IS_PRESSED(encoder1_cw)) {
        encoder1_cw.pressed = false;
        encoder1_cw.time = (timer_read() | 1);
        action_exec(encoder1_cw);
    }

}

layer_state_t layer_state_set_user(layer_state_t state) {

    // switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
    //     case 3:
    //         // Auto enable scroll mode when the highest layer is 3
    //         // remove_auto_mouse_target must be called to adjust state *before* setting enable
    //         state = remove_auto_mouse_layer(state, false);
    //         set_auto_mouse_enable(false);
    //         cocot_set_scroll_mode(true);
    //         break;
    //     default:
    //         set_auto_mouse_enable(true);
    //         cocot_set_scroll_mode(false);
    //         break;
    // }

    switch (get_highest_layer(state)) {
    case 1:
        //rgblight_sethsv_range(HSV_YELLOW, 0, 9);
        set_auto_mouse_enable(false);
        cocot_set_scroll_mode(true);
        break;
    case 2:
        //rgblight_sethsv_range(HSV_GREEN, 0, 9);
        set_auto_mouse_enable(false);
        cocot_set_scroll_mode(true);
        break;
    case 3:
        //rgblight_sethsv_range(HSV_CYAN, 0, 9);
        set_auto_mouse_enable(true);
        cocot_set_scroll_mode(false);
        break;
    case 4:
        //rgblight_sethsv_range(HSV_AZURE, 0, 9);
        set_auto_mouse_enable(true);
        cocot_set_scroll_mode(false);
        break;
    case 5:
        //rgblight_sethsv_range(HSV_BLUE, 0, 9);
        set_auto_mouse_enable(true);
        cocot_set_scroll_mode(false);
        break;
    case 6:
        //rgblight_sethsv_range(HSV_MAGENTA, 0, 9);
        set_auto_mouse_enable(true);
        cocot_set_scroll_mode(false);
        break;
    case 7:
        //rgblight_sethsv_range(HSV_MAGENTA, 0, 9);
        set_auto_mouse_enable(true);
        cocot_set_scroll_mode(false);
        break;
    default:
        //rgblight_sethsv_range(HSV_RED, 0, 9);
        set_auto_mouse_enable(true);
        cocot_set_scroll_mode(false);
        break;
    }
    //rgblight_set_effect_range( 9, 36);
  return state;
};

#ifdef RGB_MATRIX_ENABLE

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    int is_layer = get_highest_layer(layer_state|default_layer_state);
    HSV hsv = {0, 255, rgblight_get_val()};
    if (is_layer == 1) {
      hsv.h = 128; //CYAN
    } else if (is_layer == 2)  {
      hsv.h = 85; //GREEN
    } else if (is_layer == 3)  {
      hsv.h = 43; //YELLOW
    } else if (is_layer == 4)  {
      hsv.h = 11; //CORAL
    } else if (is_layer == 5)  {
      hsv.h = 0; //RED
    } else if (is_layer == 6)  {
      hsv.h = 64; //CHARTREUSE
    } else {
      hsv.h = 191; //PURPLE
    }
    RGB rgb = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i <= led_max; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], 0x02)) {
          rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
    return false;
};

#endif

void pointing_device_init_user(void) {
    // set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    return mouse_report;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Tap Dance
int cur_dance(tap_dance_state_t *state) {
  if (state->count == 1) {
    if (!state->pressed) return SINGLE_TAP;
    else return SINGLE_HOLD;
  }
  else if (state->count == 2) {
    return DOUBLE_TAP;
  }
  else return 6; //magic number. At some point this method will expand to work for more presses
}

//instanalize an instance of 'tap' for the 'x' tap dance.
static td_tap_t xtap_state = {
  .is_press_action = true,
  .state = 0
};

void x_finished_1(tap_dance_state_t *state, void *user_data) {
  xtap_state.state = cur_dance(state);
  switch (xtap_state.state) {
    case SINGLE_TAP:                     // 単押しで「英数」と「無変換」　Lowerレイヤーがトグルされている場合はレイヤーをオフにする
        register_code(KC_Q);
        break;
    case DOUBLE_TAP:                    // ダブルタップでLowerレイヤーをトグル
        register_code(KC_ESCAPE);
        break;
  }
}

void x_reset_1(tap_dance_state_t *state, void *user_data) {
  switch (xtap_state.state) {
    case SINGLE_TAP:
        unregister_code(KC_Q);
        break;
    case DOUBLE_TAP:
        unregister_code(KC_ESCAPE);
        break;
  }
  xtap_state.state = 0;
}

// void x_finished_2(tap_dance_state_t *state, void *user_data) {
//   xtap_state.state = cur_dance(state);
//   switch (xtap_state.state) {
//     case SINGLE_TAP:                     // 単押しで「英数」と「無変換」　Lowerレイヤーがトグルされている場合はレイヤーをオフにする
//         register_code(KC_BSPC);
//         break;
//     case SINGLE_HOLD:                   // 長押しでLowerレイヤーをオンにする
//         register_code(KC_LALT);
//         break;
//     case DOUBLE_TAP:                    // ダブルタップでLowerレイヤーをトグル
//         register_code(KC_BSPC);
//         break;
//   }
// }
//
// void x_reset_2(tap_dance_state_t *state, void *user_data) {
//   switch (xtap_state.state) {
//     case SINGLE_TAP:
//         unregister_code(KC_BSPC);
//         break;
//     case SINGLE_HOLD:
//         unregister_code(KC_LALT);
//         break;
//     case DOUBLE_TAP:
//         unregister_code(KC_BSPC);
//         break;
//   }
//   xtap_state.state = 0;
// }

tap_dance_action_t tap_dance_actions[] = {
    [X_TAP_DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished_1, x_reset_1),
    // [X_TAP_DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, x_finished_2, x_reset_2),
};
