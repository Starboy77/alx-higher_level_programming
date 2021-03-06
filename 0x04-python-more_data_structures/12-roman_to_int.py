#!/usr/bin/python3

def roman_to_int(roman_string):
    if isinstance(roman_string, str) is False or roman_string is None:
        return (0)
    rf = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    num = 0
    val = 1
    for x in reversed(roman_string):
        for i, j in rf.items():
            if x == i and j >= val:
                val = j
                num += j
            if x == i and j < val:
                val = j
                num -= j
    if num > 0 and num < 4000:
        return (num)
