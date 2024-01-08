// WAP to print numeric palindrome equilateral pyramid. 

/**
 * This C++ program prints a triangle pattern with numbers.
 */

#include<iostream>
using namespace std;
int main()
{

    int n,col;
    cout << "Enter Length of Triangle : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int m = row;
        /* code */
        for (col = 0; col < (n-row); col++)
        {
            /* code */
            cout << " ";
        }
        for (col = 0; col < (row + 1); col++)
        {
            /* code */
            cout << col+1;
        }
        for (col= 0 ;  col< row; col++)
        {
            /* code */
            cout << m;
            m--;
        }        
        cout << endl;   
    }    
}