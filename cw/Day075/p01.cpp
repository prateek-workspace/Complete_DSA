// Valid Palindrome 2
// Leetcode - 680.
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
bool isPalindrome(string s, int i, int j){

    while (i<=j)
    {
        if (s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
        
    }
    return true;    

}
bool palindrome(string s){
    int i = 0;
    int j = s.length()-1;
    while (i<=j)
    {
        if (s[i]!=s[j])
        {
            return isPalindrome(s,i+1,j) || isPalindrome(s,i,j-1);
        }
        else{
            i++;
            j--;
        }
    }
    
}
int main()
{
    
    string s;
    cout << "Enter your string : " << endl;
    cin >> s;

    if (palindrome(s)==true)
    {
        cout << "Desired string is a Palindrome" << endl;
    }
    else{
        cout << "Desired String is not a Palindrome" << endl;
    }
    
    return 0;
}