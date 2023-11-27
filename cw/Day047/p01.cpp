// spriral print a matrix
#include<iostream>
#include<vector>
using namespace std;
void spiralPrintMatrix(vector<vector<int>> arr){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    int startRow = 0;
    int startCol = arr.size() - 1;
    int endRow = arr[0].size() - 1; 
    int endCol = 0; 

    for (int i = 0; i < arr[0].size(); i++)
    {
        cout << arr[0][i] << " ";
    }
    // startRow++;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i][(arr[0].size()-1)] << " ";
    }
    // startCol--;
    for (int i = (arr[0].size()-1); i >= 0; i--)
    {
        cout << arr[(arr.size()-1)][i] << " ";
    }
    // endRow--;
    for (int i = (arr.size()-1); i >= 0; i--)
    {
        cout << arr[i][0] << " ";
    }
    // endCol--;
    
}
int main()
{
    
    vector<vector<int>> arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    spiralPrintMatrix(arr);
    
    return 0;
}