import os
import sys
sys.path.append(os.path.abspath('../lib'))
from library import *

def gen(iTest, testnum, target_file):
    with open(target_file, 'w') as f:
        # Write necessary inputs to the file
        a = random_array(5, 10)
        f.write(str(len(a)) + '\n')
        f.write(' '.join(map(str, a)) + '\n')