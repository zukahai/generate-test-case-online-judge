import os
import sys
sys.path.append(os.path.abspath('../lib'))
from library import *

def gen(iTest, testnum, target_file):
    with open(target_file, 'w') as f:
        # Write necessary inputs to the file
        f.write(str(random_number_range(1, 100)) + '\n')