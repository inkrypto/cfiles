#!/usr/bin/python

from subprocess import call

try:
    f = open('long-string.txt', 'r')
    name = f.read();
    arguments =['./ex17test', 'db.dat', 's', '1', name, 'brent'];

    call(arguments);

except Exception, e:
    print e
