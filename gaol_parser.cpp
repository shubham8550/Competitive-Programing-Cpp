#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    string interpret(string command)
    {
        string op;
        for (int i = 0; i < command.size(); i++)
        {

            switch (command[i])
            {
            case 'G':
                op.push_back('G');
                break;
            case '(':
                if (command[i + 1] == ')')
                {
                    op.push_back('o');
                    i++;
                }
                else
                {
                    op += "al";
                    i += 3;
                }
            }
        }
        return op;
    }
};

int main()
{
    cout << (Solution().interpret("G()()()()(al)")) << endl;
    return 0;
}
