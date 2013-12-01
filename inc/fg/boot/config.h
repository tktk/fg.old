#ifndef FG_BOOT_CONFIG_H
#define FG_BOOT_CONFIG_H

typedef struct FgBootConfig FgBootConfig;

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgBootConfig * fgBootConfigNew(
);

FGEXPORT void fgBootConfigFree(
    FgBootConfig *
);

FGEXPORT const FgUtf32 * fgBootConfigGetBinDir(
    const FgBootConfig *
);

FGEXPORT FgBool fgBootConfigSetBinDir(
    FgBootConfig *
    , const FgUtf32 *
);

#endif  // FG_BOOT_CONFIG_H
