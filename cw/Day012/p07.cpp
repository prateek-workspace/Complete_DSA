// WAP to print solid half diamond.

#include<iostream>
using namespace std;
int main()
{

    int n,row,col;
    cout << "Enter length : ";
    cin >> n; 

    for (row = 0; row < n; row++)
    {
        /* code */
        for (col = 0; col < (row+1); col++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }  

    for (row = 0; row < n-1; row++)
    {
        /* code */
        for (col = 0; col < (n-row-1); col++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }   
}