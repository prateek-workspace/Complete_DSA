
#include<iostream>
#include<vector>
using namespace std;
void wavePrintMatrix(vector<vector<int>>arr){
    int col = arr.size();
    int row = arr[0].size();

    for (int startCol = 0; startCol < row; startCol++)
    {
        // for even col...approach is up to down
        if ((startCol&1) == 0)
        {
            for (int i = 0; i < col; i++)
            {
                cout << arr[i][startCol] << " ";
            }
            
        }
        else{
            // for odd col... approach is down to up
            for (int i = (col-1); i >= 0; i--)
            {
                cout << arr[i][startCol] << " ";
            }
            
        }
        
    }
    
}
int main()
{
    
    vector<vector<int>> arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    wavePrintMatrix(arr);
    
    return 0;
}