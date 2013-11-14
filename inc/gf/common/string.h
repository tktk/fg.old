#ifndef GF_COMMON_STRING_H
#define GF_COMMON_STRING_H

#include "gf/common/primitives.h"
#include "gf/util/import.h"
#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfString GfString;
typedef struct GfUtf8 GfUtf8;
typedef struct GfUtf16 GfUtf16;
typedef struct GfUtf32 GfUtf32;

GFEXPORT GfBool gfStringFromUtf8(
    GfString *
    , const GfUtf8 *
);

GFEXPORT GfBool gfStringFromUtf8CharPtr(
    GfString *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfStringFromUtf16(
    GfString *
    , const GfUtf16 *
);

GFEXPORT GfBool gfStringFromUtf16CharPtr(
    GfString *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfStringFromUtf32(
    GfString *
    , const GfUtf32 *
);

GFEXPORT GfBool gfStringFromUtf32CharPtr(
    GfString *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfString * gfStringNew(
);

GFEXPORT GfString * gfStringClone(
    const GfString *
);

GFEXPORT GfString * gfStringNewFromCharPtr(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfString * gfStringNewFromUtf8(
    const GfUtf8 *
);

GFEXPORT GfString * gfStringNewFromUtf8CharPtr(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfString * gfStringNewFromUtf16(
    const GfUtf16 *
);

GFEXPORT GfString * gfStringNewFromUtf16CharPtr(
    const GfUtf16Char *
    , GfSize
);

GFEXPORT GfString * gfStringNewFromUtf32(
    const GfUtf32 *
);

GFEXPORT GfString * gfStringNewFromUtf32CharPtr(
    const GfUtf32Char *
    , GfSize
);

GFEXPORT void gfStringFree(
    GfString *
);

GFEXPORT GfBool gfUtf8FromString(
    GfUtf8 *
    , const GfString *
);

GFEXPORT GfBool gfUtf8FromStringCharPtr(
    GfUtf8 *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfUtf8FromUtf16(
    GfUtf8 *
    , const GfUtf16 *
);

GFEXPORT GfBool gfUtf8FromUtf16CharPtr(
    GfUtf8 *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfUtf8FromUtf32(
    GfUtf8 *
    , const GfUtf32 *
);

GFEXPORT GfBool gfUtf8FromUtf32CharPtr(
    GfUtf8 *
    , const GfUtf32Char *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8New(
);

GFEXPORT GfUtf8 * gfUtf8Clone(
    const GfUtf8 *
);

GFEXPORT GfUtf8 * gfUtf8NewFromCharPtr(
    const GfUtf8Char *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8NewFromString(
    const GfString *
);

GFEXPORT GfUtf8 * gfUtf8NewFromStringCharPtr(
    const GfStringChar *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf16(
    const GfUtf16 *
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf16CharPtr(
    const GfUtf16Char *
    , GfSize
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf32(
    const GfUtf32 *
);

GFEXPORT GfUtf8 * gfUtf8NewFromUtf32CharPtr(
    const GfUtf32Char *
    , GfSize
);

GFEXPORT void gfUtf8Free(
    GfUtf8 *
);

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

GFEXTERNC_END

#endif  // GF_COMMON_STRING_H
