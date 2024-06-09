#include<bits/stdc++.h>
#include "../lib/library.h"
using namespace std;

void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết
    int n = random(1, 100);
    vector<int> a = random_vector(n, -1000, 1000);
    
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return;
}
