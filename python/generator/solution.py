import sys
import os

sys.path.append(os.path.abspath('../lib'))
from create import *
    
with open("input.txt", "r") as input_file:
    # Read input from input.txt
    n = int(input_file.readline().strip())
    a = list(map(int, input_file.readline().strip().split()))
    print(sum(a))

# Perform necessary operations


