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
void Ashish()
{
    ll n;
    cin >> n;
    vector<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        ll j;
        cin >> j;
        b.push_back(j);
    }
    ll ai = a[0];
    ll bi = b[0];
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll temp1 = abs(a[i + 1] - a[i]) + abs(b[i + 1] - b[i]);
        ll temp2 = abs(b[i + 1] - a[i]) + abs(a[i + 1] - b[i]);
        ll k = min(temp1, temp2);
        ll s = min(k, abs(b[i + 1] - a[i]) + abs(a[i + 1] - b[i]));
        // if (temp1 > temp2)
        // {
        //     ans + temp2;
        //     ai = b[i];
        //     bi = a[i];
        // }
        // else
        // {
        //     ans += temp1;
        //     ai = a[i];
        //     bi = b[i];
        // }
        ans += s;
        s = 0;
    }
    cout << ans << "\n";
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
