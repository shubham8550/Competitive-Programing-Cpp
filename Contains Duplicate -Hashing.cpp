#include <bits/stdc++.h>
// https://leetcode.com/problems/contains-duplicate/
using namespace std;

int main()
{
    // Code Here
    return 0;
}

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