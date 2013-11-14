#ifndef GF_COMMON_PRIMITIVES_H
#define GF_COMMON_PRIMITIVES_H

#include <stddef.h>

#ifndef __cplusplus
#   include <uchar.h>
#endif  // __cplusplus

typedef bool GfBool;

typedef size_t GfSize;

typedef char GfByte;
typedef unsigned char GfUByte;
typedef short GfShort;
typedef unsigned short GfUShort;
typedef int GfInt;
typedef unsigned int GfUInt;
typedef long long GfLong;
typedef unsigned long long GfULong;

typedef float GfFloat;
typedef double GfDouble;

typedef char GfStringChar;
typedef char GfUtf8Char;
typedef char16_t GfUtf16Char;
typedef char32_t GfUtf32Char;

#endif  // GF_COMMON_PRIMITIVES_H
