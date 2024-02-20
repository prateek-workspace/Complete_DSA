/**
 * The given C++ code implements a binary search algorithm to find the index of a target element in a
 * sorted vector.
 * 
 * @param arr The `arr` parameter is a vector of integers that represents the sorted array in which you
 * want to perform the binary search. In this case, the array contains the elements {10, 20, 30, 40,
 * 50, 60, 70, 80, 90
 * @param s The parameter `s` in the `binarySearch` function represents the starting index of the
 * subarray being searched. In the `main` function, it is initialized to 0, indicating the beginning of
 * the array.
 * @param e The parameter `e` in the `binarySearch` function represents the ending index of the
 * subarray being searched. It is used to determine the range of the array that is currently being
 * considered for the binary search algorithm.
 * @param target The `target` parameter in the binarySearch function represents the element that you
 * are searching for within the given array. In this case, the target value is 60, and the binary
 * search algorithm is used to find the index of this target value within the array `arr`.
 * 
 * @return The binarySearch function is returning the index of the target element in the given vector
 * 'arr'. If the target element is found in the vector, it returns the index of that element. If the
 * target element is not found, it returns -1.
 */

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int& target){

    // base case 

    if(s>e){
        return -1;
    }

    // solving one statement baki recursion khud kr lega

    int mid = (s+e) >> 1;
    if(arr[mid] == target){
        return mid; 
    }

    // recursive call 

    if(arr[mid] < target){
        return binarySearch(arr,mid+1,e,target);
    }
    else if(arr[mid] > target){
        return binarySearch(arr,s,mid-1,target);
    }

}

int main()
{
    
    vector<int> arr{10,20,30,40,50,60,70,80,90,99};
    // int size = arr.size();
    int s = 0;
    int e = arr.size() - 1;
    int target = 60;

    int ans = binarySearch(arr,s,e,target);

    cout << "Answer is at index : " << ans << endl;
    
    return 0;
}