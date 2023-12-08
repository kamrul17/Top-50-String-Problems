#include <bits/stdc++.h>
#include <string>

using namespace std;

int isDivisibleBy7(string num)
{
    int n = num.length();

    // Base case: If the number is empty
    if (n == 0)
        return 0;

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res = res * 10 + (num[i] - '0');
        res = res % 7;
    }

    return (res % 7 == 0) ? 1 : 0;
}

int main()
{
    // Input the large number as a string
    string num;
    cout << "Enter the large number: ";
    cin >> num;

    // Check if the number is divisible by 7
    int result = isDivisibleBy7(num);

    // Print the result
    cout << result << endl;

    return 0;
}
