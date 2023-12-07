/*wo s A and B. Find minimum number of times A has to be repeated such that B is a Substring of it. If B can never be a substring then return -1.
 */
#include <bits/stdc++.h>
using namespace std;
int minRepeats(string A, string B)
{
    string S = A;
    int repeat = 1;
    while (A.length() < B.length())
    {
        cout << "run" << endl;
        A += S;
        repeat++;
    }
    if (A.find(B) != -1)
    {
        return repeat;
    }
    A += S;
    repeat++;
    if (A.find(B) != -1)
    {
        return repeat;
    }

    return -1;
}
int main()
{
    string A = "abc";
    string B = "bcabca";
    int ans = minRepeats(A, B);
    cout << ans;
    return 0;
}