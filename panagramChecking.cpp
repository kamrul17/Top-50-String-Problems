#include <iostream>
#include <unordered_set>
using namespace std;

bool isPangram(string str)
{
    unordered_set<char> set;
    for (char &ch : str)
    {
        if (isalpha(ch))
        {
            char lowerCh = tolower(ch);
            set.insert(lowerCh);
        }
    }
    return set.size() == 26;
}

int main()
{
    // Example usage
    string inputString = "The quick brown fox jumps over the lazy dog";
    bool result = isPangram(inputString);

    if (result)
    {
        cout << "The string is a Pangram." << endl;
    }
    else
    {
        cout << "The string is not a Pangram." << endl;
    }

    return 0;
}
