// https://leetcode.com/problems/valid-anagram/submissions/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Code Here
    return 0;
}

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        unordered_map<int, int> Hash;
        for (int i = 0; i < s.size(); i++)
        {
            Hash[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (Hash[t[i]] == 0)
            {
                return false;
            }
            Hash[t[i]]--;
        }
        return true;
    }
};