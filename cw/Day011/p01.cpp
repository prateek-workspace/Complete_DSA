// WAP to print solid square pattern 

/**
 * This C++ program prints a square of asterisks based on the user's input for the side length.
 */

#include<iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the measure of side : ";
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        } 
        cout << endl;
    }
}