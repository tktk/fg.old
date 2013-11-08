#ifndef GF_UTIL_EXTERNC_H
#define GF_UTIL_EXTERNC_H

#ifdef  __cplusplus
#   define GFEXTERNC_START  extern "C" {
#   define GFEXTERNC_END    }
#else   // __cplusplus
#   define GFEXTERNC_START
#   define GFEXTERNC_END
#endif  // __cplusplus

#endif  // GF_UTIL_EXTERNC_H
