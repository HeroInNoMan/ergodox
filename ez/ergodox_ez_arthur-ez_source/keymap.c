#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  BP_LSPO,
  BP_RSPC,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    BP_DLR,         BP_DQOT,        BP_LGIL,        BP_RGIL,        BP_LPRN,        BP_RPRN,        BP_AT,                                          BP_PERC,        BP_AT,          BP_PLUS,        BP_MINS,        BP_SLSH,        BP_ASTR,        BP_EQL,
    KC_TAB,         BP_B,           BP_ECUT,        BP_P,           BP_O,           BP_EGRV,        KC_BSPACE,                                      KC_BSPACE,      BP_DCRC,        BP_V,           BP_D,           BP_L,           BP_J,           BP_Z,
    KC_LCTRL,       BP_A,           BP_U,           BP_I,           BP_E,           BP_COMM,                                                                        BP_C,           BP_T,           BP_S,           BP_R,           BP_N,           LCTL_T(BP_M),
    KC_LSHIFT,      BP_AGRV,        BP_Y,           BP_X,           BP_DOT,         BP_K,           KC_ENTER,                                       KC_ENTER,       BP_APOS,        BP_Q,           BP_G,           BP_H,           BP_F,           KC_RSHIFT,
    MO(1),          BP_ECIR,        KC_CAPSLOCK,    KC_LGUI,        KC_LALT,                                                                                                        KC_RALT,        KC_APPLICATION, KC_WWW_HOME,    BP_W,           BP_CCED,
                                                                                                    KC_INSERT,      KC_AUDIO_MUTE,  KC_SYSTEM_SLEEP,LGUI(KC_INSERT),
                                                                                                                    KC_AUDIO_VOL_UP,LGUI(BP_L),
                                                                                    KC_SPACE,       KC_ESCAPE,      KC_AUDIO_VOL_DOWN,TO(1),          KC_DELETE,      MO(1)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_BTN3,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_PGUP,        KC_F12,
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_BTN4,                                                                     KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDOWN,      KC_F13,
    KC_TRANSPARENT, LALT(KC_F4),    KC_MS_WH_LEFT,  KC_SCROLLLOCK,  KC_MS_WH_RIGHT, KC_MS_BTN5,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK,    KC_MEDIA_EJECT, KC_WWW_FORWARD, KC_TRANSPARENT, KC_F14,
    KC_TRANSPARENT, LSFT(KC_DELETE),LCTL(KC_INSERT),LSFT(KC_INSERT),KC_TRANSPARENT,                                                                                                 KC_MS_BTN1,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F15,
                                                                                                    KC_CALCULATOR,  KC_PAUSE,       KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LALT(KC_PSCREEN),KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,     TO(2),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    WEBUSB_PAIR,    LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),     LSFT(KC_6),                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_NUMLOCK,     KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_6),     LSFT(KC_7),     LSFT(KC_8),     LSFT(KC_9),     LSFT(KC_0),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, LSFT(KC_1),     LSFT(KC_2),     LSFT(KC_3),     LSFT(KC_4),     LSFT(KC_5),                                                                     KC_TRANSPARENT, KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_ENTER,    KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(3),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_F2,          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,
    KC_TRANSPARENT, KC_TRANSPARENT, BP_R,           KC_TRANSPARENT, KC_TRANSPARENT, BP_T,           BP_G,                                           KC_BSPACE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, BP_M,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, BP_S,           KC_TRANSPARENT, BP_D,           BP_V,           KC_TRANSPARENT, BP_F,                                           KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    BP_H,           BP_C,           BP_N,           BP_L,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_7,           KC_0,           KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    BP_W,           KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, BP_Z,           TO(0),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case BP_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, BP_LPRN);
      return false;
    case BP_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_TRNS, BP_RPRN);
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


