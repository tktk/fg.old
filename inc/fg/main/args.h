#ifndef FG_MAIN_ARGS_H
#define FG_MAIN_ARGS_H

#include "fg/type/main/args.h"
#include "fg/type/gl/config.h"
#include "fg/util/import_new.h"

FG_FUNCTION_PTR(
    const FgGLConfig * fgArgsGetGLConfig(
        const FgArgs *
    )
)

#endif  // FG_MAIN_ARGS_H
