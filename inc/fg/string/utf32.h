#ifndef FG_STRING_UTF32_H
#define FG_STRING_UTF32_H

#include "fg/def/string/utf32.h"
#include "fg/def/string/string.h"
#include "fg/def/string/utf8.h"
#include "fg/def/string/utf16.h"
#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32New(
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32Clone(
        const FgUtf32 * _ORG
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromCharPtr(
        const FgUtf32Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromCharPtrWithLength(
        const FgUtf32Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromString(
        const FgString *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromStringCharPtr(
        const FgStringChar *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromStringCharPtrWithLength(
        const FgStringChar *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromUtf8(
        const FgUtf8 *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromUtf8CharPtr(
        const FgUtf8Char *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromUtf8CharPtrWithLength(
        const FgUtf8Char *  _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromUtf16(
        const FgUtf16 * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromUtf16CharPtr(
        const FgUtf16Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf32 * fgUtf32NewFromUtf16CharPtrWithLength(
        const FgUtf16Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_VOID(
    void fgUtf32Free(
        FgUtf32 *   _this
    )
)

FG_FUNCTION_PTR(
    const FgUtf32Char * fgUtf32GetPtr(
        const FgUtf32 * _THIS
    )
)

FG_FUNCTION_NUM(
    FgSize fgUtf32GetLength(
        const FgUtf32 * _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32Assign(
        FgUtf32 *           _this
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromCharPtr(
        FgUtf32 *               _this
        , const FgUtf32Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromCharPtrWithLength(
        FgUtf32 *               _this
        , const FgUtf32Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromString(
        FgUtf32 *           _this
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromStringCharPtr(
        FgUtf32 *               _this
        , const FgStringChar *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromStringCharPtrWithLength(
        FgUtf32 *               _this
        , const FgStringChar *  _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromUtf8(
        FgUtf32 *           _this
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromUtf8CharPtr(
        FgUtf32 *               _this
        , const FgUtf8Char *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromUtf8CharPtrWithLength(
        FgUtf32 *               _this
        , const FgUtf8Char *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromUtf16(
        FgUtf32 *           _this
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromUtf16CharPtr(
        FgUtf32 *               _this
        , const FgUtf16Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32AssignFromUtf16CharPtrWithLength(
        FgUtf32 *               _this
        , const FgUtf16Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToInt(
        FgInt *             _to
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToIntWithBase(
        FgInt *             _to
        , const FgUtf32 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToUInt(
        FgUInt *            _to
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToUIntWithBase(
        FgUInt *            _to
        , const FgUtf32 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToLong(
        FgLong *            _to
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToLongWithBase(
        FgLong *            _to
        , const FgUtf32 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToULong(
        FgULong *           _to
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToULongWithBase(
        FgULong *           _to
        , const FgUtf32 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToFloat(
        FgFloat *           _to
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf32ToDouble(
        FgDouble *          _to
        , const FgUtf32 *   _FROM
    )
)

#endif  // FG_STRING_UTF32_H
