#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, A[10001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}