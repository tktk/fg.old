#ifndef FG_WINDOW_KEY_H
#define FG_WINDOW_KEY_H

typedef enum FgKey
{
    FG_KEY_INVALID = 0x0,

    FG_KEY_SPACE = 0x20,

    FG_KEY_EXCLAMATION, // !
    FG_KEY_DOUBLE_QUOTES,   // "
    FG_KEY_NUMBER_SIGN,     // #
    FG_KEY_DOLLAR,  // $
    FG_KEY_PARCENT,     // %
    FG_KEY_AMPERSAND,   // &
    FG_KEY_APOSTROPHE,  // '
    FG_KEY_PAREN_LEFT,  // (
    FG_KEY_PAREN_RIGHT, // )
    FG_KEY_ASTERISK,    // *
    FG_KEY_PLUS,    // +
    FG_KEY_COMMA,   // ,
    FG_KEY_MINUS,   // -
    FG_KEY_PERIOD,  // .
    FG_KEY_SLASH,   // /

    FG_KEY_0,
    FG_KEY_1,
    FG_KEY_2,
    FG_KEY_3,
    FG_KEY_4,
    FG_KEY_5,
    FG_KEY_6,
    FG_KEY_7,
    FG_KEY_8,
    FG_KEY_9,

    FG_KEY_COLON,   // :
    FG_KEY_SEMICOLON,   // ;
    FG_KEY_LESS,    // <
    FG_KEY_EQUAL,   // =
    FG_KEY_GREATER, // >
    FG_KEY_QUESTION,    // ?
    FG_KEY_AT,  // @

    FG_KEY_A,
    FG_KEY_B,
    FG_KEY_C,
    FG_KEY_D,
    FG_KEY_E,
    FG_KEY_F,
    FG_KEY_G,
    FG_KEY_H,
    FG_KEY_I,
    FG_KEY_J,
    FG_KEY_K,
    FG_KEY_L,
    FG_KEY_M,
    FG_KEY_N,
    FG_KEY_O,
    FG_KEY_P,
    FG_KEY_Q,
    FG_KEY_R,
    FG_KEY_S,
    FG_KEY_T,
    FG_KEY_U,
    FG_KEY_V,
    FG_KEY_W,
    FG_KEY_X,
    FG_KEY_Y,
    FG_KEY_Z,

    FG_KEY_BRACKET_LEFT,    // [
    FG_KEY_BACK_SLASH,  // ＼

    FG_KEY_BRACKET_RIGHT,   // ]
    FG_KEY_CIRCUM_FLEX, // ^
    FG_KEY_UNDER_SCORE, // _
    FG_KEY_GRAVE,   // `

    FG_KEY_a,
    FG_KEY_b,
    FG_KEY_c,
    FG_KEY_d,
    FG_KEY_e,
    FG_KEY_f,
    FG_KEY_g,
    FG_KEY_h,
    FG_KEY_i,
    FG_KEY_j,
    FG_KEY_k,
    FG_KEY_l,
    FG_KEY_m,
    FG_KEY_n,
    FG_KEY_o,
    FG_KEY_p,
    FG_KEY_q,
    FG_KEY_r,
    FG_KEY_s,
    FG_KEY_t,
    FG_KEY_u,
    FG_KEY_v,
    FG_KEY_w,
    FG_KEY_x,
    FG_KEY_y,
    FG_KEY_z,

    FG_KEY_BRACE_LEFT,  // {
    FG_KEY_VERTICAL_BAR,    // |
    FG_KEY_BRACE_RIGHT, // }
    FG_KEY_TILDE,   // ~

    // テンキー
    FG_KEY_KP_SPACE = 0x1000,

    FG_KEY_KP_EQUAL,    // =
    FG_KEY_KP_ASTERISK, // *
    FG_KEY_KP_PLUS, // +
    FG_KEY_KP_COMMA,    // ,
    FG_KEY_KP_MINUS,    // -
    FG_KEY_KP_PERIOD,   // .
    FG_KEY_KP_SLASH,    // /

    FG_KEY_KP_0,
    FG_KEY_KP_1,
    FG_KEY_KP_2,
    FG_KEY_KP_3,
    FG_KEY_KP_4,
    FG_KEY_KP_5,
    FG_KEY_KP_6,
    FG_KEY_KP_7,
    FG_KEY_KP_8,
    FG_KEY_KP_9,

    // 特殊キー
    FG_KEY_LEFT = 0x2000,
    FG_KEY_UP,
    FG_KEY_RIGHT,
    FG_KEY_DOWN,

    FG_KEY_PAGE_UP,
    FG_KEY_PAGE_DOWN,

    FG_KEY_HOME,
    FG_KEY_END,

    FG_KEY_SHIFT_LEFT,
    FG_KEY_SHIFT_RIGHT,

    FG_KEY_CONTROL_LEFT,
    FG_KEY_CONTROL_RIGHT,

    FG_KEY_ALT_LEFT,
    FG_KEY_ALT_RIGHT,

    FG_KEY_SUPER_LEFT,
    FG_KEY_SUPER_RIGHT,

    FG_KEY_BACK_SPACE,
    FG_KEY_TAB,
    FG_KEY_ENTER,
    FG_KEY_ESCAPE,
    FG_KEY_DELETE,
    FG_KEY_INSERT,
    FG_KEY_BREAK,
    FG_KEY_CAPS_LOCK,
    FG_KEY_NUM_LOCK,
    FG_KEY_SCROLL_LOCK,
    FG_KEY_PRINT_SCREEN,
    FG_KEY_PAUSE,
    FG_KEY_APPLICATION,
    FG_KEY_BEGIN,
    FG_KEY_EISU,    // 英数
    FG_KEY_MUHENKAN,    // 無変換
    FG_KEY_HENKAN,  // 変換
    FG_KEY_HIRAGANA_KATAKANA,   // ひらがな/カタカナ
    FG_KEY_ZENKAKU_HANKAKU, // 全角/半角

    // テンキーの特殊キー
    FG_KEY_KP_LEFT = 0x3000,
    FG_KEY_KP_UP,
    FG_KEY_KP_RIGHT,
    FG_KEY_KP_DOWN,

    FG_KEY_KP_PAGE_UP,
    FG_KEY_KP_PAGE_DOWN,

    FG_KEY_KP_HOME,
    FG_KEY_KP_END,

    FG_KEY_KP_TAB,
    FG_KEY_KP_ENTER,
    FG_KEY_KP_DELETE,
    FG_KEY_KP_INSERT,
    FG_KEY_KP_BEGIN,

    // ファンクションキー
    FG_KEY_F1 = 0x4000,
    FG_KEY_F2,
    FG_KEY_F3,
    FG_KEY_F4,
    FG_KEY_F5,
    FG_KEY_F6,
    FG_KEY_F7,
    FG_KEY_F8,
    FG_KEY_F9,
    FG_KEY_F10,
    FG_KEY_F11,
    FG_KEY_F12,
} FgKey;

#endif  // FG_WINDOW_KEY_H
