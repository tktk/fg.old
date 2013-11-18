#ifndef GF_BOOT_GAMECONFIG_H
#define GF_BOOT_GAMECONFIG_H

#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfGameConfig GfGameConfig;

GFEXTERNC_END

#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"

GFEXTERNC_START

GFEXPORT GfGameConfig * gfGameConfigNew(
);

GFEXPORT void gfGameConfigFree(
    GfGameConfig *
);

GFEXPORT const GfUtf32 * gfGameConfigGetBinDir(
    const GfGameConfig *
);

GFEXPORT GfBool gfGameConfigSetBinDir(
    GfGameConfig *
    , const GfUtf32 *
);

GFEXPORT const GfUtf32 * gfGameConfigGetMainFile(
    const GfGameConfig *
);

GFEXPORT GfBool gfGameConfigSetMainFile(
    GfGameConfig *
    , const GfUtf32 *
);

GFEXPORT const GfUtf32 * gfGameConfigGetMain(
    const GfGameConfig *
);

GFEXPORT GfBool gfGameConfigSetMain(
    GfGameConfig *
    , const GfUtf32 *
);

GFEXTERNC_END

#endif  // GF_BOOT_GAMECONFIG_H
