/**
 * This C++ program takes an array of integers as input and sorts it in ascending order, with all the
 * 0s appearing before the 1s and all the 1s appearing before the 2s.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;

    vector<int> arr(n);

    // taking elements as input 

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value (only 0,1 & 2) for  " << i << " index" << endl;
        cin >> arr[i];
    }

    // printing the array 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    
    int newstart;
    int start = 0;
    int end = arr.size() - 1;

    // sorting 0 and 1

    for (int i = 0; start<=end; i++)
    {
        if ( arr[start] == 0 )
        {
            start++;
            newstart = start;
        }
        else
        {
            swap(arr[start], arr[end]);
            end--;
        }
        
    }

    // sorting 1 and 2

    int newend = arr.size() - 1;

    for (int i = 0; newstart<=newend; i++)
    {
        if ( arr[newstart] == 1 )
        {
            newstart++;       
        }
        else
        {
            swap(arr[newstart], arr[newend]);
            newend--;
        }
        
    }

    cout << endl;
    // printing the sorted array 

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    
    
    return 0;
}