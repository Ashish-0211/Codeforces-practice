#include <bits/stdc++.h>
using namespace std;
#define ll long long
// int c(vector<int> v)
// {
//     int count = 0;
//     for (int i = 0; i < 3; i++)
//         if (v[i] == 1)
//             count++;
//     return count;
// }
// void Ashish()
// {
//     vector<int> v;
//     for (int i = 0; i < 3; i++)
//         cin >> v[i];
//     int count = c(v);
//     if(count>=2)

// }
int main()
{
    ll test;
    cin >> test;
    int a[test][3];
    for (int i = 0; i < test; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    int ans = 0;
    int count;
    for (int i = 0; i < test; i++)
    {
        count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
                count++;
        }
        if (count >= 2)
            ans++;
    }
    cout << ans << endl;
    return 0;
}