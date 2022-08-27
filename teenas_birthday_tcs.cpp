#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, k;
    cin >> t >> k;
    vector<int> p, q;

    for (size_t i = 0; i < t; i++)
    {
        cin >> p[i];
    }
    for (size_t i = 0; i < t; i++)
    {
        cin >> q[i];
    }
    vector<int> r = {r[0] - q[0]};
    int s1 = q[0] - q[1];
    int s = q[0];

    if (k > 0)
    {
        if (s1 > 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    else if (k <= 0)
    {
        for (size_t i = 1; i <= t; i++)
        {
            int a = p[i] * q[i];
            r.push_back(a);
        }
        cout << *max_element(r.begin(), r.end()) << endl;
    }

    return 0;
}