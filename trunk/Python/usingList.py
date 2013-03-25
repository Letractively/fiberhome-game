#!/usr/bin/python


testList = ['111', '222', '333', '444'];

for item in testList:
	print item,
print '\n'

testList.append("555");


for item in testList:
	print item,
print '\n'
del testList[0];

print testList;

longTestList = [testList, 666]
print longTestList;
print longTestList[0][0];
print longTestList[0][1];
print longTestList[0][2];


raw = ('a', 'b', 'c');
longRaw = ('aa', 'bb', 'cc', raw);
print raw;
print longRaw;
print len(longRaw);

age = 22;
name = 'yinwu'

print 'my name is %s and age is %d' % (name, age);
print 'my name is %s and age is %s' % (name, age);


address = {
			'a':'aaaaa',
			'b':'bbbbb',
			'c':'ccccc'
		  }

print address;


address['d'] = 'ddddd';

print address;


if address.has_key('a'):
	print '%s have found with value %s' % ( 'a', address['a'] )


beforeCopy = 'test';
afterCopy = beforeCopy;

beforeCopy = 'testresult';

print beforeCopy,afterCopy;



testRaw = ['1','2','3','4','5'];
testRawCopy = testRaw;

del testRaw[0];

print testRaw;
print testRawCopy;



testString = 'WuYinkui'
if testString.startswith('Wu'):
	print 'start ok';


if 'Yin' in testString:
	print 'Yin is test string';

seperate = '/'
joinString = testRaw[0:2];
print seperate.join(joinString );


