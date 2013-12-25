#ifndef FG_UTIL_EXPORT_NEW_H
#define FG_UTIL_EXPORT_NEW_H

#include "fg/util/export.h"

#define FG_DEFINE_FUNCTION( _func, _proc ) \
    FGEXPORT _func { _proc };
#define FG_FUNCTION_VOID( _func ) \
    FG_DEFINE_FUNCTION( _func, )
#define FG_FUNCTION_NUM( _func ) \
    FG_DEFINE_FUNCTION( _func, return 0; )
#define FG_FUNCTION_PTR( _func ) \
    FG_DEFINE_FUNCTION( _func, return NULL; )
#define FG_FUNCTION_BOOL( _func ) \
    FG_DEFINE_FUNCTION( _func, return false; )

#endif  // FG_UTIL_EXPORT_NEW_H
