/**
 * The above code checks whether a given string is a palindrome or not.
 * 
 * @param ch The parameter `ch` is a character array that represents the string to be checked for
 * palindrome.
 * 
 * @return The function `checkPalindrome` returns a boolean value. It returns `true` if the input
 * string is a palindrome, and `false` otherwise.
 */
// check if string is palindrome or not
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool checkPalindrome(char ch[]){
    int end = strlen(ch)-1;
    int i = 0;
    int j = end;

    while (i<=j)
    {
        if (ch[i]!=ch[j])
        {
            return false;
        }
        else{
            // return true;
            i++;
            j--;
        }
    }
    return true;
     
}
int main()
{
    char ch[100];

    cout << "Enter your String : " << endl;
    cin.getline(ch,50);

    cout << "Original String is : " << ch << endl;

    cout << "Palindrome Check : " << checkPalindrome(ch) << endl;
    
    return 0;
}