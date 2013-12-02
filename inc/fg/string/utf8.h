#ifndef FG_STRING_UTF8_H
#define FG_STRING_UTF8_H

typedef struct FgUtf8 FgUtf8;

#include "fg/string/string.h"
#include "fg/string/utf16.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgUtf8 * fgUtf8New(
);

FGEXPORT FgUtf8 * fgUtf8Clone(
    const FgUtf8 *
);

FGEXPORT FgUtf8 * fgUtf8NewFromCharPtr(
    const FgUtf8Char *
);

FGEXPORT FgUtf8 * fgUtf8NewFromCharPtrWithLength(
    const FgUtf8Char *
    , FgSize
);

FGEXPORT FgUtf8 * fgUtf8NewFromString(
    const FgString *
);

FGEXPORT FgUtf8 * fgUtf8NewFromStringCharPtr(
    const FgStringChar *
);

FGEXPORT FgUtf8 * fgUtf8NewFromStringCharPtrWithLength(
    const FgStringChar *
    , FgSize
);

FGEXPORT FgUtf8 * fgUtf8NewFromUtf16(
    const FgUtf16 *
);

FGEXPORT FgUtf8 * fgUtf8NewFromUtf16CharPtr(
    const FgUtf16Char *
);

FGEXPORT FgUtf8 * fgUtf8NewFromUtf16CharPtrWithLength(
    const FgUtf16Char *
    , FgSize
);

FGEXPORT FgUtf8 * fgUtf8NewFromUtf32(
    const FgUtf32 *
);

FGEXPORT FgUtf8 * fgUtf8NewFromUtf32CharPtr(
    const FgUtf32Char *
);

FGEXPORT FgUtf8 * fgUtf8NewFromUtf32CharPtrWithLength(
    const FgUtf32Char *
    , FgSize
);

FGEXPORT void fgUtf8Free(
    FgUtf8 *
);

FGEXPORT const FgUtf8Char * fgUtf8GetPtr(
    const FgUtf8 *
);

FGEXPORT FgSize fgUtf8GetLength(
    const FgUtf8 *
);

FGEXPORT FgBool fgUtf8Assign(
    FgUtf8 *
    , const FgUtf8 *
);

FGEXPORT FgBool fgUtf8AssignFromCharPtr(
    FgUtf8 *
    , const FgUtf8Char *
);

FGEXPORT FgBool fgUtf8AssignFromCharPtrWithLength(
    FgUtf8 *
    , const FgUtf8Char *
    , FgSize
);

FGEXPORT FgBool fgUtf8AssignFromString(
    FgUtf8 *
    , const FgString *
);

FGEXPORT FgBool fgUtf8AssignFromStringCharPtr(
    FgUtf8 *
    , const FgStringChar *
);

FGEXPORT FgBool fgUtf8AssignFromStringCharPtrWithLength(
    FgUtf8 *
    , const FgStringChar *
    , FgSize
);

FGEXPORT FgBool fgUtf8AssignFromUtf16(
    FgUtf8 *
    , const FgUtf16 *
);

FGEXPORT FgBool fgUtf8AssignFromUtf16CharPtr(
    FgUtf8 *
    , const FgUtf16Char *
);

FGEXPORT FgBool fgUtf8AssignFromUtf16CharPtrWithLength(
    FgUtf8 *
    , const FgUtf16Char *
    , FgSize
);

FGEXPORT FgBool fgUtf8AssignFromUtf32(
    FgUtf8 *
    , const FgUtf32 *
);

FGEXPORT FgBool fgUtf8AssignFromUtf32CharPtr(
    FgUtf8 *
    , const FgUtf32Char *
);

FGEXPORT FgBool fgUtf8AssignFromUtf32CharPtrWithLength(
    FgUtf8 *
    , const FgUtf32Char *
    , FgSize
);

FGEXPORT FgBool fgUtf8ToInt(
    FgInt *
    , const FgUtf8 *
);

#endif  // FG_STRING_UTF8_H
