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
// void Ashish()
// {
//     ll l, r, x;
//     cin >> l >> r >> x;
//     // ll k = r - 1;
//     // ll ans = max((floor(r / n) + r % n), (floor(k / n) + k % n));
//     // cout << ans << "\n";
//     ll ans = r / x + r % x;
//     ll m = r / x * x - 1;
//     if (m >= l)
//         ans = max(ans, m / x + m % x);
//     cout << ans;
// }
int l, r, a;

int f(int x)
{
    return x / a + x % a;
}

void solve()
{
    cin >> l >> r >> a;
    int ans = f(r);
    if (r / a * a - 1 >= l)
        ans = max(ans, f(r / a * a - 1));
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
        solve();
    }
    return 0;
}
