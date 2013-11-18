#ifndef GF_BOOT_LIBRARY_H
#define GF_BOOT_LIBRARY_H

typedef struct GfLibrary GfLibrary;

#include "gf/string/utf32.h"
#include "gf/util/import.h"

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

#endif  // GF_BOOT_LIBRARY_H
