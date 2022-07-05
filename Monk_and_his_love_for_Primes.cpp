#include <bits/stdc++.h>

using namespace std;
int isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
char alterChar(char c)
{
    return (c <= 'Z' ? (c - 'A') + 'a' : (c - 'a') + 'A');
}

int main()
{
    string str;
    cin >> str;
    int upper = 0, lower = 0;
    for (const auto c : str)
    {
        if (alterChar(c) <= 'Z')
        {
            upper += alterChar(c);
        }
        else
        {
            lower += alterChar(c);
        }
    }
    cout << isPrime(abs(upper - lower));
    return 0;
}