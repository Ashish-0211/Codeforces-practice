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
    ll n, i;
    cin >> n;
    // vector<ll> v(n)
    vi v(n);
    rep(i, n)
            cin >>
        v[i];
    sort(v.begin(), v.end());
    cout << v[v.size() - 1] + v[v.size() - 2] << "\n";
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
