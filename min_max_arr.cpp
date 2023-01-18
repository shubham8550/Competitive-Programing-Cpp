// input()
// ar=list(map(int,input().strip().split()))
// input()
// ar2=list(map(int,input().strip().split()))
// k = int(input())
// c1=0
// c2=0
// for i in ar:
//     if i > k:
//         c1+=1
// for i in ar2:
//     if i < k:
//         c2+=1
// print(max(c1,c2))

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int ar1[a];
    for (size_t i = 0; i < a; i++)
    {
        cin >> ar1[i];
    }
    int b;
    cin >> b;
    int ar2[b];
    for (size_t i = 0; i < b; i++)
    {
        cin >> ar2[i];
    }
    int k;
    cin >> k;
    int x = 0;
    for (size_t i = 0; i < a; i++)
    {
        if (ar1[i] > k)
        {
            x++;
        }
    }
    int y = 0;
    for (size_t i = 0; i < a; i++)
    {
        if (ar2[i] < k)
        {
            y++;
        }
    }
    cout << max(x, y) << endl;

    return 0;
}