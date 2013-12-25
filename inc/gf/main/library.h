#ifndef GF_MAIN_LIBRARY_H
#define GF_MAIN_LIBRARY_H

#include "gf/def/main/library.h"
#include "fg/def/string/utf32.h"
#include "fg/util/import.h"

FG_FUNCTION_PTR(
    GfLibrary * gfLibraryNew(
        const FgUtf32 *     _FILE
        , const FgUtf32 *   _DIR
    )
)

FG_FUNCTION_VOID(
    void gfLibraryFree(
        GfLibrary * _this
    )
)

FG_FUNCTION_PTR(
    void * gfLibraryGetAddress(
        GfLibrary *         _this
        , const FgUtf32 *   _SYMBOL_NAME
    )
)

#endif  // GF_MAIN_LIBRARY_H
