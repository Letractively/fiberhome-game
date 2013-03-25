#!/usr/bin/python

import sys

if __name__ == '__main__':
	print 'this is called by myself'
else:
	print 'import by other file'

def callHi():
	print 'hi, I\'m called'

version = '0.1'

print 'done'
