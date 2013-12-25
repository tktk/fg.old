#ifndef FG_TYPE_GL_TYPES_H
#define FG_TYPE_GL_TYPES_H

#include <stddef.h>
#include <stdint.h>

// GL_VERSION_1_0
typedef unsigned int FgGLenum;
typedef float FgGLfloat;
typedef int FgGLint;
typedef int FgGLsizei;
typedef void FgGLvoid;
typedef unsigned int FgGLbitfield;
typedef double FgGLdouble;
typedef unsigned int FgGLuint;
typedef unsigned char FgGLboolean;
typedef unsigned char FgGLubyte;

// GL_VERSION_1_1
typedef float FgGLclampf;
typedef double FgGLclampd;

// GL_VERSION_1_5
typedef ptrdiff_t FgGLsizeiptr;
typedef ptrdiff_t FgGLintptr;

// GL_VERSION_2_0
typedef char FgGLchar;
typedef short FgGLshort;
typedef signed char FgGLbyte;
typedef unsigned short FgGLushort;

// GL_VERSION_3_0
typedef unsigned short FgGLhalf;

// GL_VERSION_3_2
typedef struct __FgGLsync *FgGLsync;
typedef uint64_t FgGLuint64;
typedef int64_t FgGLint64;

// GL_VERSION_4_3
typedef void ( * FgGLDebugProc )(
    FgGLenum
    , FgGLenum
    , FgGLuint
    , FgGLenum
    , FgGLsizei
    , const FgGLchar *
    , const void *
);

// GL_ARB_bindless_texture
typedef uint64_t FgGLuint64EXT;

// GL_ARB_cl_event
typedef struct __FgGLclcontext *FgGLclcontext;
typedef struct __FgGLclevent *FgGLclevent;

// GL_ARB_debug_output
typedef void ( * FgGLDebugProcARB )(
    FgGLenum
    , FgGLenum
    , FgGLuint
    , FgGLenum
    , FgGLsizei
    , const FgGLchar *
    , const void *
);

// GL_ARB_half_float_pixel
typedef unsigned short FgGLhalfARB;

// GL_ARB_shader_objects
typedef unsigned int FgGLhandleARB; //FIXME __APPLE__の場合void *
typedef char FgGLcharARB;

// GL_ARB_vertex_buffer_object
typedef ptrdiff_t FgGLsizeiptrARB;
typedef ptrdiff_t FgGLintptrARB;

// GL_OES_fixed_point
typedef FgGLint FgGLfixed;

// GL_AMD_debug_output
typedef void ( * FgGLDebugProcAMD )(
    FgGLuint
    , FgGLenum
    , FgGLenum
    , FgGLsizei
    , const FgGLchar *
    , void *
);

// GL_NV_gpu_shader5
typedef int64_t FgGLint64EXT;

// GL_NV_half_float
typedef unsigned short FgGLhalfNV;

// GL_NV_vdpau_interop
typedef FgGLintptr FgGLvdpauSurfaceNV;

#endif  // FG_TYPE_GL_TYPES_H
