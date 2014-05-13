#!/usr/bin/python2

import random
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(20):
      generateTestCase(f, random.randint(R_MIN, R_MAX), random.randint(N_MIN, N_MAX))
    print >>f, 0, 0

def generateTestCase(f, r, n):
  print >>f, r, n
  xs = [random.randint(X_MIN, X_MAX) for _ in xrange(n)]
  xs = [str(x) for x in sorted(xs)]
  print >>f, ' '.join(xs)

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
