
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string arr[], int N)
{
    if (N == 0)
    {
        return "";
    }

    // Sort the array
    sort(arr, arr + N);

    string first = arr[0];
    string last = arr[N - 1];

    int i = 0;
    while (i < first.length() && i < last.length() && first[i] == last[i])
    {
        i++;
    }
    if (i == 0)
    {
        return "-1";
    }
    return first.substr(0, i);
}
int main()
{

    string arr[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    int N = sizeof(arr) / sizeof(string);
    string ans = longestCommonPrefix(arr, N);
    cout << "Reversed String: " << ans << std::endl;
    return 0;
}