/**
 * This C++ program takes input as a whole or single character inputs and displays the array.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    char ch[100];

    // taking input as a whole.

    // cout << "Enter your name : " << endl;
    // cin >> ch;

    // cout << "Your name is : " << ch << endl;

    // taking single single inputs.

    ch[0] = 'a';
    ch[1] = 'b';
    ch[2] = 'c';
    cin >> ch[3];

    cout << "Your Array is : " << ch[0] << ch[1] << ch[2] << ch[3] << endl;

    return 0;
}