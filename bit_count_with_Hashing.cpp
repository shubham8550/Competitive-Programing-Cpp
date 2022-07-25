#include <bits/stdc++.h>

using namespace std;
const int Bits = 32;
int Hash[Bits];

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int p;
        cin >> p;
        string bin = bitset<Bits>(p).to_string();
        for (int i = 0; i < Bits; i++)
        {
            int bit = bin[i] - '0';
            Hash[i] += bit;
        }
    }
    cout << *max_element(begin(Hash), end(Hash)) << endl;

    // O(n)
    return 0;
}