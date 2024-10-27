#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;

vector<Subtask> subtasks = {
    {percent: 20, lenN: 2, lenAi: 1},
    {percent: 30, lenN: 7, lenAi: 2},
    {percent: 50, lenN: 18, lenAi: 3},
};


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = random(subtasks, iTest, testnum);
    cout << n << endl;
    

    
    
}
