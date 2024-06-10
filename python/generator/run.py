import os
import random
import shutil
import sys

from generator import *

sys.path.append(os.path.abspath('../lib'))
from create import *
# Rest of the code

def main():
    random.seed(24022007)
    start = 1
    testnum = 100
    prob_name = "testcase"

    create_all_and_compile(prob_name, start, testnum)
    for i in range(start, testnum+1):
        print(f"Test #{i}: ", end="")
        gen(i, testnum, "input.txt")
        cop("input.txt", f"{prob_name}/Test{str_test(i)}/{prob_name}.inp")
        print("Generated - ", end="")
        run_python_script("solution.py")
        cop("output.txt", f"{prob_name}/Test{str_test(i)}/{prob_name}.out")
        print("Finished")

if __name__ == "__main__":
    main()