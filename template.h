#include<bits/stdc++.h>
using namespace std;

long long Rnd() // tra ve mot so ngau nhien
{
    long long ans = 0;
    for(int i = 0; i < 8; i ++) ans ^= ((long long)(rand() % 255) << (8 * i));
    return ans;
}

long long Rand(long long l, long long h) { // tra ve so random trong khoang tu l den r
    return abs(Rnd()) % (h - l + 1) + l;
}
bool bit01() { // tra ve 0 hoac 1
    return Rand(1, 1e5)%2;
}
char az() { // tra ve ki tu ngau nhien tong ['a' .. 'z']
    return (char)(Rand('a', 'z'));
}
char AZ() { // tra ve ki tu ngau nhien tong ['A' .. 'Z']
    return (char)(Rand('A', 'Z'));
}
char num() { // tra ve ['0' .. '9']
    return '0' + Rand(0, 9);
}
void ShuffleArray(vector<long long> &arr, int n) { // hoan vi n phan tu dau tien cua mot vector arr
    int minPosition;
    int maxPosition = n - 1;
    int swapPosition;
    int i = 0;
    while (i < n - 1) {
        minPosition = i + 1;
        swapPosition = Rand(1, 1e7) % (maxPosition - minPosition + 1) + minPosition;
        swap(arr[i], arr[swapPosition]);
        ++i;
    }
}

string bignum(long long l) // sinh mot so lon gom l chu so (co the co chu so 0 o dau
{
    string s;
    for(int i = 1; i <= l; i ++)
    {
        s += " ";
        s[s.size() - 1] = num();
    }
    return s;
}

vector<pair<int, int> > tree(int ver) // sinh mot cay va tra ve cac canh
{
    vector<pair<int, int> > ans;
    for(int i = 2; i <= ver; i ++)
        ans.push_back(make_pair(i, Rand(1, i - 1)));

    for(int i = 1; i < ver - 1; i ++) swap(ans[i], ans[Rand(0, i)]);

    int secret = 0;
    while(__gcd(secret, ver) != 1) secret = Rand(1, ver);
    for(int i = 0; i < ver - 1; i ++)
    {
        ans[i].first = 1LL * ans[i].first * secret % ver;
        if(ans[i].first == 0) ans[i].first = ver;
        ans[i].second = 1LL * ans[i].second * secret % ver;
        if(ans[i].second == 0) ans[i].second = ver;
    }

    return ans;
}

vector<pair<int, int> > graph(int ver, int edge) // tra ve cac canh cua mot do thi ngau nhien
{
    unordered_map<long long, bool> used;
    used[0] = true;

    vector<pair<int, int> > ans;
    for(int i = 1; i <= edge; i ++)
    {
        int a = 0, b = 0;
        while(a <= b or used[1LL * a * ver + b])
        {
            a = Rand(1, ver);
            b = Rand(1, ver);
        }
        used[1LL * a * ver + b] = true;
        if(Rand(0, 1)) swap(a, b);
        ans.push_back(make_pair(a, b));
    }

    int secret = 0;
    while(__gcd(secret, ver) != 1) secret = Rand(1, ver);
    for(int i = 0; i < edge; i ++)
    {
        ans[i].first = 1LL * ans[i].first * secret % ver;
        if(ans[i].first == 0) ans[i].first = ver;
        ans[i].second = 1LL * ans[i].second * secret % ver;
        if(ans[i].second == 0) ans[i].second = ver;
    }

    return ans;
}

vector<pair<int, int> > connected_graph(int ver, int edge) // tra ve cac canh cua mot do thi lien thong
{
    unordered_map<long long, bool> used;
    used[0] = true;

    vector<pair<int, int> > ans;
    for(int i = 2; i <= ver; i ++)
    {
        ans.push_back(make_pair(i, Rand(1, i - 1)));
        used[1LL * ans.back().first * ver + ans.back().second] = true;
    }
    for(int i = ver; i <= edge; i ++)
    {
        int a = 0, b = 0;
        while(a <= b or used[1LL * a * ver + b])
        {
            a = Rand(1, ver);
            b = Rand(1, ver);
        }
        used[1LL * a * ver + b] = true;
        if(Rand(0, 1)) swap(a, b);
        ans.push_back(make_pair(a, b));
    }

    for(int i = 0; i < edge; i ++) swap(ans[i], ans[Rand(0, i)]);

    int secret = 0;
    while(__gcd(secret, ver) != 1) secret = Rand(1, ver);
    for(int i = 0; i < edge; i ++)
    {
        ans[i].first = 1LL * ans[i].first * secret % ver;
        if(ans[i].first == 0) ans[i].first = ver;
        ans[i].second = 1LL * ans[i].second * secret % ver;
        if(ans[i].second == 0) ans[i].second = ver;
    }

    return ans;
}

long long log_rand(long long t)
{
    int x = 64 - __builtin_clzll(t);
    return Rand(1, min(t, (1LL << Rand(1, x))));
}
