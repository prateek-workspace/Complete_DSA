/**
 * This C++ program counts the number of spaces in a given string.
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
    int count = 0;
    cout << "Original String is : " << ch << endl;
    for (int i = 0; i < size; i++)
    {
        if (ch[i]==' ')
        {
            count++;
        }
        
    }  
    cout << "Total Spaces in String are : " << count << endl;
    return 0;
}