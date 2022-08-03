// https://leetcode.com/problems/word-pattern/
//  this was hard but i think theres simpler solution
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

bool wordPattern(string pattern, string s)
{

    unordered_map<int, string> Happy;
    unordered_map<string, int> Hash;
    unordered_map<int, int> HashPattern;

    vector<string> ip;
    while (s != "")
    {
        string word = "";
        while (s[0] != ' ' && s != "")
        {
            word += s[0];
            s.erase(0, 1);
        }
        s.erase(0, 1);
        ip.push_back(word);
    }
    if (ip.size() != pattern.size())
    {
        return false;
    }

    for (size_t i = 0; i < pattern.size(); i++)
    {
        string word = ip[i];

        if (Happy[pattern[i]] == "")
        {
            Happy[pattern[i]] = word;
        }
        else if (Happy[pattern[i]] != word)
        {
            return false;
        }

        Hash[word]++;
        HashPattern[pattern[i]]++;

        if (Hash[word] != HashPattern[pattern[i]])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << wordPattern("abba", "dog cat cat dog");
    return 0;
}
