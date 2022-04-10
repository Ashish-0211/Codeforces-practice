#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        ll a;
        cin >> a;

        if (a >= 2)
            cout << "NO"
                 << "\n";
        if (a == 1)
            cout << "YES"
                 << "\n";
    }
    else if (n >= 2)
    {
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != v[i + 1])
            {
                cout << "YES"
                     << "\n";
                return;
            }
        }
        cout << "NO"
             << "\n";
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}