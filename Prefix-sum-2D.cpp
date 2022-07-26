#include <bits/stdc++.h>
// its hashing not prefix sum Opsie
using namespace std;
const int N = 1e3 + 10;
int metrix[N][N];

int main()
{
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int p;
            cin >> p;
            metrix[i][j] = p + metrix[i - 1][j] + metrix[i][j - 1] - metrix[i - 1][j - 1];
        }
    }

    int k;
    cin >> k;

    while (k--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int value = metrix[c][d] - metrix[a - 1][d] - metrix[c][b - 1] + metrix[a - 1][b - 1];
        cout << value << endl;
    }

    return 0;
}