#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n);
    for (size_t i = 0; i < n; i++)
    {
        cout << ar[i] << endl;
    }

    return 0;
}