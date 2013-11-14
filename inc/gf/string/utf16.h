#ifndef GF_STRING_UTF16_H
#define GF_STRING_UTF16_H

#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfUtf16 GfUtf16;

GFEXTERNC_END

#include "gf/string/string.h"
#include "gf/string/utf8.h"
#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXTERNC_START

GFEXPORT GfBool gfUtf16FromString(
    GfUtf16 *
    , const GfString *
);

GFEXPORT GfBool gfUtf16FromStringCharPtr(
    GfUtf16 *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf16FromUtf8(
    GfUtf16 *
    , const GfUtf8 *
);

GFEXPORT GfBool gfUtf16FromUtf8CharPtr(
    GfUtf16 *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf16FromUtf32(
    GfUtf16 *
    , const GfUtf32 *
);

GFEXPORT GfBool gfUtf16FromUtf32CharPtr(
    GfUtf16 *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16New(
);

GFEXPORT GfUtf16 * gfUtf16Clone(
    const GfUtf16 *
);

GFEXPORT GfUtf16 * gfUtf16NewFromCharPtr(
    const GfUtf16Char *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16NewFromString(
    const GfString *
);

GFEXPORT GfUtf16 * gfUtf16NewFromStringCharPtr(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf8(
    const GfUtf8 *
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf8CharPtr(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf32(
    const GfUtf32 *
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf32CharPtr(
    const GfUtf32Char *
    , GfSize
);

GFEXPORT void gfUtf16Free(
    GfUtf16 *
);

GFEXPORT const GfUtf16Char * gfUtf16GetPtr(
    const GfUtf16 *
);

GFEXPORT GfSize gfUtf16GetLength(
    const GfUtf16 *
);

GFEXTERNC_END

#endif  // GF_STRING_UTF16_H
