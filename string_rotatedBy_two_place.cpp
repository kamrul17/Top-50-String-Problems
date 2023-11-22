// Check if string is rotated by two places
// Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating (in any direction) string 'a' by exactly 2 places.

#include <bits/stdc++.h>
using namespace std;
bool isRotated(string str1, string str2)
{
    int str1_size = str1.size();
    int str2_size = str2.size();
    if (str1_size != str2_size || (str1_size <= 2 && str2_size <= 2))
    {
        return false;
    }
    string clockWiseRotation = "";
    string antiClockWiseRotation = "";

    clockWiseRotation += str1.substr(str1_size - 2) + str1.substr(0, str1_size - 2);
    // cout << clockWiseRotation << endl;
    antiClockWiseRotation += str1.substr(2) + str1.substr(0, 2);
    // cout << antiClockWiseRotation << endl;
    if (clockWiseRotation == str2 || antiClockWiseRotation == str2)
    {
        return true;
    }
    return false;
}
int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "geeksgeeksfor";
    if (isRotated(str1, str2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}