// WAP to print hollow diamond 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter length of each traingles : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (n - row - 1); col++)
        {
            cout << " ";
        }
        for (int col = 0; col < (2*(row) + 1); col++)
        {
            if (col == 0)
            {
                cout << "*";
            }
            else if (col == 2*row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }  
        cout << endl;
    }
    // int m = n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < ((2*(n) - 2*(row)) - 1); col++)
    //     {
    //         if ( col == 0 || col == 2*(n-1) )
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << ".";
    //         }
    //         // m =  m - 1;
    //     }  
    //     cout << endl;
    // }
    
}