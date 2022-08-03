#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Code Here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // unordered_map<int, int> r;
        int r[1000] = {};
        for (size_t i = 0; i < s.size(); i++)
        {
            r[s[i]]++;
        }

        cout << min(min(r['r'], r['u']), min(r['b'], r['y'])) << endl;
    }

    return 0;
}