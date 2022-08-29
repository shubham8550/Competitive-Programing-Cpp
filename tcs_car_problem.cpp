#include <bits/stdc++.h>

using namespace std;
// names of variables in this one dont make sanse sometimes
int main()
{
    int lr;
    int ud;

    string s;
    cin >> lr >> ud >> s;
    int x = lr;
    int y = ud;
    int l = 1, r = 1, f = 1, b = 1;
    int a = 0, p = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'L':
            a++;
            break;
        case 'R':
            a++;
            break;
        case 'F':
            p++;

            break;
        case 'B':
            p++;

            break;

        default:
            cout << "err";
            break;
        }
    }
    // yep specially this one it should be best value for L R  and F B
    int maxVal = (a > p) ? max(lr, ud) : min(lr, ud);
    int minVal = (a < p) ? max(lr, ud) : min(lr, ud);

    for (size_t i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'L':
            l++;
            break;
        case 'R':
            r++;
            break;
        case 'F':
            f++;

            break;
        case 'B':
            b++;

            break;

        default:
            cout << "err";
            break;
        }
        if ((l > maxVal) || (r > maxVal) || (f > minVal) || (b > minVal))
        {
            cout << "Unsafe" << endl;
            return 0;
        }
    }
    if ((abs(l - r) >= x) || (abs(f - b) >= y))
    {
        cout << "Unsafe" << endl;
    }
    else
    {
        cout << "Safe" << endl;
    }

    return 0;
}