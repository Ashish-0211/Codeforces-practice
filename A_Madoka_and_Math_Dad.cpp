#include <bits/stdc++.h>
using namespace std;
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define For(i, j, k, in) for (int i = j; i < k; i += in)
#define Rfor(i, j, k, in) for (int i = j; i >= k; i -= in)
#define rep(i, j) for (int i = 0; i < j; i++)
#define rrep(i, j) for (int i = j; i >= 0; i--)
typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<string> vs;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef map<ll, ll> mp;
typedef set<ll> setl;
typedef multiset<ll> mul;
ll gcd(ll a, ll b)
{
    if (b > a)
    {
        return gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

#define mod 1000000007
ll sum(vector<int> temp)
{
    ll s = 0;
    for (int i = 0; i < temp.size(); i++)
        s += temp[i];

    return s;
}
void Ashish()
{
    ll n;
    cin >> n;
    if (n <= 2)
    {
        cout << n << "\n";
        return;
    }
    // vector<ll> temp;
    // temp.push_back(1);
    // ll k = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         temp.push_back(i + j);
    //         if (k == n)
    //             break;
    //     }
    // }
    // for (int i = 0; i < temp.size(); i++)
    //     cout << temp[i];
    // ll k = 0;
    // while (k < n)
    // {
    //     if (k % 2 == 0)
    //     {
    //         temp.push_back(1);
    //         temp.push_back(2);
    //         k = 1 + 2;
    //     }
    //     else
    //     {
    //         temp.push_back(2);
    //         temp.push_back(1);
    //         k = 2 + 1;
    //     }
    // }
    // for (int i : temp)
    //     cout << i;
    ll k = 0;
    if (n % 2 == 0)
        k = 1;
    if (n % 2 != 0)
        k = 2;
    ll sum = 0;
    while (sum != n)
    {
        cout << k;
        sum += k;
        k = 3 - k;
    }
    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test = 1;
    cin >> test;
    while (test--)
    {
        Ashish();
    }
    return 0;
}
