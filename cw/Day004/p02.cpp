// WAP to print numeric half pyramid.

/**
 * This C++ program prints a triangle pattern of numbers based on user input.
 */

#include<iostream>
using namespace std;
int main()
{

    int row, col, n;

    cout << "Enter length of traiangle : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        int i = 1;

        for (col = 0; col < (row + 1); col++)
        {
            cout <<  i ;
            i++;
        }
        
    cout << endl;

    }
    
    
    // for (row = 0; row < n; row++)
    // {
    //    for (col = 0; col < (row + 1); col++)
    //     {
    //         cout << col + 1 ;
    //     }
        
    // cout << endl;

    // }
     
}