#ifndef GF_UTIL_STRUCT_H
#define GF_UTIL_STRUCT_H

#include "gf/common/primitives.h"
#include "gf/util/externc.h"
#include "gf/util/import.h"

#define GFSTRUCT(   \
    _namespace  \
    , _struct   \
)   \
    GFEXTERNC_START \
    typedef struct _namespace##_struct _namespace##_struct; \
    GFEXPORT void _namespace##_struct##Free(    \
        _namespace##_struct *   \
    );  \
    GFEXTERNC_END   \


#define GFKEYSTRUCT( \
    _namespace  \
    , _struct   \
)   \
    GFSTRUCT(   \
        _namespace  \
        , _struct   \
    )   \
    GFEXTERNC_START \
    GFEXPORT gfBool _namespace##_struct##Less(  \
        const _namespace##_struct * \
        , const _namespace##_struct *   \
    );  \
    GFEXTERNC_END   \


#endif  // GF_UTIL_STRUCT_H
