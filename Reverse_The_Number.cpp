#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, rev = 0;

        cin >> num;
        while (num > 0)
        {
            int lastDigit = num % 10;
            rev = rev * 10 + lastDigit;
            num = num / 10;
        }
        cout << rev << endl;
    }
    return 0;
}