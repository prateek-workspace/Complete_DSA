// WAP to Print solid square star pattern

#include<iostream>
using namespace std;
int main()
{

    int row,column,n;

    cout << "Enter size of side of square : ";
    cin >> n;

    for (row = 0; row < n; row++)
    {
        for (column = 0; column < n; column++)
        {
            cout << " * ";
        }

        cout << endl;
        
    }
    
    
}