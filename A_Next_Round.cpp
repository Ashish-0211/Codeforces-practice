#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 0;
    for (int i = 0; i < n; i++)
        if (v[i] >= v[m - 1] && v[i] > 0)
            ans++;
    cout << ans;
    return 0;
}