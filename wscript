# -*- coding: utf-8 -*-

from wscripts import common
from wscripts import cmdoption
from wscripts import fg
from wscripts import gf

from waflib import Utils

import os.path

APPNAME = 'fg'
VERSION = '0.1.0'

out = common.BUILD_DIR

def _generateFlags(
    common = [],
    debug = [],
    release = [],
):
    return {
        BUILD : common + OPTIONS
        for BUILD, OPTIONS in {
            cmdoption.BUILD_DEBUG : debug,
            cmdoption.BUILD_RELEASE : release,
        }.items()
    }

_CXXFLAGS_BASES = {
    cmdoption.CXXFLAGS_BASE_GXX : _generateFlags(
        common = [
            '-Wall',
            '-fno-rtti',
            '-fvisibility=hidden',
            '-std=c++0x',
        ],
        debug = [
            '-O0',
            '-g',
        ],
        release = [
            '-O2',
        ],
    ),
    cmdoption.CXXFLAGS_BASE_MSVC : _generateFlags(
        common = [
            '/Wall',
            '/nologo',
            '/EHs',
        ],
        debug = [
            '/MDd',
            '/Od',
        ],
        release = [
            '/MD',
            '/O2',
            '/Oi',
            '/GL',
        ],
    ),
}

_LINKFLAGS_BASES = {
    cmdoption.LINKFLAGS_BASE_LD : _generateFlags(
        debug = [
            '-rdynamic',
        ],
    ),
    cmdoption.LINKFLAGS_BASE_MSVC : _generateFlags(
        common = [
            '/NOLOGO',
            '/DYNAMICBASE',
            '/NXCOMPAT',
        ],
        release = [
            '/OPT:REF',
            '/OPT:ICF',
            '/LTCG',
        ],
    ),
}

_DEFINES = {
    common.OS_LINUX : _generateFlags(
        common = [
            'OS_LINUX',
        ],
        debug = [
            'DEBUG',
        ],
    ),
    common.OS_WINDOWS : _generateFlags(
        common = [
            'OS_WINDOWS',
        ],
        debug = [
            'DEBUG',
        ],
    ),
}

def options( _context ):
    for KEY, DEFAULT in cmdoption.OPTIONS.items():
        _context.add_option(
            _optionKey( KEY ),
            type = DEFAULT[ cmdoption.TYPE ],
            default = DEFAULT[ cmdoption.VALUE ],
        )

    _context.load( 'compiler_cxx' )

def _optionKey(
    _KEY
):
    return '--' + _KEY

def configure( _context ):
    _context.msg(
        cmdoption.BUILD,
        _context.options.build,
    )
    _context.msg(
        cmdoption.CXXFLAGS_BASE,
        _context.options.cxxflagsbase
    )
    _context.msg(
        cmdoption.LINKFLAGS_BASE,
        _context.options.linkflagsbase,
    )

    _checkBuild(
        _context,
    )

    _configureIncludes( _context )
    _configureDefines( _context )
    _configureCxxflags( _context )
    _configureLinkflags( _context )

    _context.load( 'compiler_cxx' )

def _checkBuild( _context ):
    BUILD = _context.options.build

    if BUILD == cmdoption.BUILD_DEBUG:
        return
    if BUILD == cmdoption.BUILD_RELEASE:
        return

    _context.fatal( '非対応のビルドタイプ' )

def _configureIncludes( _context ):
    includes = [
        os.path.abspath( i )
        for i in [
            common.INCLUDE_DIR,
        ]
    ]

    _context.msg(
        'includes',
        includes,
    )

    _context.env.MY_INCLUDES = includes

def _configureDefines( _context ):
    defines = None
    PLATFORM = Utils.unversioned_sys_platform()
    if PLATFORM in _DEFINES:
        defines = _DEFINES[ PLATFORM ][ _context.options.build ]

    _context.msg(
        'defines',
        defines,
    )

    _context.env.MY_DEFINES = defines

def _configureCxxflags( _context ):
    CXXFLAGS = _configureFlags(
        _context,
        _context.options.cxxflagsbase,
        _CXXFLAGS_BASES,
    )

    _context.msg(
        'cxxflags',
        CXXFLAGS,
    )

    _context.env.MY_CXXFLAGS = CXXFLAGS

def _configureLinkflags( _context ):
    LINKFLAGS = _configureFlags(
        _context,
        _context.options.linkflagsbase,
        _LINKFLAGS_BASES,
    )

    _context.msg(
        'linkflags',
        LINKFLAGS,
    )

    _context.env.MY_LINKFLAGS = LINKFLAGS

def _configureFlags(
    _context,
    _FLAGS_BASE,
    _FLAGS_BASES,
):
    flags = None
    if _FLAGS_BASE in _FLAGS_BASES:
        flags = _FLAGS_BASES[ _FLAGS_BASE ][ _context.options.build ]

    return flags

def build( _context ):
    fg.build( _context )
    gf.build( _context )
