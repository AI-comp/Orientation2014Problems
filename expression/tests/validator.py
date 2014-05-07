#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    coefficients = ch.readInts(4)
    if coefficients == [0, 0, 0, 0]:
      break
    for i in xrange(len(coefficients)):
      ch.checkRange(coefficients[i], MIN, MAX, chr(ord('A') + i))

if __name__ == '__main__':
  main()
