/**
 * The above code takes input for a 3x3 matrix, prints the original matrix, transposes the matrix, and
 * then prints the transposed matrix.
 * 
 * @param a rr A 2D array of size 3x3, which represents the original array.
 * @param row 3
 * @param column The variable "column" represents the number of columns in the 2D array. In this case,
 * it is set to 3.
 * @param brr brr is a 2D array of integers with dimensions 3x3. It is used to store the transposed
 * array.
 */


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