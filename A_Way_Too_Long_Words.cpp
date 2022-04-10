#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Ashish()
{
    string str;
    cin >> str;
    ll size = str.size();
    if (size <= 10)
        cout << str << endl;
    else
    {
        cout << str[0] << size - 2 << str[size - 1] << endl;
    }
}
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        Ashish();
    }
    return 0;
}