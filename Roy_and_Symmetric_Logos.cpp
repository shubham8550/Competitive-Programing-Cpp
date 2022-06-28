#include <bits/stdc++.h>
// unsolved
using namespace std;
void reverse(int arr1[], int num)
{
    reverse(arr1, arr1 + num);
}

int main()
{
    int t;

    cin >> t;

    while (t--)
    {

        int N;

        cin >> N;

        vector<string> A;

        for (int i = 0; i < N; i++)
        {

            string val;

            cin >> val;

            A.push_back(val);
        }

        // Traverse every row and half the columns

        // A[N][N/2]

        // Traverse every column and half the rows

        // A[N/2][N]

        // check if the other half is palindrome

        int flag = 0;

        for (int i = 0; i < N; i++)
        {

            for (int j = 0; j < N / 2; j++)
            {

                if (A[i][j] != A[i][N - 1 - j] || A[j][i] != A[N - 1 - j][i])
                {

                    flag = 1;
                }
            }
        }

        if (flag == 1)
        {

            cout << "NO" << endl;
        }

        else
        {

            cout << "YES" << endl;
        }
    }
    return 0;
}