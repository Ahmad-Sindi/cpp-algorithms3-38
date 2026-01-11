#include <iostream>
#include <string>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #38 Trim Left, Trim Right, and Trim
 *
 * This program demonstrates how to remove extra spaces from the beginning, end, or both sides of a string.
 *
 * Trimming strings is a fundamental operation in data validation, user input processing, and text normalization within software systems.
 *
 * The solution avoids built-in trimming utilities and instead relies on manual character inspection to reinforce algorithmic thinking.
 */

// Removes leading spaces from the string
string TrimLeft(string S1)
{
    for (short i = 0; i < S1.length(); i++)
    {
        // Stop when the first non-space character is found
        if (S1[i] != ' ')
        {
            // Return substring starting from the first valid character
            return S1.substr(i, S1.length() - i);
        }
    }
    return "";
}

// Removes trailing spaces from the string
string TrimRight(string S1)
{
    // Traverse the string from right to left
    for (short i = S1.length() - 1; i >= 0; i--)
    {
        if (S1[i] != ' ')
        {
            // Return substring up to the last non-space character
            return S1.substr(0, i + 1);
        }
    }
    return "";
}

// Removes spaces from both left and right sides
string Trim(string S1)
{
    return TrimLeft(TrimRight(S1));
}

int main()
{
    string S1 = "        Ali Salih        ";

    cout << "Original String = [" << S1 << "]" << endl;
    cout << "\nTrim Left  = [" << TrimLeft(S1) << "]" << endl;
    cout << "Trim Right = [" << TrimRight(S1) << "]" << endl;
    cout << "Trim       = [" << Trim(S1) << "]" << endl;

    return 0;
}
