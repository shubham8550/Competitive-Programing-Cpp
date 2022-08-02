
#include <bits/stdc++.h>

using namespace std;
const int N = 1000;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string T, S;
        cin >> T >> S;
        int Hash[N] = {};
        for (size_t i = 0; i < S.size(); i++)
        {
            Hash[S[i]]++;
        }
        int countT = 0;
        for (size_t i = 0; i < T.size(); i++)
        {
            if (Hash[T[i]] <= 0)
            {
                countT += 2;
            }
            Hash[T[i]]--;
        }
        cout << (countT + S.size() - T.size()) << endl;
    }
    return 0;
}
