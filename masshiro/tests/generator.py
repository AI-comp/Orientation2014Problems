#!/usr/bin/python2

import random

def generate(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for _ in range(20):
      n = random.randrange(1, 6)
      print >>f, n
      ps = set()
      ps.add((0, 0))
      while len(ps) < n + 1:
        x = random.randrange(-50, 50+1)
        y = random.randrange(-50, 50+1)
        if (x, y) in ps:
          continue
        print >>f, "%d %d" % (x, y)
        ps.add((x, y))
    print >>f, -1

def main():
  for index in xrange(5):
    generate(index)
 
if __name__ == '__main__':
  main()
