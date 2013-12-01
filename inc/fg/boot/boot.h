#ifndef FG_BOOT_BOOT_H
#define FG_BOOT_BOOT_H

#include "fg/boot/config.h"
#include "fg/string/utf32.h"
#include "fg/common/primitives.h"
#include "fg/util/import.h"

FGEXPORT FgInt fgBoot(
    const FgUtf32 *
    , const FgUtf32 *
    , const FgBootConfig *
);

#endif  // FG_BOOT_BOOT_H
