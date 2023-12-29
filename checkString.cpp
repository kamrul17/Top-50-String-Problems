/*
Check if a string is repetition of its substring of k-length

Given a string s, check if it is possible to convert it into a string that is the repetition of a substring of length k. Conversion has to be done by following the steps mentioned below only once:

Select two indices i and j (zero-based indexing, i could be equal to j), such that i and j are divisible by k.
Select substrings of length k starting from indices i and j.
Replace substring starting at index i with substring starting at index j within the string.
Example 1:

Input:
N = 4
K = 2
S = "bdac"
Output: 1
Explanation: We can replace either
"bd" with "ac" or "ac" with "bd"*/
#include <bits/stdc++.h>
using namespace std;
int kSubstrConcat(int n, string s, int k)
{
    unordered_map<string, int> mpp;
    string temp = "";
    temp += s[0];
    if (n % k != 0)
    {
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (i % k == 0)
        {
            mpp[temp]++;
            temp = "";
        }
        temp += s[i];
    }
    mpp[temp]++;

    for (auto itr = mpp.begin(); itr != mpp.end(); itr++)
    {
        if (itr->second >= (n / k) - 1)
            return 1;
    }
    return 0;
}
int main()
{
    string s = "bdac";
    int n = s.size();
    int k = 2;
    if (kSubstrConcat(n, s, k))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}