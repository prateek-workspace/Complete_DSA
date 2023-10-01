// WAP to print flipped solid diamond 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter length of characters : ";
    cin >> n;

    int m = n / 2;

    int row,col = 0;
    
    for (row = 0; row < m; row++)
    {
        for (col = 0; col <m-row ; col++)
        {
            cout << "*";
        }


        for (col = 0; col < 2*(row+1); col++)
        {
            cout << " ";
        }


        for (col = 0; col < m-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }


    for (row = 0; row < m; row++)
    {
        for (col = 0; col <row+1 ; col++)
        {
            cout << "*";
        }

        for (col = 0; col < n - 2*(row); col++)
        {
            cout << " ";
        }

        for (col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }


    


}