#ifndef FG_BOOT_GAMECONFIG_H
#define FG_BOOT_GAMECONFIG_H

typedef struct FgGameConfig FgGameConfig;

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgGameConfig * fgGameConfigNew(
);

FGEXPORT void fgGameConfigFree(
    FgGameConfig *
);

FGEXPORT const FgUtf32 * fgGameConfigGetBinDir(
    const FgGameConfig *
);

FGEXPORT FgBool fgGameConfigSetBinDir(
    FgGameConfig *
    , const FgUtf32 *
);

FGEXPORT const FgUtf32 * fgGameConfigGetMainFile(
    const FgGameConfig *
);

FGEXPORT FgBool fgGameConfigSetMainFile(
    FgGameConfig *
    , const FgUtf32 *
);

FGEXPORT const FgUtf32 * fgGameConfigGetMain(
    const FgGameConfig *
);

FGEXPORT FgBool fgGameConfigSetMain(
    FgGameConfig *
    , const FgUtf32 *
);

#endif  // FG_BOOT_GAMECONFIG_H
