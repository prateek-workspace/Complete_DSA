// WAP to print inverted full pyramid 

/**
 * This C++ program prints a triangle pattern of asterisks.
 */

#include<iostream>
using namespace std;
int main()
{

    int row,col,n;
    cout << "Enter length of triangle : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < (row + 1); col++)
        {
            cout << " ";
        }

        for (col = 0; col < (n - row); col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    
}