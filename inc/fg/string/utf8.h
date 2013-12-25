#ifndef FG_STRING_UTF8_H
#define FG_STRING_UTF8_H

#include "fg/type/string/utf8.h"
#include "fg/type/string/string.h"
#include "fg/type/string/utf16.h"
#include "fg/type/string/utf32.h"
#include "fg/type/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8New(
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8Clone(
        const FgUtf8 *  _ORG
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromCharPtr(
        const FgUtf8Char *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromCharPtrWithLength(
        const FgUtf8Char *  _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromString(
        const FgString *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromStringCharPtr(
        const FgStringChar *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromStringCharPtrWithLength(
        const FgStringChar *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromUtf16(
        const FgUtf16 * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromUtf16CharPtr(
        const FgUtf16Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromUtf16CharPtrWithLength(
        const FgUtf16Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromUtf32(
        const FgUtf32 * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromUtf32CharPtr(
        const FgUtf32Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf8 * fgUtf8NewFromUtf32CharPtrWithLength(
        const FgUtf32Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_VOID(
    void fgUtf8Free(
        FgUtf8 *    _this
    )
)

FG_FUNCTION_PTR(
    const FgUtf8Char * fgUtf8GetPtr(
        const FgUtf8 *  _THIS
    )
)

FG_FUNCTION_NUM(
    FgSize fgUtf8GetLength(
        const FgUtf8 *  _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8Assign(
        FgUtf8 *            _this
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromCharPtr(
        FgUtf8 *                _this
        , const FgUtf8Char *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromCharPtrWithLength(
        FgUtf8 *                _this
        , const FgUtf8Char *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromString(
        FgUtf8 *            _this
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromStringCharPtr(
        FgUtf8 *                _this
        , const FgStringChar *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromStringCharPtrWithLength(
        FgUtf8 *                _this
        , const FgStringChar *  _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromUtf16(
        FgUtf8 *            _this
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromUtf16CharPtr(
        FgUtf8 *                _this
        , const FgUtf16Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromUtf16CharPtrWithLength(
        FgUtf8 *                _this
        , const FgUtf16Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromUtf32(
        FgUtf8 *            _this
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromUtf32CharPtr(
        FgUtf8 *                _this
        , const FgUtf32Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8AssignFromUtf32CharPtrWithLength(
        FgUtf8 *                _this
        , const FgUtf32Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToInt(
        FgInt *             _to
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToIntWithBase(
        FgInt *             _to
        , const FgUtf8 *    _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToUInt(
        FgUInt *            _to
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToUIntWithBase(
        FgUInt *            _to
        , const FgUtf8 *    _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToLong(
        FgLong *            _to
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToLongWithBase(
        FgLong *            _to
        , const FgUtf8 *    _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToULong(
        FgULong *           _to
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToULongWithBase(
        FgULong *           _to
        , const FgUtf8 *    _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToFloat(
        FgFloat *           _to
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf8ToDouble(
        FgDouble *          _to
        , const FgUtf8 *    _FROM
    )
)

#endif  // FG_STRING_UTF8_H
