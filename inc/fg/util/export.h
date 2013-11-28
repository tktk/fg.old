#ifndef FG_UTIL_EXPORT_H
#define FG_UTIL_EXPORT_H

#undef  FGEXPORT

#if defined OS_LINUX    // OS
#   define FGEXPORT extern "C" __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define FGEXPORT extern "C" __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // FG_UTIL_EXPORT_H
