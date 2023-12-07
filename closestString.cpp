/*Given a list of words followed by two words, the task to find the minimum distance between the given two words in the list of words*/
#include <bits/stdc++.h>
using namespace std;
int shortestDistance(vector<string> &s, string word1, string word2)
{
    int index1 = -1;
    int index2 = -1;
    int mini = INT8_MAX;
    if (word1 == word2)
    {
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == word1)
        {
            index1 = i;
        }
        if (s[i] == word2)
        {
            index2 = i;
        }
        if (index1 != -1 && index2 != -1 && index1 != index2)
        {
            mini = min(mini, abs(index1 - index2));
        }
    }

    return mini;
}
int main()
{
    vector<string> s = {"qz", "jm", "dv", "ejs", "of ", "ejs", "qz"};

    string word1 = "qz";
    string word2 = "qz";

    int ans = shortestDistance(s, word1, word2);
    cout << ans;
    return 0;
}
