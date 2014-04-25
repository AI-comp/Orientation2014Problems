#!/usr/bin/python2

import random
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(20):
      generateTestCase(f, random.randrange(MIN, N_MAX), random.randrange(MIN, P_MAX))
    print >>f, 0, 0

def generateTestCase(f, n, p):
  print >>f, n, p
  ts = [str(random.randrange(MIN, T_MAX)) for _ in xrange(n)]
  print >>f, ' '.join(ts)

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
