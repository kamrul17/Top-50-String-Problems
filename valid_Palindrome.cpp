#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {

        // checking s contain character other than alphanumeric(alphabets +any number)
        if (isalnum(s[start]) == 0)
        {

            start++;
            continue;
        }
        if (isalnum(s[end]) == 0)
        {

            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    // string s = " ";
    string s = "A1b22Ba";
    // string s = "A man, a plan, a canal: Panama";
    isPalindrome(s);
    if (isPalindrome(s))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
    return 0;
}