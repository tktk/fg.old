#include "fg/util/export.h"
#include "fg/gl/functions.h"

#define GL_DEFINE_FUNCTION( _returnType, _name, _args, _proc ) \
    _returnType fgGL##_name _args \
    { \
        _proc \
    } \

#define FG_GL_FUNCTION( _dummyReturnValue, _returnType, _name, _args, _argValues ) \
    GL_DEFINE_FUNCTION( _returnType, _name, _args, return _dummyReturnValue; )

#define FG_GL_VOID_FUNCTION( _name, _args, _argValues ) \
    GL_DEFINE_FUNCTION( void, _name, _args, )

FG_GL_FUNCTIONS

#undef  FG_GL_VOID_FUNCTION

#undef  FG_GL_FUNCTION

#undef  GL_DEFINE_FUNCTION
