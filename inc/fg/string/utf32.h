#ifndef FG_STRING_UTF32_H
#define FG_STRING_UTF32_H

typedef struct FgUtf32 FgUtf32;

#include "fg/string/string.h"
#include "fg/string/utf8.h"
#include "fg/string/utf16.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgUtf32 * fgUtf32New(
);

FGEXPORT FgUtf32 * fgUtf32Clone(
    const FgUtf32 *
);

FGEXPORT FgUtf32 * fgUtf32NewFromCharPtr(
    const FgUtf32Char *
);

FGEXPORT FgUtf32 * fgUtf32NewFromCharPtrWithLength(
    const FgUtf32Char *
    , FgSize
);

FGEXPORT FgUtf32 * fgUtf32NewFromString(
    const FgString *
);

FGEXPORT FgUtf32 * fgUtf32NewFromStringCharPtr(
    const FgStringChar *
);

FGEXPORT FgUtf32 * fgUtf32NewFromStringCharPtrWithLength(
    const FgStringChar *
    , FgSize
);

FGEXPORT FgUtf32 * fgUtf32NewFromUtf8(
    const FgUtf8 *
);

FGEXPORT FgUtf32 * fgUtf32NewFromUtf8CharPtr(
    const FgUtf8Char *
);

FGEXPORT FgUtf32 * fgUtf32NewFromUtf8CharPtrWithLength(
    const FgUtf8Char *
    , FgSize
);

FGEXPORT FgUtf32 * fgUtf32NewFromUtf16(
    const FgUtf16 *
);

FGEXPORT FgUtf32 * fgUtf32NewFromUtf16CharPtr(
    const FgUtf16Char *
);

FGEXPORT FgUtf32 * fgUtf32NewFromUtf16CharPtrWithLength(
    const FgUtf16Char *
    , FgSize
);

FGEXPORT void fgUtf32Free(
    FgUtf32 *
);

FGEXPORT const FgUtf32Char * fgUtf32GetPtr(
    const FgUtf32 *
);

FGEXPORT FgSize fgUtf32GetLength(
    const FgUtf32 *
);

FGEXPORT FgBool fgUtf32Assign(
    FgUtf32 *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf32AssignFromCharPtr(
    FgUtf32 *
    , const FgUtf32Char *
);

FGEXPORT FgBool fgUtf32AssignFromCharPtrWithLength(
    FgUtf32 *
    , const FgUtf32Char *
    , FgSize
);

FGEXPORT FgBool fgUtf32AssignFromString(
    FgUtf32 *
    , const FgString *
);

FGEXPORT FgBool fgUtf32AssignFromStringCharPtr(
    FgUtf32 *
    , const FgStringChar *
);

FGEXPORT FgBool fgUtf32AssignFromStringCharPtrWithLength(
    FgUtf32 *
    , const FgStringChar *
    , FgSize
);

FGEXPORT FgBool fgUtf32AssignFromUtf8(
    FgUtf32 *
    , const FgUtf8 *
);

FGEXPORT FgBool fgUtf32AssignFromUtf8CharPtr(
    FgUtf32 *
    , const FgUtf8Char *
);

FGEXPORT FgBool fgUtf32AssignFromUtf8CharPtrWithLength(
    FgUtf32 *
    , const FgUtf8Char *
    , FgSize
);

FGEXPORT FgBool fgUtf32AssignFromUtf16(
    FgUtf32 *
    , const FgUtf16 *
);

FGEXPORT FgBool fgUtf32AssignFromUtf16CharPtr(
    FgUtf32 *
    , const FgUtf16Char *
);

FGEXPORT FgBool fgUtf32AssignFromUtf16CharPtrWithLength(
    FgUtf32 *
    , const FgUtf16Char *
    , FgSize
);

FGEXPORT FgBool fgUtf32ToInt(
    FgInt *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf32ToIntWithBase(
    FgInt *
    , const FgUtf32 *
    , FgInt
);

FGEXPORT FgBool fgUtf32ToUInt(
    FgUInt *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf32ToUIntWithBase(
    FgUInt *
    , const FgUtf32 *
    , FgInt
);

FGEXPORT FgBool fgUtf32ToLong(
    FgLong *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf32ToLongWithBase(
    FgLong *
    , const FgUtf32 *
    , FgInt
);

FGEXPORT FgBool fgUtf32ToULong(
    FgULong *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf32ToULongWithBase(
    FgULong *
    , const FgUtf32 *
    , FgInt
);

FGEXPORT FgBool fgUtf32ToFloat(
    FgFloat *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf32ToDouble(
    FgDouble *
    , const FgUtf32 *
);

#endif  // FG_STRING_UTF32_H
