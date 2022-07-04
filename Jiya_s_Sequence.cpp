#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 1;
        cin >> n;
        while (n--)
        {
            int ip;
            cin >> ip;
            sum = sum * ip;
        }
        if (sum % 10 == 2 || sum % 10 == 3 || sum % 10 == 5)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}