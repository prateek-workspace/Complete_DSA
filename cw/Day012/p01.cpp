// WAP to print hollow inverted half pyramid.

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
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
        
    }
    

}