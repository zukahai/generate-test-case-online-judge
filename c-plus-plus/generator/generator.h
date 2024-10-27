#include<bits/stdc++.h>
#include "../lib/library.h"

#define int long long
using namespace std;


void gen(int iTest, int testnum, string target_file)
{
    ofstream cout(target_file);
    
    // Cout ra những input cần thiết

    int n = random(1, 10);
    vector<int> a = random_vector(n, 1, 1000000000000);
    cout << n << endl;
    print_vector(a, cout);
    
}
