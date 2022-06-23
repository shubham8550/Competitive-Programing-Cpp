#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int o = 0, g, p, part;
        cin >> g >> p >> part;

        while (part--)
        {

            int green, purple;
            cin >> green >> purple;
            o += (green ? (t % 2 == 0 ? p : g) : 0);
            o += (purple ? (t % 2 == 0 ? g : p) : 0);
        }
        cout << o << endl;
    }
    return 0;
}