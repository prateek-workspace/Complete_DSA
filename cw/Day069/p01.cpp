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