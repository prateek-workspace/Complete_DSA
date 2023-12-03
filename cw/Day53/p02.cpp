// search for an element in a 2D Array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int target;
    cout << "Enter number you want to search : ";
    cin >> target;
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows = 5;
    int column = 4;
    int total = rows*column;
    int start = 0;
    int end = total - 1;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        int rowIndex = mid/column;
        int columnIndex = mid%column;
        if (arr[rowIndex][columnIndex] == target)
        {
            cout << "Element found at : " << rowIndex << "," << columnIndex << endl;
            break;
        }
        if (arr[rowIndex][columnIndex] > target)
        {
           end = mid - 1; 
        }
        if (arr[rowIndex][columnIndex] < target)
        {
           start = mid + 1; 
        }
        mid = start + (end - start)/2;

    }
    
    return 0;
}