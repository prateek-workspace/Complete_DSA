// WAP to print hollow full pyramid.

#include<iostream>
using namespace std;
int main()
{

    int n,col;
    cout << "Enter Length of Triangle : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        /* code */
        for (col = 0; col < (n-row); col++)
        {
            cout << " ";    
        }
        for (col = 0; col < (row+1); col++)
        {
            // cout << "* ";  

            if (col == 0 || col == (row) || row == (n-1))
            {
                /* code */
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl; 
    }
}