#ifndef FG_BOOT_LIBRARY_H
#define FG_BOOT_LIBRARY_H

typedef struct FgLibrary FgLibrary;

#include "fg/string/utf32.h"
#include "fg/util/import.h"

FGEXPORT FgLibrary * fgLibraryNew(
    const FgUtf32 *
    , const FgUtf32 *
);

FGEXPORT void fgLibraryFree(
    FgLibrary *
);

FGEXPORT void * fgLibraryGetAddress(
    FgLibrary *
    , const FgUtf32 *
);

#endif  // FG_BOOT_LIBRARY_H
