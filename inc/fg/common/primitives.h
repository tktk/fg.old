#ifndef FG_COMMON_PRIMITIVES_H
#define FG_COMMON_PRIMITIVES_H

#include <stddef.h>

#ifndef __cplusplus
#   include <uchar.h>
#endif  // __cplusplus

typedef bool FgBool;

typedef size_t FgSize;

typedef char FgByte;
typedef unsigned char FgUByte;
typedef short FgShort;
typedef unsigned short FgUShort;
typedef int FgInt;
typedef unsigned int FgUInt;
typedef long long FgLong;
typedef unsigned long long FgULong;

typedef float FgFloat;
typedef double FgDouble;

typedef char FgStringChar;
typedef char FgUtf8Char;
typedef char16_t FgUtf16Char;
typedef char32_t FgUtf32Char;

#endif  // FG_COMMON_PRIMITIVES_H
