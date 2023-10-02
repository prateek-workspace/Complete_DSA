// WAP to print solid square pattern 

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
            if (row == 0 || row == (n-1))
            {
                cout << "* ";
            }
            // else if (col == 0 || col == (n-1))
            // {
            //     cout << "* ";
            // }           
            
        } 

        for (int col = 0; col < n; col++)
        {
            if (col == 0 || col == (n-1))
            {
                cout << "* ";
            }           
            else
            {
                cout << " ";
            }
            
        } 

        cout << endl;
    }
}