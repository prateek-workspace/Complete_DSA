// WAP to print inverted half hollow numeric pyramid 

/**
 * This C++ program prints a triangle pattern with numbers.
 */

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter Length of Triangle : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        /* code */
        for (int col = 0; col < (n-row); col++)
        {
            /* code */
            if (row == 0 || col == 0 || col == (n-row-1))
            {
                /* code */
                cout << col+1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;   
    }    
}