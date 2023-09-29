// WAP to print inverted half pyramid pattern.

#include<iostream>
using namespace std;
int main()
{

    int row, col, n;

    cout << "Enter length of Triangle : " ;
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col < (n - row); col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
       
    
}