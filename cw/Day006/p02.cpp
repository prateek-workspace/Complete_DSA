// WAP to print numeric full pyramid 

/**
 * This C++ program prints a triangle pattern with numbers.
 */

#include<iostream>
using namespace std;
int main()
{

    int row,col,n,m;
    cout << "Enter length of triangle : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        m = (row + 1);
        for (col = 0; col < (n - row); col++)
        {
            cout << " ";
        }

        for (col = 0; col < (row + 1); col++)
        {
            cout << m;
            m++;
        }
        int count = 2*row;
        for (col = 0; col < (row); col++)
        {
            cout << count;
            count--;
        }
        cout << endl;
    }
    
    
}