
#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str)
{
    int start = 0;
    int end = str.size() - 1;
    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    return str;
}
int main()
{
    string s = "Geeks";
    string ans = reverseWord(s);
    cout << "Reversed String: " << ans << std::endl;
    return 0;
}