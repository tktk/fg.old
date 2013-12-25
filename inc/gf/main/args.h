#ifndef GF_MAIN_ARGS_H
#define GF_MAIN_ARGS_H

#include "fg/def/main/args.h"
#include "gf/def/main/bootconfig.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    FgArgs * gfArgsNew(
        const GfBootConfig *    _CONFIG
    )
)

FG_FUNCTION_VOID(
    void gfArgsFree(
        FgArgs *    _this
    )
)

#endif  // GF_MAIN_ARGS_H
