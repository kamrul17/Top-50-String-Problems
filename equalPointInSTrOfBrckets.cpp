
#include <bits/stdc++.h>
using namespace std;

int findIndex(string str)
{
    int cnt = 0, cntt = 0;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == ')')
            cnt++;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
            cntt++;
        if (str[i] == ')')
            cnt--;
        if (cntt == cnt)
            return i + 1;
    }
    return 0;
}
int main()
{

    string S = "(()))()()()";
    int N = sizeof(S) / sizeof(string);
    int ans = findIndex(S);
    cout << "Reversed String: " << ans << std::endl;
    return 0;
}