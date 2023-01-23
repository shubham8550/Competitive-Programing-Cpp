#include <iostream>
using namespace std;

int printResult(int M, int N)
{
    int product = M * N;
    int sum_mn = M + N;
    int diff = abs(product - sum_mn);
    int s = 0;
    for (int i = 1; i <= diff; i++)
    {
        if (diff % i == 0)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    int M, N;
    cin >> M >> N;
    cout << printResult(M, N) << endl;
    return 0;
}
