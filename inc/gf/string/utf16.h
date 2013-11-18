#ifndef GF_STRING_UTF16_H
#define GF_STRING_UTF16_H

typedef struct GfUtf16 GfUtf16;

#include "gf/string/string.h"
#include "gf/string/utf8.h"
#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXPORT GfUtf16 * gfUtf16New(
);

GFEXPORT GfUtf16 * gfUtf16Clone(
    const GfUtf16 *
);

GFEXPORT GfUtf16 * gfUtf16NewFromCharPtr(
    const GfUtf16Char *
);

GFEXPORT GfUtf16 * gfUtf16NewFromCharPtrWithLength(
    const GfUtf16Char *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16NewFromString(
    const GfString *
);

GFEXPORT GfUtf16 * gfUtf16NewFromStringCharPtr(
    const GfStringChar *
);

GFEXPORT GfUtf16 * gfUtf16NewFromStringCharPtrWithLength(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf8(
    const GfUtf8 *
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf8CharPtr(
    const GfUtf8Char *
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf8CharPtrWithLength(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf32(
    const GfUtf32 *
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf32CharPtr(
    const GfUtf32Char *
);

GFEXPORT GfUtf16 * gfUtf16NewFromUtf32CharPtrWithLength(
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

GFEXPORT GfBool gfUtf16Assign(
    GfUtf16 *
    , const GfUtf16 *
);

GFEXPORT GfBool gfUtf16AssignFromCharPtr(
    GfUtf16 *
    , const GfUtf16Char *
);

GFEXPORT GfBool gfUtf16AssignFromCharPtrWithLength(
    GfUtf16 *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfUtf16AssignFromString(
    GfUtf16 *
    , const GfString *
);

GFEXPORT GfBool gfUtf16AssignFromStringCharPtr(
    GfUtf16 *
    , const GfStringChar *
);

GFEXPORT GfBool gfUtf16AssignFromStringCharPtrWithLength(
    GfUtf16 *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf16AssignFromUtf8(
    GfUtf16 *
    , const GfUtf8 *
);

GFEXPORT GfBool gfUtf16AssignFromUtf8CharPtr(
    GfUtf16 *
    , const GfUtf8Char *
);

GFEXPORT GfBool gfUtf16AssignFromUtf8CharPtrWithLength(
    GfUtf16 *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfUtf16AssignFromUtf32(
    GfUtf16 *
    , const GfUtf32 *
);

GFEXPORT GfBool gfUtf16AssignFromUtf32CharPtr(
    GfUtf16 *
    , const GfUtf32Char *
);

GFEXPORT GfBool gfUtf16AssignFromUtf32CharPtrWithLength(
    GfUtf16 *
    , const GfUtf32Char *
    , GfSize
);

#endif  // GF_STRING_UTF16_H
