# -*- coding: utf-8 -*-

from wscripts import common
from wscripts import cmdoption
from wscripts import fg
from wscripts import gf

import os.path

APPNAME = 'fg'
VERSION = '0.3.0'

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
    cmdoption.OS_LINUX : _generateFlags(
        common = [
            'OS_LINUX',
        ],
        debug = [
            'DEBUG',
        ],
    ),
    cmdoption.OS_WINDOWS : _generateFlags(
        common = [
            'OS_WINDOWS',
        ],
        debug = [
            'DEBUG',
        ],
    ),
}

def options( _context ):
    for KEY, OPTION in cmdoption.OPTIONS.items():
        _context.add_option(
            _optionKey( KEY ),
            type = OPTION[ cmdoption.TYPE ],
            default = OPTION[ cmdoption.DEFAULT ],
        )

    _context.load( 'compiler_cxx' )

def _optionKey(
    _KEY
):
    return '--' + _KEY

def configure( _context ):
    _configureBuild( _context )
    _configureOs( _context )
    _configureIncludes( _context )
    _configureDefines( _context )
    _configureCxxflags( _context )
    _configureLinkflags( _context )

    _context.load( 'compiler_cxx' )

def _configureBuild( _context ):
    BUILD = _context.options.build

    _context.msg(
        cmdoption.BUILD,
        BUILD,
    )

    if BUILD == cmdoption.BUILD_DEBUG:
        return
    if BUILD == cmdoption.BUILD_RELEASE:
        return

    _context.fatal( '非対応のビルドタイプ' )

def _configureOs( _context ):
    OS = _context.options.os

    _context.msg(
        cmdoption.OS,
        OS,
    )

    _context.env.MY_OS = OS

def _configureIncludes( _context ):
    INCLUDES = [
        os.path.abspath( i )
        for i in [
            common.INCLUDE_DIR,
        ]
    ]

    _context.msg(
        'includes',
        INCLUDES,
    )

    _context.env.MY_INCLUDES = INCLUDES

def _configureDefines( _context ):
    defines = None
    OS = _context.env.MY_OS
    if OS in _DEFINES:
        defines = _DEFINES[ OS ][ _context.options.build ]

    _context.msg(
        'defines',
        defines,
    )

    _context.env.MY_DEFINES = defines

def _configureCxxflags( _context ):
    CXXFLAGS_BASE = _context.options.cxxflagsbase

    _context.msg(
        cmdoption.CXXFLAGS_BASE,
        CXXFLAGS_BASE,
    )

    CXXFLAGS = _configureFlags(
        _context,
        CXXFLAGS_BASE,
        _CXXFLAGS_BASES,
    )

    _context.msg(
        'cxxflags',
        CXXFLAGS,
    )

    _context.env.MY_CXXFLAGS = CXXFLAGS

def _configureLinkflags( _context ):
    LINKFLAGS_BASE = _context.options.linkflagsbase

    _context.msg(
        cmdoption.LINKFLAGS_BASE,
        LINKFLAGS_BASE,
    )

    LINKFLAGS = _configureFlags(
        _context,
        LINKFLAGS_BASE,
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
