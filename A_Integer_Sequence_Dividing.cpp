#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a = 0, b = 0;
    cin >> t;
    do
    {
        if (t % 2 == 0)
        {
            a += t;
        }
        else
        {
            b += t;
        }
    } while (t--);

    cout << ((b - a) % 2 == 0 ? 0 : 1) << endl;

    return 0;
}
// solution2
int main()
{
    long long int t, a = 0, b = 0;
    cin >> t;
    cout << ((t * (t + 1) / 2) % 2);

    return 0;
}