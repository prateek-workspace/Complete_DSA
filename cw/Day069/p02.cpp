/**
 * This C++ program takes a string as input, replaces all spaces with '@', and then prints the modified
 * string.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{

    char ch[100];
    cout << "Enter your string : " << endl;
    cin.getline(ch,100);
    int size = strlen(ch);
    cout << "Original String is : " << ch << endl;
    for (int i = 0; i < size; i++)
    {
        if (ch[i]==' ')
        {
            ch[i]='@';
        }
        
    }  
    cout << "Modified String is : " << ch << endl;
    return 0;
}