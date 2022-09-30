#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t];
    for (size_t i = 0; i < t; i++)
    {
        cin >> a[i];
    }
    while (t--)
    {
        cout << a[t] << " ";
    }

    return 0;
}