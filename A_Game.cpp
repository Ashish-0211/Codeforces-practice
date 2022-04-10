#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
// void Ashish()
// {
//     // cout << "a";
//     ll n;
//     cin >> n;
//     vector<ll> a;
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     // cout << "h";
//     ll ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == a[i + 1])
//             i++;
//         else
//             ans += 2;
//     }
//     // cout << "hello" << endl;
//     cout << ans << endl;
// }
int main()
{
    ll test;
    cin >> test;
    // cout << test;
    while (test--)
    {
        // Ashish();
        cout << "a";
        ll n;
        cin >> n;
        vector<ll> a;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // cout << "h";
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
                i++;
            else
                ans += 2;
        }
        // cout << "hello" << endl;
        cout << ans << endl;
    }
    return 0;
}
