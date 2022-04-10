#include <bits/stdc++.h>
using namespace std;
// #define ll long long int
// void Ashish()
// {
// }
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int a = str[i] - '0';
        if (i == 0 && 9 - a == 0)
            cout << a;
        else
            cout << min(a, 9 - a);
    }
    return 0;
}
