#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string javel, stone;

        getline(cin, javel);
        getline(cin, stone);
        int op = 0;

        for (int i = 0; i < stone.size(); i++)
        {
            for (int j = 0; j < javel.size(); j++)
            {
                if (stone[i] == javel[j])
                {
                    op++;
                    break;
                }
            }
        }
        cout << op << endl;
    }
    return 0;
}