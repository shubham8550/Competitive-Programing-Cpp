#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, u;
    cin >> l >> u;
    int n = u - l;
    cout << (n * (n - 1) / 2);
    return 0;
}