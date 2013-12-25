#ifndef FG_STRING_STRING_H
#define FG_STRING_STRING_H

#include "fg/def/string/string.h"
#include "fg/def/string/utf8.h"
#include "fg/def/string/utf16.h"
#include "fg/def/string/utf32.h"
#include "fg/def/common/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgString * fgStringNew(
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringClone(
        const FgString *    _ORG
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromCharPtr(
        const FgStringChar *    _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromCharPtrWithLength(
        const FgStringChar *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf8(
        const FgUtf8 *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf8CharPtr(
        const FgUtf8Char *  _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf8CharPtrWithLength(
        const FgUtf8Char *  _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf16(
        const FgUtf16 * _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf16CharPtr(
        const FgUtf16Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf16CharPtrWithLength(
        const FgUtf16Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf32(
        const FgUtf32 * _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf32CharPtr(
        const FgUtf32Char * _FROM
    )
)

FG_FUNCTION_PTR(
    FgString * fgStringNewFromUtf32CharPtrWithLength(
        const FgUtf32Char * _FROM
        , FgSize            _length
    )
)

FG_FUNCTION_VOID(
    void fgStringFree(
        FgString *  _this
    )
)

FG_FUNCTION_PTR(
    const FgStringChar * fgStringGetPtr(
        const FgString *    _THIS
    )
)

FG_FUNCTION_NUM(
    FgSize fgStringGetLength(
        const FgString *    _THIS
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssign(
        FgString *          _this
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromCharPtr(
        FgString *              _this
        , const FgStringChar *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromCharPtrWithLength(
        FgString *              _this
        , const FgStringChar *  _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf8(
        FgString *          _this
        , const FgUtf8 *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf8CharPtr(
        FgString *              _this
        , const FgUtf8Char *    _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf8CharPtrWithLength(
        FgString *              _this
        , const FgUtf8Char *    _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf16(
        FgString *          _this
        , const FgUtf16 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf16CharPtr(
        FgString *              _this
        , const FgUtf16Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf16CharPtrWithLength(
        FgString *              _this
        , const FgUtf16Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf32(
        FgString *          _this
        , const FgUtf32 *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf32CharPtr(
        FgString *              _this
        , const FgUtf32Char *   _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringAssignFromUtf32CharPtrWithLength(
        FgString *              _this
        , const FgUtf32Char *   _FROM
        , FgSize                _length
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToInt(
        FgInt *             _to
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToIntWithBase(
        FgInt *             _to
        , const FgString *  _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToUInt(
        FgUInt *            _to
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToUIntWithBase(
        FgUInt *            _to
        , const FgString *  _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToLong(
        FgLong *            _to
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToLongWithBase(
        FgLong *            _to
        , const FgString *  _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToULong(
        FgULong *           _to
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToULongWithBase(
        FgULong *           _to
        , const FgString *  _FROM
        , FgInt             _base
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToFloat(
        FgFloat *           _to
        , const FgString *  _FROM
    )
)

FG_FUNCTION_BOOL(
    FgBool fgStringToDouble(
        FgDouble *          _to
        , const FgString *  _FROM
    )
)

#endif  // FG_STRING_STRING_H
