#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int A[N];
        int min = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            min = (A[i] > min ? A[i] : min);
        }
        cout << K - min << endl;
    }
    return 0;
}