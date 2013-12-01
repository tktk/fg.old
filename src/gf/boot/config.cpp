#include "fg/util/export.h"
#include "gf/boot/config.h"

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"

GfBootConfig * gfBootConfigNew(
)
{
    return nullptr;
}

void gfBootConfigFree(
    GfBootConfig *
)
{
}

const FgUtf32 * gfBootConfigGetBinDir(
    const GfBootConfig *
)
{
    return nullptr;
}

FgBool gfBootConfigSetBinDir(
    GfBootConfig *
    , const FgUtf32 *
)
{
    return false;
}
