/*You are given a string 'str' of length 'N'.
Your task is to reverse the original string word by word.
There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.
Example :
If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.*/
#include <bits/stdc++.h>
#include <sstream>
#include <vector>

using namespace std;
string reverseString(string &str)
{
    stack<string> st;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        string word = "";
        while (str[i] != ' ' && i < str.length())
        {

            word += str[i];
            i++;
        }
        st.push(word);
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top() + " ";
        st.pop();
    }

    return ans;
}

int main()
{
    // Example usage
    string inputString = "Welcome to Coding Ninjas";
    string result = reverseString(inputString);
    cout << result << endl;

    return 0;
}
