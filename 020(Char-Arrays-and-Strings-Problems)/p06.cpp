/**
 * The above C++ code compares two strings and determines if they are the same or if one is larger than
 * the other.
 * 
 * @param a The first string entered by the user.
 * @param b The variable `b` is a string that represents the second input string.
 * 
 * @return The function `compareStr` is returning an integer value of 0.
 */
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int compareStr(string a, string b){
    if (a.length()!=b.length())
    {
        cout << "Not Same";
    }
    
    if (a.length()==b.length())
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i]!=b[i])
            {
                cout << "Not Same";
                break;
            }
            
        }
    }
    if (a.length()>b.length())
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i]!=b[i])
            {
                cout << ", First String is Larger" << endl;
                break;
            }
            
        }
    }
    if (b.length()>a.length())
    {
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i]!=a[i])
            {
                cout << ", Second String is Larger" << endl;
                break;
            }
            
        }
    }
    
    // cout << "Same Strings" << endl;
    return 0;

}
int main()
{
    string a,b;
    cout << "Enter First String : " << endl;
    getline(cin,a);
    cout << "Enter Second String : " << endl;
    getline(cin,b);

    compareStr(a,b);

    return 0;
}