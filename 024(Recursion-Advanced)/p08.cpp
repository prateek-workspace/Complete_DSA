/**
 * The given C++ program checks if a vector of integers is sorted in non-decreasing order.
 * 
 * @param arr The `arr` parameter is a vector of integers containing the elements of the array that you
 * want to check for sorted order. In this case, the array contains the elements {1, 2, 3, 4, 5, 6,
 * 86}.
 * @param n 7
 * @param i The variable `i` in the code represents the current index being checked in the array for
 * sorting. It is used in the `isSorted` function to iterate through the array elements recursively to
 * determine if the array is sorted in non-decreasing order.
 * 
 * @return The program checks if the given array is sorted in non-decreasing order. If the array is
 * sorted, it returns "Array is Sorted". If the array is not sorted, it returns "Array is not Sorted".
 */
#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr, int& n, int i){
    if(i==n-1){
        return true;
    }

    if(arr[i+1]<arr[i]){
        return false;
    }

    return isSorted(arr, n, i+1);
}
int main()
{
    
    vector<int> arr{1,2,3,4,5,6,86};
    int size = arr.size();
    int i = 0;
     bool checksorted = isSorted(arr, size, i);
    if(checksorted){
        cout << "Array is Sorted"<< endl;
    }
    else{
        cout << "Array is not Sorted"<< endl;
    }
    return 0;
}