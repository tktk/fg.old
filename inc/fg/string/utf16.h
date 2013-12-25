#ifndef FG_STRING_UTF16_H
#define FG_STRING_UTF16_H

#include "fg/def/string/utf16.h"
#include "fg/def/string/string.h"
#include "fg/def/string/utf8.h"
#include "fg/def/string/utf32.h"
#include "fg/def/primitives.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16New(
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16Clone(
        const FgUtf16 * _ORG
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromCharPtr(
        const FgUtf16Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromCharPtrWithLength(
        const FgUtf16Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromString(
        const FgString *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromStringCharPtr(
        const FgStringChar *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromStringCharPtrWithLength(
        const FgStringChar *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromUtf8(
        const FgUtf8 *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromUtf8CharPtr(
        const FgUtf8Char *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromUtf8CharPtrWithLength(
        const FgUtf8Char *  _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromUtf32(
        const FgUtf32 * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromUtf32CharPtr(
        const FgUtf32Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgUtf16 * fgUtf16NewFromUtf32CharPtrWithLength(
        const FgUtf32Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_VOID(
    void fgUtf16Free(
        FgUtf16 *   _this
    )
)

FG_FUNCTION_PTR(
    const FgUtf16Char * fgUtf16GetPtr(
        const FgUtf16 * _THIS
    )
)

FG_FUNCTION_NUM(
    FgSize fgUtf16GetLength(
        const FgUtf16 * _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16Assign(
        FgUtf16 *           _this
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromCharPtr(
        FgUtf16 *               _this
        , const FgUtf16Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromCharPtrWithLength(
        FgUtf16 *               _this
        , const FgUtf16Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromString(
        FgUtf16 *           _this
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromStringCharPtr(
        FgUtf16 *               _this
        , const FgStringChar *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromStringCharPtrWithLength(
        FgUtf16 *               _this
        , const FgStringChar *  _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromUtf8(
        FgUtf16 *           _this
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromUtf8CharPtr(
        FgUtf16 *               _this
        , const FgUtf8Char *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromUtf8CharPtrWithLength(
        FgUtf16 *               _this
        , const FgUtf8Char *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromUtf32(
        FgUtf16 *           _this
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromUtf32CharPtr(
        FgUtf16 *               _this
        , const FgUtf32Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16AssignFromUtf32CharPtrWithLength(
        FgUtf16 *               _this
        , const FgUtf32Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToInt(
        FgInt *             _to
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToIntWithBase(
        FgInt *             _to
        , const FgUtf16 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToUInt(
        FgUInt *            _to
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToUIntWithBase(
        FgUInt *            _to
        , const FgUtf16 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToLong(
        FgLong *            _to
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToLongWithBase(
        FgLong *            _to
        , const FgUtf16 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToULong(
        FgULong *           _to
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToULongWithBase(
        FgULong *           _to
        , const FgUtf16 *   _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToFloat(
        FgFloat *           _to
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgUtf16ToDouble(
        FgDouble *          _to
        , const FgUtf16 *   _FROM
    )
)

#endif  // FG_STRING_UTF16_H
