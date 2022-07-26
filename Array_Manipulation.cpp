#include <bits/stdc++.h>
// Prefix sum Problem
// https://www.hackerrank.com/challenges/crush/problem
using namespace std;
const int N = 1e7 + 10;
long long ar[N];
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        ar[a] += k;
        ar[b + 1] -= k;
    }

    for (int i = 1; i <= n; i++)
    {
        ar[i] += ar[i - 1];
    }
    cout << *max_element(begin(ar), ar + (n + 1));

    return 0;
}