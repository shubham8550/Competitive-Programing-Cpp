
// hashing
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ar[26] = {};

        string s;
        cin >> s;
        if (s.length() < 2)
        {
            cout << "No" << endl;
            continue;
        }
        for (auto c : s)
        {
            ar[c - 'a']++;
        }
        int count = 0;
        for (size_t i = 0; i < 26; i++)
        {
            if (ar[i] > 1)
            {
                count++;
                break;
            }
        }
        // cout << count << endl;
        if (!count)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}