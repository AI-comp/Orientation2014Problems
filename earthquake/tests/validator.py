#!/usr/bin/python2

import os
import sys
sys.path.append(os.path.dirname(os.path.abspath(__file__)) + '/../../lib')
from checker import Checker

def main():
  ch = Checker()

  while True:
    n = int(ch.readLine())
    if n == 0:
      break
    ch.checkRange(n, 3, 50, 'n')
    ps = []
    for _ in range(n):
      x, y = [int(w) for w in ch.readLine().strip().split()]
      ch.check((x, y) not in ps, "no dup points: (%d, %d)" % (x, y))
      ch.checkRange(x, -500, 500, 'x')
      ch.checkRange(y, -500, 500, 'y')
      ps.append((x, y))


if __name__ == '__main__':
  main()
