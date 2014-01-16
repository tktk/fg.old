# -*- coding: utf-8 -*-

from waflib import Utils

BUILD = 'build'
BUILD_DEBUG = 'debug'
BUILD_RELEASE = 'release'

COMPILER_TYPE = 'compilertype'
COMPILER_TYPE_CLANG = 'clang'
COMPILER_TYPE_MSVC = 'msvc'

LINKER_TYPE = 'linkertype'
LINKER_TYPE_LD = 'ld'
LINKER_TYPE_MSVC = 'msvc'

TYPE = 'type'
_TYPE_STRING = 'string'

DEFAULT = 'default'

_OS_LINUX = 'linux'
_OS_WINDOWS = 'win32'

def _defaultValue( _VALUES ):
    PLATFORM = Utils.unversioned_sys_platform()

    if PLATFORM in _VALUES:
        return _VALUES[ PLATFORM ]

    return None

OPTIONS = {
    BUILD : {
        TYPE : _TYPE_STRING,
        DEFAULT : BUILD_DEBUG,
    },

    COMPILER_TYPE : {
        TYPE : _TYPE_STRING,
        DEFAULT : _defaultValue(
            {
                _OS_LINUX : COMPILER_TYPE_CLANG,
                _OS_WINDOWS : COMPILER_TYPE_MSVC,
            },
        ),
    },
    LINKER_TYPE : {
        TYPE : _TYPE_STRING,
        DEFAULT : _defaultValue(
            {
                _OS_LINUX : LINKER_TYPE_LD,
                _OS_WINDOWS : LINKER_TYPE_MSVC,
            },
        ),
    },
}
