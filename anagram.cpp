#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string s)
{
    unordered_set<char> charSet;

    for (char c : s)
    {
        if (isalpha(c))
        {
            charSet.insert(tolower(c));
        }
    }

    return charSet.size() == 26;
}

int main()
{
    string input = "The quick brown fox jumps over the lazy dog";
    bool result = checkPangram(input);

    if (result)
    {
        cout << "The string is a pangram." << endl;
    }
    else
    {
        cout << "The string is not a pangram." << endl;
    }

    return 0;
}
