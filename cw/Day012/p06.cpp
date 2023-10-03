// WAP to print fancy pattern 2.

#include<iostream>
using namespace std;
int main()
{

    int n,row,col;
    cout << "Enter length : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        /* printing solid square */
        for (col = 0; col < n; col++)
        {
            /* code */
            cout << "*";
        }
        for (col = 0; col < (n-row); col++)
        {
            /* printing inverted solid half pyramid */
            cout << "*";
        }
        for (col = 0; col < (2*row+1); col++)
        {
            /* printing solid pyramid */
            if (col%2==0)
            {
                /* code */
                cout << row+1;
            }
            else
            {
                cout <<"*";
            }
        }
        /* printing solid square */
        for (col = 0; col < n; col++)
        {
            /* code */
            cout << "*";
        }
        for (col = 0; col < (n-row); col++)
        {
            /* printing inverted solid half pyramid */
            cout << "*";
        }
        cout << endl;        
    }
}