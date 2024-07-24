/**
 * This C++ program prints Pascal's triangle with a user-defined number of rows.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int n;
    cout << "Enter number of rows : " << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        int calc = 1;

        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++)
        {
            cout << calc  << " ";
            calc = calc*(i - j) / j;
        }

        cout << endl;
        
    }
    

    return 0;
}