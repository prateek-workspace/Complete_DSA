// Remove all adjacents in a String.
// Leetcode - 1047.
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

// Function to remove adjacent duplicates from a string
string removeDuplicates(string str)
{
    // Length of the input string
    int size = str.length();

    // Temporary string to store the result
    string temp = "";

    // Iterate through each character in the input string
    int i = 0;
    while (i < size)
    {
        // If the last character in the temporary string is the same as the current character
        //in the input string and the temporary string is not empty
        if (temp[temp.length() - 1] == str[i] && temp.length() > 0)
        {
            // Remove the last character from the temporary string
            temp.pop_back();
        }
        else
        {
            // Add the current character to the temporary string
            temp.push_back(str[i]);
        }

        // Move to the next character in the input string
        i++;
    }

    // Return the final result
    return temp;
}

int main()
{

    // Input string
    string str;

    // Prompt the user to enter a string
    cout << "Enter string in lower case having some adjacent duplicates : " << endl;

    // Read the input string from the user
    cin >> str;

    // Print the desired string
    cout << "Desired string is : " << removeDuplicates(str) << endl;

    // Return 0 to indicate successful execution
    return 0;
}