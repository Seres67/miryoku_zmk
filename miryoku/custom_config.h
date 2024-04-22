// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN

#define XXX &none

#define MIRYOKU_LAYER_GAME                                                     \
  &kp LCTRL, &kp Q, &kp W, &kp E, &kp R, &u_to_U_BASE, U_NA, U_NA, U_NA, U_NA, \
      &kp LSHFT, &kp A, &kp S, &kp D, &kp F, U_NA, U_NA, U_NA, U_NA, U_NA,     \
      &kp LALT, &kp Z, &kp X, &kp C, &kp V, U_NA, U_NA, U_NA, U_NA, U_NA,      \
      U_NP, U_NP, &kp ESC, &kp SPACE, &kp TAB, &kp RET, &kp BSPC, &kp DEL,     \
      U_NP, U_NP

#define MIRYOKU_LAYER_NAV                                                      \
  U_BOOT, &u_to_U_TAP, &u_to_U_EXTRA, &u_to_U_BASE, &u_to_U_GAME, U_RDO,       \
      U_PST, U_CPY, U_CUT, U_UND, &kp LGUI, &kp LALT, &kp LCTRL, &kp LSHFT,    \
      U_NA, &u_caps_word, &kp LEFT, &kp DOWN, &kp UP, &kp RIGHT, U_NA,         \
      &kp RALT, &u_to_U_NUM, &u_to_U_NAV, U_NA, &kp INS, &kp HOME, &kp PG_DN,  \
      &kp PG_UP, &kp END, U_NP, U_NP, U_NA, U_NA, U_NA, &kp RET, &kp BSPC,     \
      &kp DEL, U_NP, U_NP

#define MIRYOKU_LAYOUTMAPPING_CORNE(                                           \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)                          \
  XXX K00 K01 K02 K03 K04 K05 K06 K07 K08 K09 XXX XXX K10 K11 K12 K13 K14 K15  \
      K16 K17 K18 K19 XXX XXX K20 K21 K22 K23 K24 K25 K26 K27 K28 K29 XXX K32  \
          K33 K34 K35 K36 K37

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

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

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
