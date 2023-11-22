#include <bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }
    //  // Initialize maxChar to null character
    char maxChar = '\0';
    int maxCount = 0;

    for (auto pair : mp)
    {
        if (pair.second > maxCount || (pair.second == maxCount && pair.first < maxChar))
        {
            maxChar = pair.first;
            maxCount = pair.second;
        }
    }
    return maxChar;
}
int main()
{
    string s = "abba";
    char ans = getMaxOccuringChar(s);
    cout << ans;
    return 0;
}