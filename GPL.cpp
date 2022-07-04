#include <bits/stdc++.h>
// Binary to decimal

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bin;
        cin >> bin;

        long long int base = 1, num = 0;

        cout << stoi(bin, 0, 2) << endl;
    }
    return 0;
}

// second method
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string bin;
        cin >> bin;

        long long int base = 1, num = 0;
        while (n--)
        {

            int last_degit = ((bin[bin.size() - 1] == '1') ? 1 : 0);
            bin.pop_back();
            num += (last_degit * base);
            base *= 2;
        }
        cout << num << endl;
    }
    return 0;
}