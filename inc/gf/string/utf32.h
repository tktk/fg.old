#ifndef GF_STRING_UTF32_H
#define GF_STRING_UTF32_H

#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfUtf32 GfUtf32;

GFEXTERNC_END

#include "gf/string/string.h"
#include "gf/string/utf8.h"
#include "gf/string/utf16.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXTERNC_START

GFEXPORT GfBool gfUtf32FromString(
    GfUtf32 *
    , const GfString *
);

GFEXPORT GfBool gfUtf32FromStringCharPtr(
    GfUtf32 *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf32FromUtf8(
    GfUtf32 *
    , const GfUtf8 *
);

GFEXPORT GfBool gfUtf32FromUtf8CharPtr(
    GfUtf32 *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf32FromUtf16(
    GfUtf32 *
    , const GfUtf16 *
);

GFEXPORT GfBool gfUtf32FromUtf16CharPtr(
    GfUtf32 *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32New(
);

GFEXPORT GfUtf32 * gfUtf32Clone(
    const GfUtf32 *
);

GFEXPORT GfUtf32 * gfUtf32NewFromCharPtr(
    const GfUtf32Char *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32NewFromString(
    const GfString *
);

GFEXPORT GfUtf32 * gfUtf32NewFromStringCharPtr(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf8(
    const GfUtf8 *
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf8CharPtr(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf16(
    const GfUtf16 *
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf16CharPtr(
    const GfUtf16Char *
    , GfSize
);

GFEXPORT void gfUtf32Free(
    GfUtf32 *
);

GFEXPORT const GfUtf32Char * gfUtf32GetPtr(
    const GfUtf32 *
);

GFEXPORT GfSize gfUtf32GetLength(
    const GfUtf32 *
);

GFEXTERNC_END

#endif  // GF_STRING_UTF32_H
