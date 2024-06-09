#include "create.h"
#include "generator.h"

int main()
{
    srand(24022007);
    int testnum = 100;
    string prob_name = "testcase";

    create_all_and_compile(prob_name, testnum);
    for(int i = 1; i <= testnum; i ++)
    {
        cout << "Test #" << str(i) << ": ";
        gen(i, testnum, "input.txt");
        cop("input.txt", prob_name + "\\Test" + str(i) + "\\" + prob_name + ".inp");
        cout << "Generated - ";
        system("solution.exe");
        cop("output.txt", prob_name + "\\Test" + str(i) + "\\" + prob_name + ".out");
        cout << "Finished \n";
    }

    return 0;
}
