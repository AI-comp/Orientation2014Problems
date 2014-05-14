#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    a, b = ch.readInts(2)
    if a == 0 and b == 0:
      break
    ch.checkRange(a, MIN, MAX, 'A')
    ch.checkRange(b, MIN, MAX, 'B')

if __name__ == '__main__':
  main()
