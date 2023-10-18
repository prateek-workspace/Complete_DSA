// WAP to print row sum in 2D Arrays.

#include<iostream>
#include<vector>
using namespace std;
void printSum(int arr[][5], int row, int column)
// here we mention the second value(columns) in function declaration equals to 5 because we have to provide the size of columns just put here exact column size value.
{
        // calculating sum. 

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Sum of " << i << " row is : " << sum << endl;
    }
}


int main()
{
    
    int arr[4][5];
    int row = 4;
    int column = 5;

    // taking input 

    for (int i = 0; i < row; i++)
    {
        cout << "Input for " << i << " row" << endl; 
        for (int j = 0; j < column; j++)
        {
        cout << "Input for " << j << " column" << endl; 
            cin >> arr[i][j];
        }
        
    }

    // printing 2D array. 

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";
        }
    cout << endl;

    }

    printSum(arr,row,column);
    
    return 0;
}