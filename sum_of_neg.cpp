#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    while (cin)
    {
        int p;
        cin >> p;
        if (p < 0)
        {
            sum += p;
        }
    }
    cout << sum << endl;
    return 0;
}