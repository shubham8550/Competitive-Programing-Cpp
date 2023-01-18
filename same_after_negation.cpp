// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n+1];
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int count = 0;

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    long long int places, combinations = 2;
    cin >> places;
    long long int f[80], g[80];
    f[0] = 0;
    f[1] = 0;
    f[2] = 0;
    g[0] = 1;
    g[1] = 1;
    g[2] = 1;
    for (int i = 3; i <= places; i++)
    {
        f[i] = f[i - 1] + g[i - 3];
        g[i] = f[i - 1] + g[i - 1];
    }
    combinations = f[places] + g[places];
    cout << combinations;
    return 0;
}