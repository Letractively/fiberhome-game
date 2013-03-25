#!/usr/bin/python

def getMax(a, b):
	if a > b:
		print a, 'is maxinum'
	else:
		print b, 'is maxinum'

a = 5
b = 6
c = 1000
d = 200000000000000000


def returnMax(a, b):
	if a > b:
		return a
	else:
		return b

print returnMax(a, b)
print returnMax(c, d)
#getMax(a, b)
#getMax(c, d)

print 'done'


