#ifndef GF_GL_TYPES_H
#define GF_GL_TYPES_H

#include <stddef.h>
#include <stdint.h>

// GL_VERSION_1_0
typedef unsigned int GfGLenum;
typedef float GfGLfloat;
typedef int GfGLint;
typedef int GfGLsizei;
typedef void GfGLvoid;
typedef unsigned int GfGLbitfield;
typedef double GfGLdouble;
typedef unsigned int GfGLuint;
typedef unsigned char GfGLboolean;
typedef unsigned char GfGLubyte;

// GL_VERSION_1_1
typedef float GfGLclampf;
typedef double GfGLclampd;

// GL_VERSION_1_5
typedef ptrdiff_t GfGLsizeiptr;
typedef ptrdiff_t GfGLintptr;

// GL_VERSION_2_0
typedef char GfGLchar;
typedef short GfGLshort;
typedef signed char GfGLbyte;
typedef unsigned short GfGLushort;

// GL_VERSION_3_0
typedef unsigned short GfGLhalf;

// GL_VERSION_3_2
typedef struct __GfGLsync *GfGLsync;
typedef uint64_t GfGLuint64;
typedef int64_t GfGLint64;

// GL_ARB_bindless_texture
typedef uint64_t GfGLuint64EXT;

// GL_ARB_half_float_pixel
typedef unsigned short GfGLhalfARB;

// GL_ARB_shader_objects
typedef unsigned int GfGLhandleARB; //FIXME __APPLE__の場合void *
typedef char GfGLcharARB;

// GL_ARB_vertex_buffer_object
typedef ptrdiff_t GfGLsizeiptrARB;
typedef ptrdiff_t GfGLintptrARB;

// GL_OES_fixed_point
typedef GfGLint GfGLfixed;

// GL_NV_gpu_shader5
typedef int64_t GfGLint64EXT;

// GL_NV_half_float
typedef unsigned short GfGLhalfNV;

// GL_NV_vdpau_interop
typedef GfGLintptr GfGLvdpauSurfaceNV;

#endif  // GF_GL_TYPES_H
