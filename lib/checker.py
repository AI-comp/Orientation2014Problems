#!/usr/bin/python2

import sys
import re

class Checker:
  def __init__(self):
    self.lineNo = 0

  def readLine(self):
    self.lineNo += 1
    return sys.stdin.readline()

  def readInt(self):
    integer, = map(int, self.matchRegex(r'^(\d+)\n$'))
    return integer

  def readInts(self, n):
    if n == 1:
      return [self.readInt()]
    return map(int, self.matchRegex(r'^(?:(\d+) ){%d}(\d+)\n$' % (n - 1)))

  def readString(self, length, validCharacters):
    string, = self.matchRegex(r'^(.{%d})$' % (length))
    for c in string:
      self.check(c in validCharacters, '{0} is not in valid characters ({1})'.format(c, validCharacters))
    return string

  def matchRegex(self, regex):
    line = self.readLine()
    m = re.match(regex, line)
    self.check(m, 'Does not match with regex:\n%s\n%s' % (line, regex))
    return m.groups()

  def check(self, predicate, message):
    assert predicate, 'Line %d: %s' % (self.lineNo, message)

  def checkRange(self, value, minimum, maximum, name = 'Value'):
    self.check(minimum <= value <= maximum,
        '{0} out of range: {0} = {1}, but should be in {2} to {3}'.format(name, value, minimum, maximum))

  def checkLength(self, list, length, listName = 'list', lengthName = 'length variable'):
    self.check(len(list) == length,
        'Length of {0} = {1} does not match {2} = {3}'.format(listName, len(list), lengthName, length))
