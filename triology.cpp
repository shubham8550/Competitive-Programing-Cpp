// wrong soln maybe
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[] = {9, 9};
    int arrSize = sizeof(A) / sizeof(A[0]);
    sort(A, A + arrSize);
    int x = 1;
    int days = 0;
    int army = 1;

    while ((sizeof(A) / sizeof(A[0])) > 0)
    {
        if (army >= A[0])
        {
            A.pop_front();
            army = x;
            x++;
            days++;
            continue;
        }
        days++;
        army += x;
    }
    return ((days % 2 == 0) ? days : days - 1);

    return 0;
}
