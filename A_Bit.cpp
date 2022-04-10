#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll n = 0;
void Ashish()
{
    string input;
    cin >> input;
    if (input[0] == '+')
        n++;
    if (input[0] == '-')
        n--;
    if (input[2] == '+')
        n++;
    if (input[2] == '-')
        n--;
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        Ashish();
    }
    cout << n;
    return 0;
};