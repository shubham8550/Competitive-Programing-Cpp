#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, o = 0, t = 0;
    cin >> n;
    if (n % 2 == 0 && n > 4)
    {
        n += -4;
        cout << (n / 4 ? (int)round((n * 1.0) / 4) : 1) << endl;
        return 0;
    }
    cout << 0 << endl;

    return 0;
}