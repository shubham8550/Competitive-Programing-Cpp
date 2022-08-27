#include <bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/count-obtuse-angles-circle-k-equidistant-points-2-given-points/
int cake(int a, int b, int k)
{

    int c1 = (b - a) - 1;
    int c2 = (k - b) + (a - 1);

    if (c1 == c2)
        return 0;

    return min(c1, c2);
}

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    cout << cake(a, b, k);
    return 0;
}