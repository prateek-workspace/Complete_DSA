/**
 * The above C++ code implements a binary search algorithm to find the last occurrence of a given
 * number in a sorted vector.
 * 
 * @param arr The arr parameter is a vector of integers that represents the array in which we want to
 * find the last occurrence of a given number.
 * @param num The number that you want to search for in the array.
 * 
 * @return The function `lastOccurrence` returns the index of the last occurrence of the given number
 * in the vector `arr`. If the number is not found in the vector, it returns -1.
 */

#include<iostream>
#include<vector>
using namespace std;
int lastOccurrence(vector<int> arr, int num )
{

    int start, end, mid;
    int ans = -1;
    start = 0;
    end = arr.size() - 1;

    mid = start + ((end-start)/2); 

    while (start <= end)
    {
        if (arr[mid] == num)
        {   
            ans = mid;
            start = mid + 1;
        }
        else if (num < arr[mid])
        {
            end = mid - 1;
        }
        else if (num > arr[mid])
        {
            start = mid + 1;
        }  

        mid = start + ((end-start)/2); 

    }
    return ans;
}
int main()
{

    int num, size;    
    vector<int> arr{0,1,3,4,5,6,6,6,7,8,9,9,9,9,9,9,9,11,11};
    size = arr.size();
    cout << "Enter the number that you want to search : " << endl;
    cin >> num;
    int ans = lastOccurrence(arr, num);
    cout << "Index is : " << ans << endl;  

    return 0;
}