/**
 * The above code implements the binary search algorithm to find the index of a target element in a sorted array.
 * 
 * @param arr The array to be searched. In this case, it is {0,1,2,3,4,5,6,7,8,9,10}.
 * @param size The size parameter represents the number of elements in the array. In this case, the
 * array has 11 elements.
 * @param target The target is the element that we are searching for in the array. In this case, the
 * target is 8.
 * 
 * @return The binarySearch function returns the index of the target element in the array if it is
 * found, and -1 if the target element is not found.
 */

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size -1;

    int mid = start + (end-start)/2;

    while (start<=end)
    {
        int element = arr[mid];
        if (element == target)
        {
            return mid;
        }
        if (target < element)
        {
            // searching in left
            end = mid - 1;
        }
        else
        {
            // searching in right 
            start = mid + 1;
        }
        
        mid = start + (end - start)/2;
   
    }
 
    // element not found
    return -1;
}

int main()
{
    
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int size = 11;
    int target = 8;

    int indexOfTarget = binarySearch(arr,size,target);

    if (indexOfTarget == -1)
    {
        cout << "Target not found." << endl;
    }
    else
    {
        cout << "Target found at Index " << indexOfTarget << endl;
    }
    
    
    return 0;
}