#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            cout << 0 << endl;
        else
        {
            ll p = a * a;
            ll q = b * b;
            ll ans = sqrt(p + q);
            if (ans * ans == p + q)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}