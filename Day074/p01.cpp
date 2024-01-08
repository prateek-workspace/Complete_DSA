// Remove all adjacents in a String.
// Leetcode - 1047.
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
string removeDuplicates(string str){
    int size = str.length();
    string temp="";
    int i = 0;
    while (i<size)
    {
        if (temp[temp.length()-1]==str[i] && temp.length()>0)
        {
            temp.pop_back();
        }
        else{
            temp.push_back(str[i]);
        
        }
        i++;
    }
    return temp;
    
}
int main()
{
    
    string str;
    cout << "Enter string in lower case having some adjacent duplicates : " << endl;
    cin >> str;

    cout << "Desired string is : " << removeDuplicates(str) << endl;
    
    return 0;
}