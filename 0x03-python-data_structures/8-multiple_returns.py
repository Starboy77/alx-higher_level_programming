#!/usr/bin/python3

def multiple_returns(sentence):
    if len(sentence) >= 1:
        return (len(sentence), sentence[0])
    else:
        return(len(sentence), None)
