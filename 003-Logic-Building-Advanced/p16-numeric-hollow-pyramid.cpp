/**
 * This program prints a numeric hollow pyramid pattern based on the user input.
 */

// WAP to print numeric hollow pyramid.

#include<iostream>
using namespace std;
int main()
{

    int n,col;
    cout << "Enter Length of Triangle : ";
    cin >> n;
    int start = 2;

    for (int row = 0; row < n; row++)
    {
        /* code */
        for (col = 0; col < (n-row-1); col++)
        {
            /* code */
            cout << " ";    
        }
        for (col = 0; col < 2*(row)+1; col++)
        {
            /* code */
            if (col == 0)
            {
                /* code */
                cout << col+1;
            }
            else if (col == 2*row)
            {
                /* code */
                cout << (row+1);
            } 
            else if (row == (n-1))
            {
                /* code */
                if (col%2==0)
                {
                    /* code */
                    cout <<start;
                    start++;
                }
                else
                {
                    cout << " ";
                }
                
            } 
            else
            {
                cout << " ";
            }           
        }
        
        cout << endl;  
    }
}