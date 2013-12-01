#include "fg/util/export.h"
#include "fg/boot/config.h"

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"

FgBootConfig * fgBootConfigNew(
)
{
    return nullptr;
}

void fgBootConfigFree(
    FgBootConfig *
)
{
}

const FgUtf32 * fgBootConfigGetBinDir(
    const FgBootConfig *
)
{
    return nullptr;
}

FgBool fgBootConfigSetBinDir(
    FgBootConfig *
    , const FgUtf32 *
)
{
    return false;
}
