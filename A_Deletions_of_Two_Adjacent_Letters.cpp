#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin >> str;
    char c;
    cin >> c;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        if ((i + 1) % 2 != 0)
        {
            if (str[i] == c)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
