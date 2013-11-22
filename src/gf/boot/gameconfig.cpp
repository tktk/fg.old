#include "gf/util/export.h"
#include "gf/boot/gameconfig.h"

#include "gf/string/utf32.h"
#include "gf/common/primitives.h"

GfGameConfig * gfGameConfigNew(
)
{
    return nullptr;
}

void gfGameConfigFree(
    GfGameConfig *
)
{
}

const GfUtf32 * gfGameConfigGetBinDir(
    const GfGameConfig *
)
{
    return nullptr;
}

GfBool gfGameConfigSetBinDir(
    GfGameConfig *
    , const GfUtf32 *
)
{
    return false;
}

const GfUtf32 * gfGameConfigGetMainFile(
    const GfGameConfig *
)
{
    return nullptr;
}

GfBool gfGameConfigSetMainFile(
    GfGameConfig *
    , const GfUtf32 *
)
{
    return false;
}

const GfUtf32 * gfGameConfigGetMain(
    const GfGameConfig *
)
{
    return nullptr;
}

GfBool gfGameConfigSetMain(
    GfGameConfig *
    , const GfUtf32 *
)
{
    return false;
}
