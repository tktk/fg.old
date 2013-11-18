#ifndef GF_UTIL_EXPORT_H
#define GF_UTIL_EXPORT_H

#if defined OS_LINUX    // OS
#   define GFEXPORT extern "C" __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define GFEXPORT extern "C" __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // GF_UTIL_EXPORT_H
