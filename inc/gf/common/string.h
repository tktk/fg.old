#ifndef GF_COMMON_STRING_H
#define GF_COMMON_STRING_H

#include "gf/common/primitives.h"
#include "gf/util/import.h"
#include "gf/util/externc.h"

#ifndef __cplusplus
#   include <uchar.h>
#endif  // __cplusplus

GFEXTERNC_START

typedef char GfStringChar;
typedef char GfUtf8Char;
typedef char16_t GfUtf16Char;
typedef char32_t GfUtf32Char;

enum {
    GF_UTF8_MAX_CHAR_LENGTH = 6,
    GF_UTF16_MAX_CHAR_LENGTH = 2,
    GF_UTF32_MAX_CHAR_LENGTH = 1,

    GF_STRING_MAX_CHAR_LENGTH = GF_UTF8_MAX_CHAR_LENGTH,
};

GFEXPORT GfBool gfStringFromUtf8(
    GfStringChar *
    , GfSize *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfStringFromUtf16(
    GfStringChar *
    , GfSize *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfStringFromUtf32(
    GfStringChar *
    , GfSize *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfBool gfUtf8FromString(
    GfUtf8Char *
    , GfSize *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf8FromUtf16(
    GfUtf8Char *
    , GfSize *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfUtf8FromUtf32(
    GfUtf8Char *
    , GfSize *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfBool gfUtf16FromString(
    GfUtf16Char *
    , GfSize *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf16FromUtf8(
    GfUtf16Char *
    , GfSize *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf16FromUtf32(
    GfUtf16Char *
    , GfSize *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfBool gfUtf32FromString(
    GfUtf32Char *
    , GfSize *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf32FromUtf8(
    GfUtf32Char *
    , GfSize *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf32FromUtf16(
    GfUtf32Char *
    , GfSize *
    , const GfUtf16Char *
    , GfSize
);

GFEXTERNC_END

#endif  // GF_COMMON_STRING_H
