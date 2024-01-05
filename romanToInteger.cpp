#include <iostream>
using namespace std;

int calculateValue(char a)
{
    if (a == 'I')
    {
        return 1;
    }
    else if (a == 'V')
    {
        return 5;
    }
    else if (a == 'X')
    {
        return 10;
    }
    else if (a == 'L')
    {
        return 50;
    }
    else if (a == 'C')
    {
        return 100;
    }
    else if (a == 'D')
    {
        return 500;
    }
    else if (a == 'M')
    {
        return 1000;
    }
}
int romanToDecimal(string &str)
{
    int n = str.length();
    int v1, v2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            v1 = calculateValue(str[i]);
            v2 = calculateValue(str[i + 1]);
            if (v1 < v2)
            {
                ans -= v1;
            }
            else
            {
                ans += v1;
            }
        }
        else
        {
            ans += calculateValue(str[i]);
        }
    }
    return ans;
}
int main()
{
    string str = "VI";
    int ans = romanToDecimal(str);
    cout << ans;
    return 0;
}
