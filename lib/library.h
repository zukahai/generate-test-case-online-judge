#include<bits/stdc++.h>
using namespace std;

long long random()
{
    long long ans = 1;
    int length = rand() % 17 + 1;
    for (int i = 0; i < length; i++)
    {
        ans = ans * 10 + rand() % 10;
    }
    return ans;
}