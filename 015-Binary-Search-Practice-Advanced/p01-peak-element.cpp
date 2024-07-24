/**
 * The given C++ function finds and returns the index of a peak element in a given vector using binary
 * search.
 * 
 * @param arr The code you provided is for finding a peak element in an array using binary search. In
 * the `peakElement` function, the code is trying to find a peak element in the given array `arr`. A
 * peak element is an element that is greater than or equal to its neighbors.
 */

#include<iostream>
#include<vector>
using namespace std;
int peakElement(vector<int> arr)
{

    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if (arr[mid]<arr[mid+1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    mid = s + (e-s)/2;
    }
    cout << e;
}
int main()
{
    vector<int> arr{0,10,5,2};
    return peakElement(arr);    
}