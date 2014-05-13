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
    integer, = map(int, self.matchRegex(r'^(-?\d+)$'))
    return integer

  def readInts(self, n):
    if n == 1:
      return [self.readInt()]
    ints, = self.matchRegex(r'^((?:-?\d+ ){%d}-?\d+)$' % (n - 1))
    return map(int, ints.split(' '))

  def readString(self):
    string, = self.matchRegex(r'^(\S+)$')
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

  def checkValidCharacter(self, string, validCharacters):
    for c in string:
      self.check(c in validCharacters, '{0} is not in valid characters ({1})'.format(c, validCharacters))
    
  def checkSorted(self, list, listName = 'list'):
    self.check(list == sorted(list), '{0} should be sorted:\n{1}'.format(listName, list))

  def checkUnique(self, list, listName = 'list'):
    self.check(len(list) == len(set(list)), '{0} should not have duplicated elements:\n{1}'.format(listName, list))
