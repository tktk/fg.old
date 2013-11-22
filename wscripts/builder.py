# -*- coding: utf-8 -*-

from . import common
from . import cmdoption

import os.path

def buildProgram(
    _context,
    _target,
    sources = set(),
    useModules = set(),
    libraries = set(),
):
    _build(
        _context.program,
        _context,
        _target,
        sources,
        useModules,
        libraries,
    )

def buildShlib(
    _context,
    _target,
    sources = set(),
    useModules = set(),
    libraries = set(),
):
    _build(
        _context.shlib,
        _context,
        _target,
        sources,
        useModules,
        libraries,
    )

def _build(
    _buildFunc,
    _context,
    _target,
    _sources,
    _useModules,
    _libraries,
):
    _buildFunc(
        target = _target,
        source = _generateSources( _sources ),
        use = _useModules,
        lib = _libraries,
    )

def _generateSources(
    _sources,
    _parent = None,
):
    result = set()

    TYPE = type( _sources )
    if TYPE is dict:
        for key, values in _sources.items():
            parent = key
            if _parent is not None:
                parent = os.path.join(
                    _parent,
                    parent,
                )

            result |= _generateSources(
                values,
                parent,
            )
    elif TYPE is set or TYPE is list:
        for i in _sources:
            result |= _generateSources(
                i,
                _parent,
            )
    else:
        if _parent is not None:
            _sources = os.path.join(
                _parent,
                _sources,
            )

        result.add( _sources )

    return result
