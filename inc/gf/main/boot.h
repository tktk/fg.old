#ifndef GF_MAIN_BOOT_H
#define GF_MAIN_BOOT_H

#include "gf/def/main/bootconfig.h"
#include "fg/def/string/utf32.h"
#include "fg/def/primitives.h"
#include "fg/util/import.h"

FG_FUNCTION_NUM(
    FgInt gfBoot(
        const FgUtf32 *         _MAIN_FILE_NAME
        , const FgUtf32 *       _MAIN_NAME
        , const GfBootConfig *  _CONFIG
    )
)

#endif  // GF_MAIN_BOOT_H
