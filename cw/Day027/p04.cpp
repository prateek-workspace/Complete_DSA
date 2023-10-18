// WAP for linear search in 2D Arrays.

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
