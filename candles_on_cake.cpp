// #include <bits/stdc++.h>
// using namespace std;
// // https://www.geeksforgeeks.org/count-obtuse-angles-circle-k-equidistant-points-2-given-points/
// int cake(int a, int b, int k)
// {

//     int c1 = (b - a) - 1;
//     int c2 = (k - b) + (a - 1);

//     if (c1 == c2)
//         return 0;

//     return min(c1, c2);
// }

// int main()
// {
//     int k, a, b;
//     cin >> k >> a >> b;
//     cout << cake(a, b, k);
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

vector<int> arr;
map<vector<int>, int> memo;
int n = arr.size();

// recursive top down memoized solution
int solve(int i, int j)
{
    if ((i > j) || (i >= n) || (j < 0))
        return 0;

    vector<int> k{i, j};
    if (memo[k] != 0)
        return memo[k];

    // if the user chooses ith coin, the opponent can choose
    // from i+1th or jth coin. if he chooses i+1th coin,
    // user is left with [i+2,j] range. if opp chooses jth
    // coin, then user is left with [i+1,j-1] range to
    // choose from. Also opponent tries to choose in such a
    // way that the user has minimum value left.
    int option1 = arr[i] + min(solve(i + 2, j), solve(i + 1, j - 1));

    // if user chooses jth coin, opponent can choose ith
    // coin or j-1th coin. if opp chooses ith coin,user can
    // choose in range [i+1,j-1]. if opp chooses j-1th coin,
    // user can choose in range [i,j-2].
    int option2 = arr[j] + min(solve(i + 1, j - 1), solve(i, j - 2));

    // since the user wants to get maximum money
    memo[k] = max(option1, option2);
    return memo[k];
}

int optimalStrategyOfGame()
{

    memo.clear();
    return solve(0, n - 1);
}

// Driver code
int main()
{
    arr.push_back(3);
    arr.push_back(1);
    n = arr.size();
    cout << optimalStrategyOfGame() << endl;
}