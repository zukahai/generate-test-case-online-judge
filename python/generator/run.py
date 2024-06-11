import os
import random
import shutil
import sys

from generator import gen

sys.path.append(os.path.abspath('../lib'))
from create import clear_file, cop, create_all_and_compile, run_python_script, str_test
# Rest of the code

def main():
    random.seed(24022007)
    start = 1
    testnum = 10
    prob_name = "testcase"

    create_all_and_compile(prob_name, start, testnum)
    for i in range(start, testnum+1):
        print(f"Test #{i}: ", end="")
        clear_file("input.txt")
        gen(i, testnum, "input.txt")
        cop("input.txt", f"{prob_name}/Test{str_test(i)}/{prob_name}.inp")
        print("Generated - ", end="")
        clear_file("output.txt")
        run_python_script("solution.py")
        cop("output.txt", f"{prob_name}/Test{str_test(i)}/{prob_name}.out")
        print("Finished")

if __name__ == "__main__":
    main()