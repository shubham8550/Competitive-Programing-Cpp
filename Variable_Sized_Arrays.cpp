#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, q;
    cin >> n >> q;

    unordered_map<int, unordered_map<int, int>> ar;

    for (size_t i = 0; i < n; i++)
    {

        int ars;
        cin >> ars;
        for (size_t j = 0; j < ars; j++)
        {
            cin >> ar[i][j];
        }
    }

    for (size_t i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << ar[x][y] << endl;
    }

    return 0;
}