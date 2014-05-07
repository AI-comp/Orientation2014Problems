#!/usr/bin/python2

import random
from constants import *

def generate(index, a, b):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    print >>f, a, b

def main():
  for index in xrange(20):
    generate(index, random.randint(0, MAX), random.randint(0, MAX))
 
if __name__ == '__main__':
  main()
