#ifndef FG_UTIL_IMPORT_H
#define FG_UTIL_IMPORT_H

#include "fg/util/extern.h"

#ifndef FGEXPORT

#   if defined OS_LINUX // OS
#       define FGEXPORT FGEXTERN
#   elif defined OS_WINDOWS // OS
#       define FGEXPORT FGEXTERN __declspec( dllimport )
#   else   // OS
#       error 未対応のOS
#   endif  // OS

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

#endif  // FGEXPORT

#endif  // FG_UTIL_IMPORT_H
