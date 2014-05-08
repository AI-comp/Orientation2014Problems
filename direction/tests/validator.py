#!/usr/bin/python2

import os
import sys
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    a = int(ch.readLine())
    if a == -1:
      break
    ch.checkRange(a, 0, 315, 'd')
    ch.check(a % 45 == 0, 'd is a multiple of 45')

if __name__ == '__main__':
  main()
