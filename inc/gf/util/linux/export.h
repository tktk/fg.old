#ifndef GF_UTIL_LINUX_EXPORT_H
#define GF_UTIL_LINUX_EXPORT_H

#define GFCONSTRUCTOR extern "C" __attribute__( ( constructor ) )
#define GFDESTRUCTOR extern "C" __attribute__( ( destructor ) )

#endif  // GF_UTIL_LINUX_EXPORT_H
