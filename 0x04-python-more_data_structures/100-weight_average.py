#!/usr/bin/python3

def weight_average(my_list=[]):
    if len(my_list) == 0:
        return (0)
    sum = 0
    mul = 0
    for i in my_list:
        a, b = i
        mul += a * b
        sum += b
    return (float(mul / sum))
