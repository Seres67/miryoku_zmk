// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_ALTERNATIVES_TAP_GAMING                                        \
  &kp LCTRL, &kp Q, &kp W, &kp E, &kp R, &kp T, &kp Y, &kp U, &kp I, &kp O,    \
      &kp LSHFT, &kp A, &kp S, &kp D, &kp F, &kp G, &kp H, &kp J, &kp K,       \
      &kp Lt, &kp LALT, &kp Z, &kp X, &kp C, &kp V, &kp B, &kp N, &kp M,       \
      &kp COMMA, &kp DOT, U_NP, U_NP, &kp ESC, &kp SPACE, &kp TAB, &kp RET,    \
      &kp BSPC, &kp DEL, U_NP, U_NP

#define MIRYOKU_LAYER_LIST                                                     \
  MIRYOKU_X(BASE, "Base")                                                      \
  MIRYOKU_X(EXTRA, "Extra")                                                    \
  MIRYOKU_X(TAP, "Tap")                                                        \
  MIRYOKU_X(BUTTON, "Button")                                                  \
  MIRYOKU_X(NAV, "Nav")                                                        \
  MIRYOKU_X(MOUSE, "Mouse")                                                    \
  MIRYOKU_X(MEDIA, "Media")                                                    \
  MIRYOKU_X(NUM, "Num")                                                        \
  MIRYOKU_X(SYM, "Sym")                                                        \
  MIRYOKU_X(FUN, "Fun")                                                        \
  MIRYOKU_X(GAME, "Game")

#define U_BASE 0
#define U_EXTRA 1
#define U_TAP 2
#define U_BUTTON 3
#define U_NAV 4
#define U_MOUSE 5
#define U_MEDIA 6
#define U_NUM 7
#define U_SYM 8
#define U_FUN 9
#define U_GAME 10

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
