include "keymap_common.h"

#define TAPPING_TOGGLE 2
#define TAPPING_TERM 200
#define ONESHOP_TIMEOUT 500

#define DEFAULT_LAYER 0
#define FUN_LAYER 1
#define MACRO_LAYER 2
#define MOUSE_LAYER 3
#define NUM_LAYER 4
#define EMPTY_LAYER 4

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |F11|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |ShiftF12|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift F13 |
     * |-----------------------------------------------------------|
     * |FN0 |Gui |Alt |      Space             |Alt |Gui |Ctrl|FN1 |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        FN11, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NO  ,ENT , \
        FN12,NO,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,NO  ,FN13, \
        FN0, LGUI,LALT,             SPC,                 RALT, RGUI,RCTL,FN1 ),

    /* Keymap 1: Fn Layer
     * ,-----------------------------------------------------------.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Delete |
     * |-----------------------------------------------------------|
     * |     |FN1|FN2|FN3|FN4|   |   |Vou|Ins|   |Psc|Slk|Pau|     |
     * |-----------------------------------------------------------|
     * |Caps  |WFv|MPL|VoD|MFd|Cal|Lef|Dow|Up |Rig|PgD|PgD|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |MPv|MRw|MNx|Mut|Hom|End|   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |          FN5           |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,FN1 ,FN2 ,FN3 ,TRNS,TRNS,TRNS,VOLU,INS, TRNS,PSCR,SLCK,PAUS,TRNS, \
        CAPS,WFAV,MPLY,VOLD,MFFD,CALC,LEFT,DOWN,UP  ,RGHT,PGDN,PGUP,NO  ,TRNS, \
        TRNS,NO  ,TRNS,TRNS,TRNS,MPRV,MRWD,MNXT,MUTE,HOME,END ,TRNS,NO  ,TRNS, \
        TRNS,TRNS,TRNS,          FN5 ,                    TRNS,TRNS,TRNS,TRNS),

    /* Keymap 2: Macro Layer
     * ,-----------------------------------------------------------.
     * |FN5|   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |FN9|   |   |     |
     * |-----------------------------------------------------------|
     * |      |FN8|   |   |F10|FN6|   |   |   |FN8|   |   |        |
     * |-----------------------------------------------------------|
     * |        |SLP|PWR|   |   |   |FN7|   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |FN5 |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        FN5 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN9 ,TRNS,TRNS,TRNS, \
        TRNS,FN8 ,TRNS,TRNS,FN10,FN6 ,TRNS,TRNS,TRNS,FN8 ,TRNS,TRNS,NO  ,TRNS, \
        TRNS,NO  ,SLEP,PWR ,TRNS,TRNS,TRNS,FN7 ,TRNS,TRNS,TRNS,TRNS,NO  ,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,FN5 ),

     /* Keymap 3: Arrow Layer
     * ,-----------------------------------------------------------.
     * |FN5|   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |WLf|WDn|WUp|WRg|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |Ac0|Ac1|Ac2|   |Lef|Dow|Up |Rig|   |   | Btn1   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |Bn2|Bn3|   |   |   |      |   |
     * |-----------------------------------------------------------|
     * |    |    |    |          Btn1          |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        FN5 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,ACL0,ACL1,ACL2,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,TRNS,NO  ,BTN1, \
        TRNS,NO  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,BTN2,BTN3,BTN4,BTN5,NO  ,TRNS, \
        TRNS,TRNS,TRNS,          BTN1,                    TRNS,TRNS,TRNS,TRNS),

    /* Keymap 4: Num Layer
     * ,-----------------------------------------------------------.
     * |FN5|   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |KP7|KP8|KP9|   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |Plu|Min|Mul|Div|Ent|Dot|KP4|KP5|KP6|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |KP0|KP1|KP2|KP3|   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        FN5 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,KP_7,KP_8,KP_9,TRNS,TRNS,TRNS,TRNS, \
        TRNS,PPLS,PMNS,PAST,PSLS,PENT,PDOT,KP_4,KP_5,KP_6,TRNS,TRNS,NO  ,TRNS, \
        TRNS,NO  ,TRNS,TRNS,TRNS,TRNS,TRNS,KP_0,KP_1,KP_2,KP_3,TRNS,NO  ,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Keymap 5: Empty Layer
     * ,-----------------------------------------------------------.
     * |FN5|   |   |   |   |   |   |   |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |          |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP(
        FN5 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO  ,TRNS, \
        TRNS,NO  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,NO  ,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS ),
};
/*
 * Macro definition
 */
enum macro_id {
    EMAIL_G,
    EMAIL_N,
    ACCOUNT,
    PASSWD,
    FGHT,
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case EMAIL_G:
            return (record->event.pressed ?
                    MACRO( T(L),T(E),T(O),T(D),T(R),T(E),T(A),T(M),T(2),T(0),T(0),T(8),D(LSFT),T(2),U(LSFT),T(G),T(M),T(A),T(I),T(L),T(DOT),T(C),T(O),T(M), END ) :
                    layer_off(MACRO_LAYER));         // turn of macro layer after execute macro
        case EMAIL_N:
            return (record->event.pressed ?
                    MACRO( T(L),T(E),T(O),T(D),T(R),T(E),T(A),T(M),T(2),T(0),T(0),T(8),D(LSFT),T(2),U(LSFT),T(1),T(2),T(6),T(DOT),T(C),T(O),T(M), END ) :
                    layer_off(MACRO_LAYER));
        case ACCOUNT:
            return (record->event.pressed ?
                    MACRO(  T(L),T(E),T(O),T(D),T(R),T(E),T(A),T(M), END ) :
                    layer_off(MACRO_LAYER));
            /* MACRO( T(FN1), W(255), END )); */     // it doesn't work, not sure why
        case PASSWD:
            return (record->event.pressed ?
                    MACRO( T(P),T(A),T(S),T(S),T(W),T(D), END ) :
                    layer_off(MACRO_LAYER));
        case FGHT:
            return (record->event.pressed ?
                    MACRO( T(F),T(O),T(G),T(L),T(I),T(G),T(H),T(T), END ) :
                    layer_off(MACRO_LAYER));
    }
    return MACRO_NONE;
}

enum function_id {
    TRICKY_ESC = 0,
};

#define MODS_SHIFT_MASK (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    static uint8_t tricky_esc_registered;
    switch (id) {
        case TRICKY_ESC:
            if (record->event.pressed) {
                if (get_mods() & MODS_SHIFT_MASK) {
                    tricky_esc_registered = KC_GRV;
                }
                else {
                    tricky_esc_registered = KC_ESC;
                }
                register_code(tricky_esc_registered);
                send_keyboard_report();
            }
            else {
                unregister_code(tricky_esc_registered);
                send_keyboard_report();
            }
            break;
    }
}
const uint16_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_TAP_TOGGLE(FUN_LAYER),   // toggle Fn overlay
    [1] = ACTION_LAYER_TOGGLE(MACRO_LAYER),     // toggle macros overlay
    [2] = ACTION_LAYER_TOGGLE(MOUSE_LAYER),     // toggle mouse overlay
    [3] = ACTION_LAYER_TOGGLE(NUM_LAYER),       // toggle number overlay
    [4] = ACTION_LAYER_TOGGLE(EMPTY_LAYER),     // toggle empty overlay
    [5] = ACTION_LAYER_CLEAR(ON_RELEASE),       // clear all overlay (ON_PRESS doesn't work)
    [6] = ACTION_MACRO(EMAIL_G),                // MACRO gemail
    [7] = ACTION_MACRO(EMAIL_N),                // MACRO 126email
    [8] = ACTION_MACRO(ACCOUNT),                // MACRO account
    [9] = ACTION_MACRO(PASSWD),                 // MACRO password
    [10] = ACTION_MACRO(FGHT),                  // MACRO foglight
    [11] = ACTION_FUNCTION(TRICKY_ESC),         // MACRO foglight
    [12] = ACTION_MODS_ONESHOT(MOD_LSFT),       // oneshot shift
    [13] = ACTION_MODS_ONESHOT(MOD_RSFT),
};



#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
