#ifndef GF_BOOT_LIBRARY_H
#define GF_BOOT_LIBRARY_H

typedef struct GfLibrary GfLibrary;

#include "fg/string/utf32.h"
#include "fg/util/import.h"

FGEXPORT GfLibrary * gfLibraryNew(
    const FgUtf32 *
    , const FgUtf32 *
);

FGEXPORT void gfLibraryFree(
    GfLibrary *
);

FGEXPORT void * gfLibraryGetAddress(
    GfLibrary *
    , const FgUtf32 *
);

#endif  // GF_BOOT_LIBRARY_H
