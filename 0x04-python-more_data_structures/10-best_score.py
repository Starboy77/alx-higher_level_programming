#!/usr/bin/python3

def best_score(a_dictionary):
    if a_dictionary is None or len(a_dictionary) == 0:
        return None
    big = list(a_dictionary.values())[0]
    val = list(a_dictionary.keys())[0]
    for x, y in a_dictionary.items():
        if y > big:
            big = y
            val = x
    return (val)
