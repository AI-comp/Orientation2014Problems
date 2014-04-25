#!/usr/bin/python2

import os
import sys
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  a, b = ch.readInts(2)
  ch.checkRange(a, 0, MAX, 'A')
  ch.checkRange(b, 0, MAX, 'B')

if __name__ == '__main__':
  main()
