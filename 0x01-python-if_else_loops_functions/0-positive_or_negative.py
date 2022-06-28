#!/usr/bin/python3
import random
number = random.randint(-10, 10)
print(f"{number:d} is positive") if number > 0 else (print(f"{number:d} is neg\
ative") if number < 0 else print(f"{number:d} is zero"))
