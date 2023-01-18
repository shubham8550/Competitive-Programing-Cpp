#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f, t;
    cin >> f >> t;
    bool reversed = false;
    int i = 1;
    int counter = 1;

    // t++;
    int last = 0, first = 0;
    while (true)
    {
        first = counter;
        if (i > t)
        {
            break;
        }
        i++;
        if (reversed)
        {
            counter--;
        }
        else
        {
            counter++;
        }
        if (counter == f)
        {
            reversed = true;
        }

        if (counter == 0)
        {
            reversed = false;
        }
        last = first;
    }
    cout << last << endl
         << first << endl;
    return 0;
}