#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    if (n == 2)
        cout << "NO" << endl;
    if (n % 2 == 0 && n != 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}