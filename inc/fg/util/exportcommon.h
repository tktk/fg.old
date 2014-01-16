#ifndef FG_UTIL_EXPORTCOMMON_H
#define FG_UTIL_EXPORTCOMMON_H

#include "fg/util/extern.h"

#if defined COMPILER_TYPE_CLANG // COMPILER_TYPE
#   define FGEXPORT FGEXTERN __attribute__( ( visibility( "default" ) ) )
#elif defined COMPILER_TYPE_MSVC    // COMPILER_TYPE
#   define FGEXPORT FGEXTERN __declspec( dllexport )
#else   // COMPILER_TYPE
#   error 未対応のコンパイラタイプ
#endif  // COMPILER_TYPE

#endif  // FG_UTIL_EXPORTCOMMON_H
