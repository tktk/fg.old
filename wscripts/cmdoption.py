# -*- coding: utf-8 -*-

from . import common

from waflib import Utils

BUILD = 'build'
BUILD_DEBUG = 'debug'
BUILD_RELEASE = 'release'

CXXFLAGS_BASE = 'cxxflagsbase'
CXXFLAGS_BASE_GXX = 'g++'
CXXFLAGS_BASE_MSVC = 'msvc'

LINKFLAGS_BASE = 'linkflagsbase'
LINKFLAGS_BASE_LD = 'ld'
LINKFLAGS_BASE_MSVC = 'msvc'

TYPE = 'type'
_TYPE_STRING = 'string'

VALUE = 'value'

def _defaultValue( _values ):
    PLATFORM = Utils.unversioned_sys_platform()
    if PLATFORM in _values:
        return _values[ PLATFORM ]
    else:
        return None

OPTIONS = {
    BUILD : {
        TYPE : _TYPE_STRING,
        VALUE : BUILD_DEBUG,
    },
    CXXFLAGS_BASE : {
        TYPE : _TYPE_STRING,
        VALUE : _defaultValue(
            {
                common.OS_LINUX : CXXFLAGS_BASE_GXX,
                common.OS_WINDOWS : CXXFLAGS_BASE_MSVC,
            },
        ),
    },
    LINKFLAGS_BASE : {
        TYPE : _TYPE_STRING,
        VALUE : _defaultValue(
            {
                common.OS_LINUX : LINKFLAGS_BASE_LD,
                common.OS_WINDOWS : LINKFLAGS_BASE_MSVC,
            },
        ),
    },
}
