#ifndef FG_UTIL_EXPORT_NEW_H
#define FG_UTIL_EXPORT_NEW_H

#include "fg/util/export.h"

#include <stddef.h>

#define FG_DEFINE_FUNCTION( _func, _dummyProc ) \
    FGEXPORT _func { _dummyProc };
#define FG_FUNCTION( _func, _dummyProc ) \
    FG_DEFINE_FUNCTION( _func, _dummyProc )
#define FG_FUNCTION_VOID( _func ) \
    FG_DEFINE_FUNCTION( _func, )
#define FG_FUNCTION_NUM( _func ) \
    FG_DEFINE_FUNCTION( _func, return 0; )
#define FG_FUNCTION_PTR( _func ) \
    FG_DEFINE_FUNCTION( _func, return NULL; )
#define FG_FUNCTION_BOOL( _func ) \
    FG_DEFINE_FUNCTION( _func, return false; )

#endif  // FG_UTIL_EXPORT_NEW_H
