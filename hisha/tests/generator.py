#!/usr/bin/python2

import random
from constants import *

def generateFile(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for i in xrange(20):
      generateTestCase(f, random.randint(MIN, MAX))
    print >>f, 0

def generateTestCase(f, n):
  print >>f, n

def main():
  for index in xrange(10):
    generateFile(index)
 
if __name__ == '__main__':
  main()
