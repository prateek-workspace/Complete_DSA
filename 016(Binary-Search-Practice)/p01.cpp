/**
 * The above code is a C++ program that finds the first occurrence of a given number in a sorted array
 * using binary search.
 * 
 * @param arr The arr parameter is a vector of integers that represents the array in which we want to
 * find the first occurrence of a number.
 * @param num The number that you want to search for in the vector.
 * 
 * @return The function `firstOccurrence` returns the index of the first occurrence of the given number
 * in the vector `arr`. If the number is not found, it returns -1.
 */

#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int> arr, int num )
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
            end = mid -1;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else if (arr[mid] < num)
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
    vector<int> arr{0,1,3,4,5,6,6,6,7,8,9,9,9,9,9,9,9};
    size = arr.size();
    cout << "Enter the number that you want to search : " << endl;
    cin >> num;
    int ans = firstOccurrence(arr, num);
    cout << "Index is : " << ans << endl;  

    return 0;
}