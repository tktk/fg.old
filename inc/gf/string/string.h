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

GFEXPORT const GfStringChar * gfStringGetPtr(
    const GfString *
);

GFEXPORT GfSize gfStringGetLength(
    const GfString *
);

GFEXPORT GfBool gfStringAssign(
    GfString *
    , const GfString *
);

GFEXPORT GfBool gfStringAssignFromCharPtr(
    GfString *
    , const GfStringChar *
    , GfSize
);

GFEXPORT GfBool gfStringAssignFromUtf8(
    GfString *
    , const GfUtf8 *
);

GFEXPORT GfBool gfStringAssignFromUtf8CharPtr(
    GfString *
    , const GfUtf8Char *
    , GfSize
);

GFEXPORT GfBool gfStringAssignFromUtf16(
    GfString *
    , const GfUtf16 *
);

GFEXPORT GfBool gfStringAssignFromUtf16CharPtr(
    GfString *
    , const GfUtf16Char *
    , GfSize
);

GFEXPORT GfBool gfStringAssignFromUtf32(
    GfString *
    , const GfUtf32 *
);

GFEXPORT GfBool gfStringAssignFromUtf32CharPtr(
    GfString *
    , const GfUtf32Char *
    , GfSize
);

GFEXTERNC_END

#endif  // GF_STRING_STRING_H
