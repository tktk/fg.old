#include "fg/util/export.h"
#include "fg/boot/gameconfig.h"

#include "fg/string/utf32.h"
#include "fg/common/primitives.h"

FgGameConfig * fgGameConfigNew(
)
{
    return nullptr;
}

void fgGameConfigFree(
    FgGameConfig *
)
{
}

const FgUtf32 * fgGameConfigGetBinDir(
    const FgGameConfig *
)
{
    return nullptr;
}

FgBool fgGameConfigSetBinDir(
    FgGameConfig *
    , const FgUtf32 *
)
{
    return false;
}
