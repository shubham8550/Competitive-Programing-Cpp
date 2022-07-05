#include <bits/stdc++.h>

using namespace std;
int lcm(int a, int b)
{
    for (int i = 1; i <= a * b; i++)
    {

        if (i % a == 0 && i % b == 0)
        {

            return i;
        }
    }
    return 0;
}
int step_val(int a, int b, int cth)
{

    if (cth % a == 0 && cth % b == 0)
    {

        return lcm(a, b);
    }
    if (cth % a == 0)
    {
        return a;
    }
    if (cth % b == 0)
    {
        return b;
    }
    return 0;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> k;
    int stepValue = -1;
    for (int i = 0; k.size() < c; i++)
    {
        int num = i + 1;
        if (num % a == 0 || num % b == 0)
        {
            k.push_back(num);
        }
    }
    long long int first = 0, a1 = 0, b1 = 0, both = 0;

    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] % a == 0 && k[i] % b == 0)
        {
            if (!first)
            {
                first = k[i];
            }

            both = k[i];
        }
    }

    int steps = step_val(a, b, k[c - 1]);

    for (int i = k[c - 1]; i > 0; i -= steps)
    {
        cout << i << " ";
    }

    cout << 0;

    return 0;
}