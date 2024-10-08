// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYER_GAME \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,          \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp FSLH,          \
U_NP,              U_NP,              &kp LALT,          &kp LCTRL,         &kp SPACE,         &kp RET,           &mo 1,             &mo 2,             U_NP,              U_NP

#define MIRYOKU_LAYER_GAME2 \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SEMI,          \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp FSLH,          \
U_NP,              U_NP,              &kp LALT,          &kp LCTRL,         &kp SPACE,         &kp RET,           &mo 1,             &mo 2,             U_NP,              U_NP

#define XXX &none

#define MIRYOKU_LAYERMAPPING_BASE(\
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp BSPC \
&kp LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp SQT  \
&kp LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp ESC  \
                     U_LT(U_MEDIA, ESC) U_LT(U_NAV, TAB) U_LT(U_MOUSE, SPACE)       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&ext_power EP_ON  K00  K01  K02  K03  &u_to_U_GAME        K05  K06  K07  K08  K09  &ext_power EP_ON \
&ext_power EP_OFF  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  &ext_power EP_OFF \
XXX  K20  K21  K22  K23  K24                 K25  K26  K27  K28  K29  XXX \
               K32  K33  K34                 K35  K36  K37

#define MIRYOKU_LAYERMAPPING_GAME( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC &kp TAB    &kp Q   &kp W      &kp E      &kp R                 K05  K06  K07  K08  K09  &kp BSPC \
&kp G   &kp LSHFT  &kp A   &kp S      &kp D      &kp F                 K15  K16  K17  K18  K19  &kp SQT  \
&kp B   &kp LCTRL  &kp Z   &kp X      &kp C      &kp V                 K25  K26  K27  K28  K29  &kp ESC \
                           U_LT(U_GAME2, LALT)   &kp C  &kp SPACE             K35  K36  K37

#define MIRYOKU_LAYERMAPPING_GAME2( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TILDE   &kp N1     &kp N2  &kp N3    &kp N4   &kp N5             K05  K06  K07  K08  K09  &kp BSPC \
&kp N5   &kp N6  &kp N7   &kp N8      &kp N9      &kp N0                 K15  K16  K17  K18  K19  &kp SQT  \
&kp N5   &kp G  &kp J   &kp I      &kp M      &kp T                 K25  K26  K27  K28  K29  &kp ESC \
                           XXX   &kp C  &kp SPACE             K35  K36  K37

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAME2,   "Game2")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10
#define U_GAME2   11
