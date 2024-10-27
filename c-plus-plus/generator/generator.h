#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<subtask> subtasks = {
    {percent: 20, lenN: 1, lenA: 1},
    {percent: 30, lenN: 2, lenA: 2},
    {percent: 50, lenN: 3, lenA: 3},
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    vector<long long> a = random_vector(subtasks, iTest, testnum);
    cout << a.size() << endl;
    print_vector(a, cout);

    
    
}
