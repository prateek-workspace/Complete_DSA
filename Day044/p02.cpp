/**
 * The code finds and prints the duplicate number in a given vector.
 * 
 * @return The program is returning 0.
 */
// Leetcode 287
// Find Duplicate Number
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> arr{1,3,4,5,6,7,8,9,0,0};
    while (arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[0]]);
    }
        // printing the duplicate number

        cout << "Duplicate number is : " << arr[0]<<endl;

    
    return 0;
}