#ifndef FG_UTIL_IMPORT_NEW_H
#define FG_UTIL_IMPORT_NEW_H

#include "fg/util/import.h"

#ifndef FG_DEFINE_FUNCTION

#   define FG_DECLARE_FUNCTION( _func ) \
        FGEXPORT _func;
#   define FG_FUNCTION( _func, _dummyProc ) \
        FG_DECLARE_FUNCTION( _func )
#   define FG_FUNCTION_VOID( _func ) \
        FG_DECLARE_FUNCTION( _func )
#   define FG_FUNCTION_NUM( _func ) \
        FG_DECLARE_FUNCTION( _func )
#   define FG_FUNCTION_PTR( _func ) \
        FG_DECLARE_FUNCTION( _func )
#   define FG_FUNCTION_BOOL( _func ) \
        FG_DECLARE_FUNCTION( _func )

#endif  // FG_DEFINE_FUNCTION

#endif  // FG_UTIL_IMPORT_NEW_H
