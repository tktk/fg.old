#ifndef GF_WINDOW_KEY_H
#define GF_WINDOW_KEY_H

typedef enum GfKey
{
    GF_KEY_INVALID = 0x0,

    GF_KEY_SPACE = 0x20,

    GF_KEY_EXCLAMATION, // !
    GF_KEY_DOUBLE_QUOTES,   // "
    GF_KEY_NUMBER_SIGN,     // #
    GF_KEY_DOLLAR,  // $
    GF_KEY_PARCENT,     // %
    GF_KEY_AMPERSAND,   // &
    GF_KEY_APOSTROPHE,  // '
    GF_KEY_PAREN_LEFT,  // (
    GF_KEY_PAREN_RIGHT, // )
    GF_KEY_ASTERISK,    // *
    GF_KEY_PLUS,    // +
    GF_KEY_COMMA,   // ,
    GF_KEY_MINUS,   // -
    GF_KEY_PERIOD,  // .
    GF_KEY_SLASH,   // /

    GF_KEY_0,
    GF_KEY_1,
    GF_KEY_2,
    GF_KEY_3,
    GF_KEY_4,
    GF_KEY_5,
    GF_KEY_6,
    GF_KEY_7,
    GF_KEY_8,
    GF_KEY_9,

    GF_KEY_COLON,   // :
    GF_KEY_SEMICOLON,   // ;
    GF_KEY_LESS,    // <
    GF_KEY_EQUAL,   // =
    GF_KEY_GREATER, // >
    GF_KEY_QUESTION,    // ?
    GF_KEY_AT,  // @

    GF_KEY_A,
    GF_KEY_B,
    GF_KEY_C,
    GF_KEY_D,
    GF_KEY_E,
    GF_KEY_F,
    GF_KEY_G,
    GF_KEY_H,
    GF_KEY_I,
    GF_KEY_J,
    GF_KEY_K,
    GF_KEY_L,
    GF_KEY_M,
    GF_KEY_N,
    GF_KEY_O,
    GF_KEY_P,
    GF_KEY_Q,
    GF_KEY_R,
    GF_KEY_S,
    GF_KEY_T,
    GF_KEY_U,
    GF_KEY_V,
    GF_KEY_W,
    GF_KEY_X,
    GF_KEY_Y,
    GF_KEY_Z,

    GF_KEY_BRACKET_LEFT,    // [
    GF_KEY_BACK_SLASH,  // ＼

    GF_KEY_BRACKET_RIGHT,   // ]
    GF_KEY_CIRCUM_FLEX, // ^
    GF_KEY_UNDER_SCORE, // _
    GF_KEY_GRAVE,   // `

    GF_KEY_a,
    GF_KEY_b,
    GF_KEY_c,
    GF_KEY_d,
    GF_KEY_e,
    GF_KEY_f,
    GF_KEY_g,
    GF_KEY_h,
    GF_KEY_i,
    GF_KEY_j,
    GF_KEY_k,
    GF_KEY_l,
    GF_KEY_m,
    GF_KEY_n,
    GF_KEY_o,
    GF_KEY_p,
    GF_KEY_q,
    GF_KEY_r,
    GF_KEY_s,
    GF_KEY_t,
    GF_KEY_u,
    GF_KEY_v,
    GF_KEY_w,
    GF_KEY_x,
    GF_KEY_y,
    GF_KEY_z,

    GF_KEY_BRACE_LEFT,  // {
    GF_KEY_VERTICAL_BAR,    // |
    GF_KEY_BRACE_RIGHT, // }
    GF_KEY_TILDE,   // ~

    // テンキー
    GF_KEY_KP_SPACE = 0x1000,

    GF_KEY_KP_EQUAL,    // =
    GF_KEY_KP_ASTERISK, // *
    GF_KEY_KP_PLUS, // +
    GF_KEY_KP_COMMA,    // ,
    GF_KEY_KP_MINUS,    // -
    GF_KEY_KP_PERIOD,   // .
    GF_KEY_KP_SLASH,    // /

    GF_KEY_KP_0,
    GF_KEY_KP_1,
    GF_KEY_KP_2,
    GF_KEY_KP_3,
    GF_KEY_KP_4,
    GF_KEY_KP_5,
    GF_KEY_KP_6,
    GF_KEY_KP_7,
    GF_KEY_KP_8,
    GF_KEY_KP_9,

    // 特殊キー
    GF_KEY_LEFT = 0x2000,
    GF_KEY_UP,
    GF_KEY_RIGHT,
    GF_KEY_DOWN,

    GF_KEY_PAGE_UP,
    GF_KEY_PAGE_DOWN,

    GF_KEY_HOME,
    GF_KEY_END,

    GF_KEY_SHIFT_LEFT,
    GF_KEY_SHIFT_RIGHT,

    GF_KEY_CONTROL_LEFT,
    GF_KEY_CONTROL_RIGHT,

    GF_KEY_ALT_LEFT,
    GF_KEY_ALT_RIGHT,

    GF_KEY_SUPER_LEFT,
    GF_KEY_SUPER_RIGHT,

    GF_KEY_BACK_SPACE,
    GF_KEY_TAB,
    GF_KEY_ENTER,
    GF_KEY_ESCAPE,
    GF_KEY_DELETE,
    GF_KEY_INSERT,
    GF_KEY_BREAK,
    GF_KEY_CAPS_LOCK,
    GF_KEY_NUM_LOCK,
    GF_KEY_SCROLL_LOCK,
    GF_KEY_PRINT_SCREEN,
    GF_KEY_PAUSE,
    GF_KEY_APPLICATION,
    GF_KEY_BEGIN,
    GF_KEY_EISU,    // 英数
    GF_KEY_MUHENKAN,    // 無変換
    GF_KEY_HENKAN,  // 変換
    GF_KEY_HIRAGANA_KATAKANA,   // ひらがな/カタカナ
    GF_KEY_ZENKAKU_HANKAKU, // 全角/半角

    // テンキーの特殊キー
    GF_KEY_KP_LEFT = 0x3000,
    GF_KEY_KP_UP,
    GF_KEY_KP_RIGHT,
    GF_KEY_KP_DOWN,

    GF_KEY_KP_PAGE_UP,
    GF_KEY_KP_PAGE_DOWN,

    GF_KEY_KP_HOME,
    GF_KEY_KP_END,

    GF_KEY_KP_TAB,
    GF_KEY_KP_ENTER,
    GF_KEY_KP_DELETE,
    GF_KEY_KP_INSERT,
    GF_KEY_KP_BEGIN,

    // ファンクションキー
    GF_KEY_F1 = 0x4000,
    GF_KEY_F2,
    GF_KEY_F3,
    GF_KEY_F4,
    GF_KEY_F5,
    GF_KEY_F6,
    GF_KEY_F7,
    GF_KEY_F8,
    GF_KEY_F9,
    GF_KEY_F10,
    GF_KEY_F11,
    GF_KEY_F12,
} GfKey;

#endif  // GF_WINDOW_KEY_H
