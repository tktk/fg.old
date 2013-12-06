﻿#include "fg/util/export.h"
#include "fg/gl/functions.h"

#define GL_DEFINE_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    _returnType fgGL##_name _args \
    { \
        return _dummyReturnValue; \
    } \

#define FG_GL_FUNCTION GL_DEFINE_FUNCTION
    FG_GL_FUNCTIONS
#undef  FG_GL_FUNCTION

#undef  GL_DEFINE_FUNCTION