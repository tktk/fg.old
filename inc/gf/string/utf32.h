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

GFEXPORT GfUtf32 * gfUtf32New(
);

GFEXPORT GfUtf32 * gfUtf32Clone(
    const GfUtf32 *
);

GFEXPORT GfUtf32 * gfUtf32NewFromCharPtr(
    const GfUtf32Char *
);

GFEXPORT GfUtf32 * gfUtf32NewFromCharPtrWithLength(
    const GfUtf32Char *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32NewFromString(
    const GfString *
);

GFEXPORT GfUtf32 * gfUtf32NewFromStringCharPtr(
    const GfStringChar *
);

GFEXPORT GfUtf32 * gfUtf32NewFromStringCharPtrWithLength(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf8(
    const GfUtf8 *
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf8CharPtr(
    const GfUtf8Char *
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf8CharPtrWithLength(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf16(
    const GfUtf16 *
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf16CharPtr(
    const GfUtf16Char *
);

GFEXPORT GfUtf32 * gfUtf32NewFromUtf16CharPtrWithLength(
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

GFEXPORT GfBool gfUtf32Assign(
    GfUtf32 *
    , const GfUtf32 *
);

GFEXPORT GfBool gfUtf32AssignFromCharPtr(
    GfUtf32 *
    , const GfUtf32Char *
);

GFEXPORT GfBool gfUtf32AssignFromCharPtrWithLength(
    GfUtf32 *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfBool gfUtf32AssignFromString(
    GfUtf32 *
    , const GfString *
);

GFEXPORT GfBool gfUtf32AssignFromStringCharPtr(
    GfUtf32 *
    , const GfStringChar *
);

GFEXPORT GfBool gfUtf32AssignFromStringCharPtrWithLength(
    GfUtf32 *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf32AssignFromUtf8(
    GfUtf32 *
    , const GfUtf8 *
);

GFEXPORT GfBool gfUtf32AssignFromUtf8CharPtr(
    GfUtf32 *
    , const GfUtf8Char *
);

GFEXPORT GfBool gfUtf32AssignFromUtf8CharPtrWithLength(
    GfUtf32 *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf32AssignFromUtf16(
    GfUtf32 *
    , const GfUtf16 *
);

GFEXPORT GfBool gfUtf32AssignFromUtf16CharPtr(
    GfUtf32 *
    , const GfUtf16Char *
);

GFEXPORT GfBool gfUtf32AssignFromUtf16CharPtrWithLength(
    GfUtf32 *
    , const GfUtf16Char *
    , GfSize
);

GFEXTERNC_END

#endif  // GF_STRING_UTF32_H
