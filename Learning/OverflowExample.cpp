// Constraints 
// 1 <= n <= 10^9
// 1 <= b <= 10^9

// seince if 2 int cross limit of int then it will gib error thats why wee do typecast 

// int = 10^9
// long int = 10^12
// long long int = 10^18



#include <bits/stdc++.h>



using namespace std;

int main()
{
    int l,b;
    cin >> l >> b;
    cout << l * 1LL * b;  // 1LL is long long  ie  10^18
    return 0;
}