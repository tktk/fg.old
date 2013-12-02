#ifndef FG_STRING_UTF16_H
#define FG_STRING_UTF16_H

typedef struct FgUtf16 FgUtf16;

#include "fg/string/string.h"
#include "fg/string/utf8.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgUtf16 * fgUtf16New(
);

FGEXPORT FgUtf16 * fgUtf16Clone(
    const FgUtf16 *
);

FGEXPORT FgUtf16 * fgUtf16NewFromCharPtr(
    const FgUtf16Char *
);

FGEXPORT FgUtf16 * fgUtf16NewFromCharPtrWithLength(
    const FgUtf16Char *
    , FgSize
);

FGEXPORT FgUtf16 * fgUtf16NewFromString(
    const FgString *
);

FGEXPORT FgUtf16 * fgUtf16NewFromStringCharPtr(
    const FgStringChar *
);

FGEXPORT FgUtf16 * fgUtf16NewFromStringCharPtrWithLength(
    const FgStringChar *
    , FgSize
);

FGEXPORT FgUtf16 * fgUtf16NewFromUtf8(
    const FgUtf8 *
);

FGEXPORT FgUtf16 * fgUtf16NewFromUtf8CharPtr(
    const FgUtf8Char *
);

FGEXPORT FgUtf16 * fgUtf16NewFromUtf8CharPtrWithLength(
    const FgUtf8Char *
    , FgSize
);

FGEXPORT FgUtf16 * fgUtf16NewFromUtf32(
    const FgUtf32 *
);

FGEXPORT FgUtf16 * fgUtf16NewFromUtf32CharPtr(
    const FgUtf32Char *
);

FGEXPORT FgUtf16 * fgUtf16NewFromUtf32CharPtrWithLength(
    const FgUtf32Char *
    , FgSize
);

FGEXPORT void fgUtf16Free(
    FgUtf16 *
);

FGEXPORT const FgUtf16Char * fgUtf16GetPtr(
    const FgUtf16 *
);

FGEXPORT FgSize fgUtf16GetLength(
    const FgUtf16 *
);

FGEXPORT FgBool fgUtf16Assign(
    FgUtf16 *
    , const FgUtf16 *
);

FGEXPORT FgBool fgUtf16AssignFromCharPtr(
    FgUtf16 *
    , const FgUtf16Char *
);

FGEXPORT FgBool fgUtf16AssignFromCharPtrWithLength(
    FgUtf16 *
    , const FgUtf16Char *
    , FgSize
);

FGEXPORT FgBool fgUtf16AssignFromString(
    FgUtf16 *
    , const FgString *
);

FGEXPORT FgBool fgUtf16AssignFromStringCharPtr(
    FgUtf16 *
    , const FgStringChar *
);

FGEXPORT FgBool fgUtf16AssignFromStringCharPtrWithLength(
    FgUtf16 *
    , const FgStringChar *
    , FgSize
);

FGEXPORT FgBool fgUtf16AssignFromUtf8(
    FgUtf16 *
    , const FgUtf8 *
);

FGEXPORT FgBool fgUtf16AssignFromUtf8CharPtr(
    FgUtf16 *
    , const FgUtf8Char *
);

FGEXPORT FgBool fgUtf16AssignFromUtf8CharPtrWithLength(
    FgUtf16 *
    , const FgUtf8Char *
    , FgSize
);

FGEXPORT FgBool fgUtf16AssignFromUtf32(
    FgUtf16 *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf16AssignFromUtf32CharPtr(
    FgUtf16 *
    , const FgUtf32Char *
);

FGEXPORT FgBool fgUtf16AssignFromUtf32CharPtrWithLength(
    FgUtf16 *
    , const FgUtf32Char *
    , FgSize
);

FGEXPORT FgBool fgUtf16ToInt(
    FgInt *
    , const FgUtf16 *
);

#endif  // FG_STRING_UTF16_H
