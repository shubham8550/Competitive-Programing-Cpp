#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; r++)
    {
        int i = t;
        for (i = t; i >= t - r; i--)
        {
            cout << i << " ";
        }
        for (int k = i; k > 0; k--)
        {
            cout << i + 1 << " ";
        }

        i = t;
        int l;
        for (i = t - r; i > 1; i--)
        {
            l = t - r;
            cout << t - r << " ";
        }
        for (int p = l; p <= t && p > 1; p++)
        {
            cout << p << " ";
        }
        // for (int k = i; k > 0; k--)
        // {
        //     cout << i + 1 << " ";
        // }

        cout << endl;
    }

    return 0;
}