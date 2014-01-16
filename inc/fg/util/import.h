#ifndef FG_UTIL_IMPORT_H
#define FG_UTIL_IMPORT_H

#include "fg/util/extern.h"

#ifndef FGEXPORT

#   if defined COMPILER_TYPE_CLANG  // COMPILER_TYPE
#       define FGEXPORT FGEXTERN
#   elif defined COMPILER_TYPE_MSVC // COMPILER_TYPE
#       define FGEXPORT FGEXTERN __declspec( dllimport )
#   else   // COMPILER_TYPE
#       error 未対応のコンパイラタイプ
#   endif  // COMPILER_TYPE

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
