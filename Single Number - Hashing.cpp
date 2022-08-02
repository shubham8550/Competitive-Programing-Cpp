#include <bits/stdc++.h>
// https://leetcode.com/problems/single-number/
using namespace std;
class Solution;
int main()
{

    return 0;
}
class Solution
{

public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> Hash;
        for (int i = 0; i < nums.size(); i++)
        {

            Hash[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {

            if (Hash[nums[i]] == 1)
            {
                return nums[i];
            }
        }
        return 0;
    }
};
