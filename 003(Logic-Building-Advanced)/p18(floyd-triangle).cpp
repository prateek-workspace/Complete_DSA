/**
 * This C++ program prints a pattern of numbers in a triangular shape.{Floyd's Triangle}
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
    int a = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    
    
    
    return 0;
}