/**
 * The above code takes input for a 2D array, prints the array, and then calculates and prints the sum
 * of each row.
 * 
 * @param arr A 2D array of integers with 4 rows and 5 columns.
 * @param row The variable "row" represents the number of rows in the 2D array. In this case, it is set
 * to 4.
 * @param column The parameter "column" represents the number of columns in the 2D array. In this case,
 * it is set to 5.
 */

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