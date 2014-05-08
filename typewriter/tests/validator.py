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
    s = ch.readString()
    if s == '!':
      break
    ch.checkValidCharacter(s, '+-.')
    ch.checkRange(len(s), S_LEN_MIN, S_LEN_MAX, 'length of S')

if __name__ == '__main__':
  main()
