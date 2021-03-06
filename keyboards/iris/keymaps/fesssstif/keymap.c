#include "iris.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define LETR 0 // letters
#define AROW 1 // directional arrows
#define SYMB 2 // symbols
#define NUMP 3 // num pad
#define MOUS 4 // mouse control

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LETR] = LAYOUT(
  KC_ESCAPE,RSFT(KC_1),RSFT(KC_2),RSFT(KC_3),RSFT(KC_4),RSFT(KC_5),  RSFT(KC_6),RSFT(KC_7),RSFT(KC_8),RSFT(KC_9),RSFT(KC_0),LGUI(KC_L),
  KC_NO,KC_Q,KC_W,KC_E,KC_R,KC_T,  KC_Y,KC_U,KC_I,KC_O,KC_P,KC_NO,
  KC_LSHIFT,CTL_T(KC_A),SFT_T(KC_S),ALT_T(KC_D),ALGR_T(KC_F),RWIN_T(KC_G),   RWIN_T(KC_H),ALGR_T(KC_J),ALT_T(KC_K),SFT_T(KC_L),RCTL_T(KC_SCLN),KC_RSHIFT,
  KC_LCTRL,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_BSPACE,   KC_TAB,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RCTRL,
  MO(3),MO(1),KC_SPACE,  KC_ENTER,MO(2),MO(4)
  ),

[AROW] = LAYOUT(
  KC_ESCAPE,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,          KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,          KC_NO,KC_NO,KC_UP,KC_PGUP,KC_NO,KC_NO,
  KC_NO,KC_LCTRL,KC_LSHIFT,KC_LALT,KC_RALT,KC_LGUI,         KC_HOME,KC_LEFT,KC_DOWN,KC_RIGHT,KC_END,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_DELETE,          KC_PSCREEN,KC_NO,KC_NO,KC_NO,KC_PGDOWN,KC_NO,KC_NO,
  KC_TRNS,KC_TRNS,KC_APP,         KC_INS,KC_TRNS,KC_TRNS
  ),

[SYMB] = LAYOUT(
  KC_NO,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,          KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_NO,
  KC_NO,KC_0,KC_7,KC_2,KC_QUOT,KC_9,          KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_NO,KC_1,KC_RBRC,KC_5,KC_MINS,KC_6,         KC_LGUI,KC_RALT,KC_LALT,KC_RSHIFT,KC_RCTRL,KC_NO,
  KC_NO,KC_NUBS,KC_3,KC_4,KC_EQL,KC_8,KC_DELETE,          KC_PSCREEN,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_TRNS,KC_TRNS,KC_APP,         KC_INS,KC_TRNS,KC_TRNS
  ),

[NUMP] = LAYOUT(
  KC_NO,KC_F11,KC_F12,KC_F13,KC_F14,KC_F15,           KC_F16,KC_F17,KC_F18,KC_F19,KC_F20,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,            KC_KP_PLUS,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_ASTERISK,KC_NO,
  KC_NO,KC_LCTRL,KC_LSHIFT,KC_LALT,KC_RALT,KC_LGUI,           KC_KP_MINUS,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_SLASH,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_DELETE,            KC_PSCREEN,KC_KP_0,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_DOT,KC_NO,
  KC_TRNS,KC_TRNS,KC_APP,           KC_INS,KC_TRNS,KC_TRNS
  ),

[MOUS] = LAYOUT(
  KC_NO,KC_F11,KC_F12,KC_F13,KC_F14,KC_F15,           KC_F16,KC_F17,KC_F18,KC_F19,KC_F20,KC_NO,
  KC_NO,KC_NO,KC_MS_WH_LEFT,KC_MS_UP,KC_MS_WH_RIGHT,KC_NO,            KC_NO,KC_MS_WH_UP,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_LALT,KC_LCTRL,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_NO,           KC_NO,KC_MS_BTN1,KC_MS_BTN3,KC_MS_BTN2,KC_LSHIFT,KC_NO,
  KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_DELETE,            KC_PSCREEN,KC_NO,KC_MS_WH_DOWN,KC_NO,KC_NO,KC_NO,KC_NO,
  KC_TRNS,KC_TRNS,KC_APP,           KC_INS,KC_TRNS,KC_TRNS
  ),
};