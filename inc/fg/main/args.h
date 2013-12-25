#ifndef FG_MAIN_ARGS_H
#define FG_MAIN_ARGS_H

#include "fg/def/main/args.h"
#include "fg/def/gl/config.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    const FgGLConfig * fgArgsGetGLConfig(
        const FgArgs *
    )
)

#endif  // FG_MAIN_ARGS_H
