// WAP to rint Inverted number half Pyramid  

/**
 * This C++ program prints a triangle pattern of numbers based on user input.
 */

#include<iostream>
using namespace std;
int main()
{

    int row,col,n = 0;

    cout << "enter length of triangle : ";
    cin >> n;

   for (row = 0; row < n; row++)
   {
        for (col = 0; col < (n - row) ; col++)
        {
            cout << col + 1;
        }
        cout << endl;
   }
    
    
}