#!/usr/bin/python2

import os
import sys
import string
from constants import *
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    l = ch.readInt()
    if l == 0:
      break
    ch.checkRange(l, L_MIN, L_MAX, 'L')

    s = ch.readString()
    ch.checkValidCharacter(s, '+-.')
    ch.checkRange(len(s), l, l, 'length of S')

if __name__ == '__main__':
  main()
