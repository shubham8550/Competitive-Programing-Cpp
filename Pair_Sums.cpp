
// working solution with unordered_map

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, k, possible = 0;
    cin >> t >> k;
    int ip[t] = {};
    unordered_map<int, int> data;
    for (size_t i = 1; i <= t; i++)
    {

        cin >> ip[i];
        data[ip[i]]++;
    }
    for (size_t i = 1; i <= t; i++)
    {
        if (ip[i] < k && data[k - ip[i]])
        {
            if (ip[i] == k - ip[i] && data[k - ip[i]] == 1)
                continue;
            // cout << k - ip[i] <<  <<endl;
            possible++;
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

// //IDK Why but this doesnt work with 5th Test case
// #include <bits/stdc++.h>

// using namespace std;
// const int N = 1e6 + 10;
// int Data[N];
// int main()
// {
//     int t, k, possible = 0;
//     cin >> t >> k;
//     int ip[t] = {};
//     for (size_t i = 1; i <= t; i++)
//     {

//         cin >> ip[i];
//         Data[ip[i]]++;
//     }
//     for (size_t i = 1; i <= t; i++)
//     {
//         if (ip[i] < k && Data[k - ip[i]])
//         {
//             if (ip[i] == k - ip[i] && Data[k - ip[i]] == 1)
//                 continue;
//             // cout << k - ip[i] <<  <<endl;
//             possible++;
//             break;
//         }
//     }

//     if (possible)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }