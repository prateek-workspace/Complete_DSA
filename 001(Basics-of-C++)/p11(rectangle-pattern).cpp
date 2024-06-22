// WAP to Print Solid Rectangle Pattern.

/**
 * This C++ program prints a rectangle made of asterisks with 3 rows and 5 columns.
 */

#include<iostream>
using namespace std;
int main()
{

    int row,column;

    for (row = 0; row <3; row++)
    {
        for (column = 0; column < 5; column++)
        {
            cout << " * ";
        }
        
        cout << endl;

    }
    
}