#ifndef GF_UTIL_EXPORT_H
#define GF_UTIL_EXPORT_H

#if defined OS_LINUX    // OS
#   define GFEXPORT __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define GFEXPORT __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // GF_UTIL_EXPORT_H
