#ifndef FG_UTIL_EXPORTCOMMON_H
#define FG_UTIL_EXPORTCOMMON_H

#include "fg/util/extern.h"

#if defined OS_LINUX    // OS
#   define FGEXPORT FGEXTERN __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define FGEXPORT FGEXTERN __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // FG_UTIL_EXPORTCOMMON_H
