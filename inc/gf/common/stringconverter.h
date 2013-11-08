#ifndef GF_COMMON_STRINGCONVERTER_H
#define GF_COMMON_STRINGCONVERTER_H

#include "gf/common/primitives.h"
#include "gf/util/import.h"
#include "gf/util/externc.h"

GFEXTERNC_START

enum {
    GF_UTF8_MAX_CHAR_LENGTH = 6,
    GF_UTF16_MAX_CHAR_LENGTH = 2,
    GF_UTF32_MAX_CHAR_LENGTH = 1,

    GF_STRING_MAX_CHAR_LENGTH = GF_UTF8_MAX_CHAR_LENGTH,
};

GFEXPORT gfBool gfStringFromUtf8(
    gfStringChar *
    , gfSize *
    , const gfUtf8Char *
    , gfSize
);

GFEXPORT gfBool gfStringFromUtf16(
    gfStringChar *
    , gfSize *
    , const gfUtf16Char *
    , gfSize
);

GFEXPORT gfBool gfStringFromUtf32(
    gfStringChar *
    , gfSize *
    , const gfUtf32Char *
    , gfSize
);

GFEXPORT gfBool gfUtf8FromString(
    gfUtf8Char *
    , gfSize *
    , const gfStringChar *
    , gfSize
);

GFEXPORT gfBool gfUtf8FromUtf16(
    gfUtf8Char *
    , gfSize *
    , const gfUtf16Char *
    , gfSize
);

GFEXPORT gfBool gfUtf8FromUtf32(
    gfUtf8Char *
    , gfSize *
    , const gfUtf32Char *
    , gfSize
);

GFEXPORT gfBool gfUtf16FromString(
    gfUtf16Char *
    , gfSize *
    , const gfStringChar *
    , gfSize
);

GFEXPORT gfBool gfUtf16FromUtf8(
    gfUtf16Char *
    , gfSize *
    , const gfUtf8Char *
    , gfSize
);

GFEXPORT gfBool gfUtf16FromUtf32(
    gfUtf16Char *
    , gfSize *
    , const gfUtf32Char *
    , gfSize
);

GFEXPORT gfBool gfUtf32FromString(
    gfUtf32Char *
    , gfSize *
    , const gfStringChar *
    , gfSize
);

GFEXPORT gfBool gfUtf32FromUtf8(
    gfUtf32Char *
    , gfSize *
    , const gfUtf8Char *
    , gfSize
);

GFEXPORT gfBool gfUtf32FromUtf16(
    gfUtf32Char *
    , gfSize *
    , const gfUtf16Char *
    , gfSize
);

GFEXTERNC_END

#endif  // GF_COMMON_STRINGCONVERTER_H
