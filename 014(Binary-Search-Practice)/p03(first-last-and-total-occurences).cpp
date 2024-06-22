/**
 * The above code is a C++ program that finds the first and last occurrence of a given number in a
 * sorted array and calculates the total number of occurrences.
 * 
 * @param arr The arr parameter is a vector of integers that represents the array in which we want to
 * search for the number.
 * @param num The number that you want to search for in the array.
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
    vector<int> arr{0,1,3,4,5,6,6,6,7,8,9,9,9,9,9,9,9};
    size = arr.size();
    cout << "Enter the number that you want to search : " << endl;
    cin >> num;
    int ans = firstOccurrence(arr, num);
    int ans2 = lastOccurrence(arr, num);

    int total = ans2 - ans + 1;

    cout << "Total Occurences are : " << total << endl;

    return 0;
}