#!/usr/bin/python2

import random
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(20):
      generateTestCase(f)
    print >>f, 0, 0, 0, 0

def generateTestCase(f):
  coefficients = [str(random.randint(MIN, MAX)) for _ in xrange(4)]
  print >>f, ' '.join(coefficients)

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
