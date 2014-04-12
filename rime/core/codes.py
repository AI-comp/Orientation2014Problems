#!/usr/bin/python
#
# Copyright (c) 2011 Rime Project.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#

import os.path

from rime.util import class_registry


class RunResult(object):
  """Result of a single run.

  Note that this is not judgement result but just execution status.
  """

  OK = 'OK'
  NG = 'Exited Abnormally'
  RE = 'Runtime Error'
  TLE = 'Time Limit Exceeded'

  def __init__(self, status, time):
    self.status = status
    self.time = time


class Code(object):
  """Interface of program codes.

  Supports operations such as compile, run, clean.
  """

  # Set to True if the deriving class does not require compilation
  # (e.g. script language).
  QUIET_COMPILE = False

  # Prefix of exported directive.
  # (e.g. prefix "foo" generates foo_solution, foo_generator, etc.)
  PREFIX = None

  # Extensions of this type of source codes. Used to autodetect code types.
  EXTENSIONS = None

  def __init__(self, src_name, src_dir, out_dir):
    self.src_name = src_name
    self.src_dir = src_dir
    self.out_dir = out_dir

  def Compile(self):
    raise NotImplementedError()

  def Run(self, args, cwd, input, output, timeout, precise, redirect_error=False):
    raise NotImplementedError()

  def Clean(self):
    raise NotImplementedError()


registry = class_registry.ClassRegistry(Code)


def CreateDictionary(name_fmt, codeset, src_dir, out_dir, wrapper=None):
  """Creates a dictionary used for configs."""
  exports = {}
  if wrapper is None:
    wrapper = lambda c: c
  for code_class in registry.classes.values():
    def Closure(code_class):
      def Registerer(src, *args, **kwargs):
        codeset.append(
          wrapper(code_class)(src_name=src, src_dir=src_dir, out_dir=out_dir,
                              *args, **kwargs))
      exports[name_fmt % code_class.PREFIX] = Registerer
    Closure(code_class)
  return exports


class UnknownCodeExtensionException(Exception):
  pass


class AutoCode(Code):
  """Code class with automatic code type detection."""

  PREFIX = 'auto'
  EXTENSIONS = []

  def __init__(self, src_name, src_dir, out_dir, *args, **kwargs):
    matched_code_class = None
    src_ext = os.path.splitext(src_name)[1][1:]
    for code_class in registry.classes.values():
      if src_ext in code_class.EXTENSIONS:
        break
    else:
      code_class = None
    if not code_class:
      raise UnknownCodeExtensionException(
        'Unknown code extension: %s' % src_ext)
    # Swap the class in runtime.
    self.__class__ = code_class
    self.__init__(src_name, src_dir, out_dir, *args, **kwargs)


registry.Add(AutoCode)
