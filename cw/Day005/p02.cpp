// WAP to Print Full Pyramid

#include<iostream>
using namespace std;
int main()
{

    int row, col, n = 0;
    cout << "Enter length of pyramid : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < (n - row); col++)
        {
            cout << " ";
        }
        for (col = 0; col < (row + 1); col++)
        {
            cout << "* ";
        }  
        cout << endl;
    }
    
}