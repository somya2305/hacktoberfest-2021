//https://codeforces.com/contest/1557/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        ll mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
                mx = a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        sum = sum - mx;
        long double ans = (long double)mx + (long double)sum / (long double)(n - 1);
        cout << setprecision(8) << ans << endl;
    }
    return 0;
}