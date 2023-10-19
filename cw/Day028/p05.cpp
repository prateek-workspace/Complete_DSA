/**
 * This C++ program takes input of an array, sorts it such that all negative numbers come before
 * positive numbers, and then prints the sorted array.
 * 
 * @return The main function is returning an integer value of 0.
 */
            
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    vector<int> arr(n);

    // taking input of elements 

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for " << i << " index" << endl;
        cin >> arr[i];
    }
    
    // printing the unsorted array 
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "," ;
    }
    cout << endl;

    int start = 0;
    int end = arr.size()-1;
    while (start<=end)
    {
        if (arr[start] < 0)
        {
            start++;
        }
        else
        {
            swap(arr[start],arr[end]);
            end--;
        }
        
    }

    // printing the sorted array 
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "," ;
    }
    cout << endl;
    
    
    return 0;
}