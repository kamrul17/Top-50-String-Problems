#include <iostream>
#include <vector>

using namespace std;

// Function to check if a number is prime
bool isPrime(int sum)
{
    if (sum < 2)
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i <= sum; i++)
    {
        if (sum % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Function to find the minimum non-negative number to make the sum prime
int findMinNumberForPrimeSum(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int numToAdd = 0;
    while (!isPrime(sum))
    {
        sum++;
        numToAdd++;
    }

    return numToAdd;
}

int main()
{
    vector<int> arr = {2, 4, 6, 8, 12};

    int result = findMinNumberForPrimeSum(arr);

    cout << "The minimum non-negative number to make the sum prime is: " << result << endl;

    return 0;
}
