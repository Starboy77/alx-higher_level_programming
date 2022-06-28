#!/usr/bin/python3
def uppercase(str):
    for char in str:
        print("{:s}".format(chr(ord(char) - 32) if (ord(char) > 96)
                            and (ord(char) < 123) else char), end='')
    else:
        print("{:s}".format("\n"), end='')
