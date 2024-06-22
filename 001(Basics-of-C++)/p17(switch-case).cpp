/**
 * This program takes an input from the user and uses a switch case statement to print different
 * outputs based on the input value.
 */
// WAP for switch case statements. 

#include<iostream>
using namespace std;
int main()
{

    int input;
    cout << "Enter Value :  ";
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "Prateek";
        break;
    
    case 2:
        cout << "Srivastava";
        break;
    
    default:
        cout << "Prateek Srivastava";
        break;
    }

}