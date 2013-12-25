#ifndef FG_UTIL_EXPORT_H
#define FG_UTIL_EXPORT_H

#include <stddef.h>

#ifndef __cplusplus
#   define FGEXTERN extern
#else   // __cplusplus
#   define FGEXTERN extern "C"
#endif  // __cplusplus

#if defined OS_LINUX    // OS
#   define FGEXPORT FGEXTERN __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define FGEXPORT FGEXTERN __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

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

#endif  // FG_UTIL_EXPORT_H
