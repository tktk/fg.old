#ifndef GF_BOOT_CONFIG_H
#define GF_BOOT_CONFIG_H

typedef struct GfBootConfig GfBootConfig;

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT GfBootConfig * gfBootConfigNew(
);

FGEXPORT void gfBootConfigFree(
    GfBootConfig *
);

FGEXPORT FgBool gfBootConfigExistsBinDir(
    const GfBootConfig *
);

FGEXPORT const FgUtf32 * gfBootConfigGetBinDir(
    const GfBootConfig *
);

FGEXPORT FgBool gfBootConfigSetBinDir(
    GfBootConfig *
    , const FgUtf32 *
);

FGEXPORT void gfBootConfigClearBinDir(
    GfBootConfig *
);

#endif  // GF_BOOT_CONFIG_H
