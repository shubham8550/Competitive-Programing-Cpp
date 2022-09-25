#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int hsh[len + 1] = {0};
    int count = 0;
    for (size_t i = 1; i <= len; i++)
    {
        int last = s[i - 1] - '0';
        int first = s[i] - '0';
        if ((first + last) == 17)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}