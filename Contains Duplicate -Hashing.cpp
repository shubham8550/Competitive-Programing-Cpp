#include <bits/stdc++.h>
// https://leetcode.com/problems/contains-duplicate/
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> Hash;
        for (int i = 0; i < nums.size(); i++)
        {
            if (Hash[nums[i]] > 0)
            {
                return true;
            }
            Hash[nums[i]]++;
        }
        return false;
    }
};

int main()
{
    vector<int> data;
    int i = 0;
    while (cin)
    {
        int v;
        cin >> v;
        data.push_back(v);
        i++;
    }
    data.pop_back();
    Solution s;
    if (s.containsDuplicate(data))
        cout
            << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
