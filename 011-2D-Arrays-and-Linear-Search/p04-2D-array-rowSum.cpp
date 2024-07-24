// WAP for linear search in 2D Arrays.

/**
 * This C++ program checks if a given number is present in a 2D array.
 * 
 * @param arr A 2D array of integers with size 3x3.
 * @param row The number of rows in the 2D array. In this case, it is 3.
 * @param column The variable "column" represents the number of columns in the 2D array. In this case,
 * it is set to 3.
 * @param key The key is the element that we are searching for in the 2D array. In this code, the key
 * is set to 4.
 * 
 * @return The function `numCheck` returns a boolean value. It returns `true` if the key is found in
 * the 2D array, and `false` otherwise.
 */

#include<iostream>
#include<vector>
using namespace std;
bool numCheck(int arr[][3], int row, int column, int key)
// here we mention the second value(columns) in function declaration equals to 5 because we have to provide the size of columns just put here exact column size value.
{
    // finding element.

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j]==key)
            {
                return true;
            }
        }
    }
    return false;
}


int main()
{
    
    int arr[3][3];
    int row = 3;
    int column = 3;
    int key = 4;

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

    if (numCheck(arr,row,column,key))
    {
        cout << "Element Found\n";
    }
    else
    {
        cout << "Element not found\n";
    }

}   
