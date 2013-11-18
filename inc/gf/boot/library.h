#ifndef GF_BOOT_LIBRARY_H
#define GF_BOOT_LIBRARY_H

#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfLibrary GfLibrary;

GFEXTERNC_END

#include "gf/string/utf32.h"
#include "gf/util/import.h"

GFEXTERNC_START

GFEXPORT GfLibrary * gfLibraryNew(
    const GfUtf32 *
    , const GfUtf32 *
);

GFEXPORT void gfLibraryFree(
    GfLibrary *
);

GFEXPORT void * gfLibraryGetAddress(
    GfLibrary *
    , const GfUtf32 *
);

GFEXTERNC_END

#endif  // GF_BOOT_LIBRARY_H
