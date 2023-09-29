// WAP to print half pyramid pattern. 

#include<iostream>
using namespace std;
int main()
{

    int row,col,n;

    // taking input of n.

    cout << "Enter n : ";
    cin >> n;


    for (row = 0; row < n; row++)
    {
        for (col = 0; col < (row+1); col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    
}