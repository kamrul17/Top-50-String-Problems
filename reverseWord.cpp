/*Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i*/
#include <bits/stdc++.h>
#include <sstream>
#include <vector>

using namespace std;

string reverseWords(string S)
{
    stack<string> st;
    for (int i = 0; i < S.length(); i++)
    {
        string word;
        while (S[i] != '.' && i < S.length())
        {
            word += S[i];
            i++;
        }
        st.push(word);
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
        if (!st.empty())
        {
            ans += '.';
        }
    }
    return ans;
}

int main()
{
    // Example usage
    string inputString = "Hello.W.orld";
    string result = reverseWords(inputString);
    cout << result << endl;

    return 0;
}
// stringstream ss(S);
// vector<string> words;
// string word;

// while (getline(ss, word, '.'))
// {
//     words.push_back(word);
// }

// reverse(words.begin(), words.end());

// string reversedString = words[0];
// for (int i = 1; i < words.size(); ++i)
// {
//     reversedString += "." + words[i];
// }

// return reversedString;