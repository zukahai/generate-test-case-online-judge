import os
import sys
sys.path.append(os.path.abspath('../lib'))
from library import *

def print(a, end='\n'):
    with open("input.txt", "a") as output_file:
        output_file.write(str(a) + end)

def gen(iTest, testnum, target_file):
    with open(target_file, 'w') as f:
        # Write necessary inputs to the file
        n = random_number_range(1, 10)
        a = random_array(n, 10)
        print(n)
        print(' '.join(map(str, a)) + '\n')

