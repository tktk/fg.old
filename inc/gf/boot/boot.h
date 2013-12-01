#ifndef GF_BOOT_BOOT_H
#define GF_BOOT_BOOT_H

#include "gf/boot/config.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgInt gfBoot(
    const FgUtf32 *
    , const FgUtf32 *
    , const GfBootConfig *
);

#endif  // GF_BOOT_BOOT_H
