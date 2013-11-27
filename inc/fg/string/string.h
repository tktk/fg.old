#ifndef FG_STRING_STRING_H
#define FG_STRING_STRING_H

typedef struct FgString FgString;

#include "fg/string/utf8.h"
#include "fg/string/utf16.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgString * fgStringNew(
);

FGEXPORT FgString * fgStringClone(
    const FgString *
);

FGEXPORT FgString * fgStringNewFromCharPtr(
    const FgStringChar *
);

FGEXPORT FgString * fgStringNewFromCharPtrWithLength(
    const FgStringChar *
    , FgSize
);

FGEXPORT FgString * fgStringNewFromUtf8(
    const FgUtf8 *
);

FGEXPORT FgString * fgStringNewFromUtf8CharPtr(
    const FgUtf8Char *
);

FGEXPORT FgString * fgStringNewFromUtf8CharPtrWithLength(
    const FgUtf8Char *
    , FgSize
);

FGEXPORT FgString * fgStringNewFromUtf16(
    const FgUtf16 *
);

FGEXPORT FgString * fgStringNewFromUtf16CharPtr(
    const FgUtf16Char *
);

FGEXPORT FgString * fgStringNewFromUtf16CharPtrWithLength(
    const FgUtf16Char *
    , FgSize
);

FGEXPORT FgString * fgStringNewFromUtf32(
    const FgUtf32 *
);

FGEXPORT FgString * fgStringNewFromUtf32CharPtr(
    const FgUtf32Char *
);

FGEXPORT FgString * fgStringNewFromUtf32CharPtrWithLength(
    const FgUtf32Char *
    , FgSize
);

FGEXPORT void fgStringFree(
    FgString *
);

FGEXPORT const FgStringChar * fgStringGetPtr(
    const FgString *
);

FGEXPORT FgSize fgStringGetLength(
    const FgString *
);

FGEXPORT FgBool fgStringAssign(
    FgString *
    , const FgString *
);

FGEXPORT FgBool fgStringAssignFromCharPtr(
    FgString *
    , const FgStringChar *
);

FGEXPORT FgBool fgStringAssignFromCharPtrWithLength(
    FgString *
    , const FgStringChar *
    , FgSize
);

FGEXPORT FgBool fgStringAssignFromUtf8(
    FgString *
    , const FgUtf8 *
);

FGEXPORT FgBool fgStringAssignFromUtf8CharPtr(
    FgString *
    , const FgUtf8Char *
);

FGEXPORT FgBool fgStringAssignFromUtf8CharPtrWithLength(
    FgString *
    , const FgUtf8Char *
    , FgSize
);

FGEXPORT FgBool fgStringAssignFromUtf16(
    FgString *
    , const FgUtf16 *
);

FGEXPORT FgBool fgStringAssignFromUtf16CharPtr(
    FgString *
    , const FgUtf16Char *
);

FGEXPORT FgBool fgStringAssignFromUtf16CharPtrWithLength(
    FgString *
    , const FgUtf16Char *
    , FgSize
);

FGEXPORT FgBool fgStringAssignFromUtf32(
    FgString *
    , const FgUtf32 *
);

FGEXPORT FgBool fgStringAssignFromUtf32CharPtr(
    FgString *
    , const FgUtf32Char *
);

FGEXPORT FgBool fgStringAssignFromUtf32CharPtrWithLength(
    FgString *
    , const FgUtf32Char *
    , FgSize
);

#endif  // FG_STRING_STRING_H
