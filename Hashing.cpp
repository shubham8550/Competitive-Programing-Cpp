#include <bits/stdc++.h>

using namespace std;
const int N = 1e7 + 10;

int Hash[N];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int p;
        cin >> p;
        Hash[p]++;
    }

    int k;
    cin >> k;
    while (k--)
    {
        int l;
        cin >> l;
        cout << Hash[l] << endl;
    }

    // O(1e5+10) + O(1e5+10) = O(n)  = 2 * 10^5
    return 0;
}