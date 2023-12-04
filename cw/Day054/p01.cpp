// search in a nearly sorted array.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> arr{10,3,40,20,50,80,70};
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    int target = 40;

    while (start<=end)
    {
        if(arr[mid] == target)
        {
            cout << mid << endl;
        }
        if(arr[mid-1] == target)
        {
            cout << mid-1 << endl;
        }
        if(arr[mid+1]== target)
        {
            cout << mid+1 << endl;
        }
        if(arr[mid]>target)
        {
            end = mid-2;
        }
        if(arr[mid]<target)
        {
            start = mid + 2;
        }
        mid = start + (end - start)/2;
    }
    
    
    return 0;
}