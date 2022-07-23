#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, p, max_count = 0;
    cin >> t;
    p = t;
    string ip[t];
    while (t--)
    {
        int n;
        cin >> n;
        ip[t] = bitset<32>(n).to_string();
    }
    // inbuit

    for (int i = 0; i < 32; i++)
    {
        int lcount = 0;

        for (int j = 0; j < p; j++)
        {

            lcount += (ip[j][i] == '1' ? 1 : 0);
        }
        // cout << lcount << " : " << ip[i] << endl;

        max_count = (lcount > max_count ? lcount : max_count);
    }
    cout << max_count;

    return 0;
}