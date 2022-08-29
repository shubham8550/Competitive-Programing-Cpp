#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lr;
    int ud;

    string s;
    cin >> lr >> ud >> s;
    int x = lr;
    int y = ud;
    for (size_t i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'L':
            lr--;
            break;
        case 'R':
            lr++;
            break;
        case 'F':
            ud--;

            break;
        case 'B':
            ud++;

            break;

        default:
            cout << "err";
            break;
        }
        if ((lr >= x * 2) || (ud >= y * 2))
        {
            cout << "Unsafe" << endl;
            return 0;
        }
    }
    if ((lr > x || lr < 0) || (ud > x || ud < 0))
    {
        cout << "Unsafe" << endl;
    }
    else
    {
        cout << "Safe" << endl;
    }

    return 0;
}