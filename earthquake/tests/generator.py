#!/usr/bin/python2

import random
import math

def generate(index):
  filename = '50-random%02d.in' % index
  with open(filename, 'w') as f:
    for _ in range(20):
      n = random.randrange(3, 50+1)
      print >>f, n
      die = [d / math.sqrt(2) for d in [5, 50, 100, 200, 300, 500]]
      max_xy = int(random.choice(die))
      ps = set()
      while len(ps) < n:
        x = random.randint(-max_xy, max_xy)
        y = random.randint(-max_xy, max_xy)
        if (x, y) in ps:
          continue
        print >>f, "%d %d" % (x, y)
        ps.add((x, y))
    print >>f, 0

def main():
  for index in xrange(5):
    generate(index)
 
if __name__ == '__main__':
  main()
