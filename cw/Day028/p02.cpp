

#include<iostream>
#include<vector>
using namespace std;
void printArr(int arr[][3], int row, int column, int brr[][3])
{

    // printing Transposed 2D array. 

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {   
            brr[j][i] = arr[i][j];
            cout << brr[i][j] << " ";
        }
    cout << endl;

    }
}
int main()
{
    
    int arr[3][3];
    int brr[3][3];
    int row = 3;
    int column = 3;

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

    // printing Original 2D array. 

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << arr[i][j] << " ";

            // transposing array

            brr[j][i] = arr[i][j];

        }
    cout << endl;

    }

    cout << endl;


    printArr(arr,row,column,brr);
    
    return 0;
}