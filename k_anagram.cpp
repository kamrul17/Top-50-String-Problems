#include <bits/stdc++.h>
using namespace std;

bool areKAnagrams(string s1, string s2, int k)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    unordered_map<char, int> map;
    for (int i = 0; i < s1.length(); i++)
    {
        char ch = s1[i];
        map[ch]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        char ch = s2[i];
        if (map[ch] > 0)
        {
            map[ch]--;
        }
    }

    int count = 0;
    for (auto it = map.begin(); it != map.end(); it++)
    {
        count += it->second;
    }

    if (count > k)
        return false;
    else
        return true;
}
int main()
{
    string str1 = "anagram";
    string str2 = "grammar";
    int k = 2;
    if (areKAnagrams(str1, str2, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
