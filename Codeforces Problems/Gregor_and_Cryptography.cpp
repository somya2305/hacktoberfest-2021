//https://codeforces.com/contest/1549/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a, b;
    if (n <= 5)
    {

        a = 2;
        b = 4;
    }
    else
    {
        a = 2;
        b = (n - 1) / 2;
    }
    cout << a << " " << b << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}