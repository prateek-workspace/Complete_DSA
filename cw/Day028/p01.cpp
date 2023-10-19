/**
 * This C++ program takes input for a 3x3 array, prints the array, and then finds the maximum and
 * minimum numbers in the array.
 * 
 * @param arr A 2D array of integers with dimensions 3x3.
 * @param row The number of rows in the 2D array. In this case, it is 3.
 * @param column The variable "column" represents the number of columns in the 2D array. In this case,
 * it is set to 3.
 * @param minNum The variable `minNum` is used to store the minimum number found in the 2D array. It is
 * initially set to the maximum possible value for an integer (`INT8_MAX`) so that any number in the
 * array will be smaller than it.
 * 
 * @return The program is returning the maximum and minimum numbers from the 2D array.
 */

#include<iostream>
#include<vector>
using namespace std;


int findMin(int arr[][3], int row, int column, int minNum)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j]<=minNum)
            {
                minNum = arr[i][j];
            }
            
        }
    }
    return minNum;
}


int findMax(int arr[][3], int row, int column, int maxNum)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j]>=maxNum)
            {
                maxNum = arr[i][j];
            }
            
        }
    }
    return maxNum;
}


int main()
{
    
    int arr[3][3];
    int row = 3;
    int column = 3;
    int maxNum = INT8_MIN;
    int minNum = INT8_MAX;

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

    cout << "Maximum Number is : " << findMax(arr,row,column,maxNum) << endl;
    cout << "Minimum Number is : " << findMin(arr,row,column,minNum) << endl;

    
    return 0;
}