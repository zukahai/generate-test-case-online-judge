import os
import subprocess

def run_python_script(script_name):
    subprocess.run(["python", script_name])

def str_test(a, length = 5):
    return "0" * (length - len((str)(a))) + str(a)

def create_set(prob_name, iTest):
    os.system("mkdir " + prob_name + "\\Test" + str_test(iTest))

def create_root(prob_name):
    os.system("mkdir " + prob_name)

def compile():
    os.system("g++ -g -pipe -O2 -s -static -lm -DTHEMIS -Wl,--stack,66060288 solution.cpp -o solution.exe")

def create_all_and_compile(prob_name, start, TestNum):
    create_root(prob_name)
    for i in range(start, TestNum + 1):
        create_set(prob_name, i)
    compile()

def cop(source_file, target_file):
    with open(source_file, 'r') as cin:
        with open(target_file, 'w') as cout:
            for line in cin:
                cout.write(line)

def clear_file(file):
    with open(file, 'w') as f:
        pass

def print(a, end='\n'):
    with open("output.txt", "a") as output_file:
        output_file.write(str(a) + end)