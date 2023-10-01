// WAP to print alphabet palindrome pattern.

#include<iostream>
using namespace std;
int main()
{

    int n,col;
    cout << "Enter length : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (col = 0; col < row+1; col++)
        {
            {
                int ans = col;
                char ch = ans + 'A';
                cout << ch;

            }           
        }
        col = col - 1;

        // printing reverse counting

        for (; col >= 1; col--)
        {
            int ans = col;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        
      cout << endl;
    }       
    
}