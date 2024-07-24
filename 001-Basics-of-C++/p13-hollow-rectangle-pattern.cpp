// WAP to Print hollow rectangle.

/**
 * This C++ program takes input for the length and breadth of a rectangle and prints a rectangle using
 * asterisks.
 */

#include<iostream>
using namespace std;
int main()
{

    int row,col,length,breadth;

    // taking input of length and breadth

    cout << "Enter Length of Rectangle : ";
    cin >> length;

    cout << "Enter Breadth of Rectangle : ";
    cin >> breadth;

    // loop for printing the outer body

    for (row = 0; row < breadth; row++)
    {
        // prints the first and last rows 
        if ( row == 0 || row == (breadth-1))
        {
            for (col = 0; col < length; col++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else 
        {
            // printing first * 
            cout << "* ";
            // printing whitespaces 
            for (int i = 0; i < (length-2); i++)
            {
                cout << "  ";
            }  
            // printing last * 
            cout << "* \n";  
        }

    }
      
}