#include <bits/stdc++.h>

using namespace std;

int days(int A[], int N)
{
    int days = 0;
    int currentArmy = 0;
    for (int i = 0; i < N; i++)
    {

        currentArmy = currentArmy + (i + 1);

        days++;

        for (int j = 0; currentArmy < A[i]; j++)
        {
            currentArmy = currentArmy + (i + 1);

            days++;
        }
        cout << currentArmy << endl;
        currentArmy = 0;
    }
    return days;
}

int main()
{
    // N = number of elements in the array
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // sort array
    sort(A, A + N);
    cout << days(A, N) << endl;
    return 0;
}