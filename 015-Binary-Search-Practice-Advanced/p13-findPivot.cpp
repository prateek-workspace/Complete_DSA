/**
 * The above C++ code finds the pivot element in a rotated and sorted array with no duplicates.
 * 
 * @return The code is not using a return statement to return any value. Instead, it is using the
 * `cout` statement to print the pivot element.
 */
// Find Pivot Element in a rotated and sorted Array with no duplicates
#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        // checking if there is only single element in the array

        if (s==e)
        {
            return mid;
            // cout << arr[mid];
            // break;
        }
        // checking for element not to go out of bound and its position
        if (mid <= e && arr[mid]>arr[mid+1])
        {
            return mid;
            // cout << arr[mid];
            // break;
        }
        // checking for element not to go out of bound and its position
        if (mid-1 >= s && arr[mid-1]>arr[mid])
        {
            return mid-1;
            // cout << arr[mid-1];
            // break;
        }
        // binary search in search space
        if (arr[e]<arr[s])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
        
    }
    return -1;
   
}
int main()
{
    
    vector<int> arr{9,10,2,4,6,8};

    int ans = findPivot(arr);
    cout << "Pivot Element is : " << arr[ans];

}

