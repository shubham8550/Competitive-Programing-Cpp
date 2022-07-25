#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10 + 1; // for 1 based looping not 0
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        int p;
        cin >> p;
        a[i] = a[i - 1] + p;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, m;
        cin >> l >> m;
        cout << (a[m] - a[l - 1]) << endl;
    }
    // O(N) + O(Q) = O(N) = 1e5+10
    return 0;
}