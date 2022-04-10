#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n, b, x, y;
        cin >> n >> b >> x >> y;
        ll sum = 0;
        // vector<ll> a(n);
        int a[n];
        a[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] + x <= b)
                a[i] = a[i - 1] + x;
            else
                a[i] = a[i - 1] - y;
        }
        for (int i = 0; i <= n; i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}