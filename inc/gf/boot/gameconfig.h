#ifndef GF_BOOT_GAMECONFIG_H
#define GF_BOOT_GAMECONFIG_H

#include "gf/string/utf32.h"
#include "gf/common/primitives.h"
#include "gf/util/import.h"
#include "gf/util/externc.h"

GFEXTERNC_START

typedef struct GfGameConfig GfGameConfig;

GFEXPORT GfGameConfig * gfGameConfigNew(
);

GFEXPORT void gfGameConfigFree(
    GfGameConfig *
);

GFEXPORT GfBool gfGameConfigSetBinDir(
    GfGameConfig *
    , const GfUtf32 *
);

GFEXPORT GfBool gfGameConfigSetMainFile(
    GfGameConfig *
    , const GfUtf32 *
);

GFEXPORT GfBool gfGameConfigSetMain(
    GfGameConfig *
    , const GfUtf32 *
);

GFEXTERNC_END

#endif  // GF_BOOT_GAMECONFIG_H
