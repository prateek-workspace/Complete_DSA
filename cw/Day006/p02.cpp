// WAP to print numeric full pyramid 

#include<iostream>
using namespace std;
int main()
{

    int row,col,n,m;
    cout << "Enter length of triangle : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        m = (row + 1);
        for (col = 0; col < (n - row); col++)
        {
            cout << " ";
        }

        for (col = 0; col < (row + 1); col++)
        {
            cout << m;
            m++;
        }
        for (col = 0; col < (row + 1); col++)
        {
            if (row == 0)
            {
                cout << ".";
            }
            
        }
        cout << endl;
    }
    
    
}