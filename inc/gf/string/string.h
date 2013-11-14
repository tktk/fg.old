#ifndef GF_STRING_STRING_H
#define GF_STRING_STRING_H

#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfString GfString;

GFEXTERNC_END

#include "gf/string/utf8.h"
#include "gf/string/utf16.h"
#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXTERNC_START

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

GFEXTERNC_END

#endif  // GF_STRING_STRING_H
