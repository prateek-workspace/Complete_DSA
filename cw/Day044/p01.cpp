/**
 * The above C++ code rearranges the elements of a vector such that all negative numbers appear before
 * the positive numbers.
 * 
 * @return The main function is returning an integer value of 0.
 */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector<int> arr{1,2,-3,4,-5,6,-8};
    int s,t=0;
    while (t<arr.size())
    {
        if (arr[t]<0)
        {
           swap(arr[s],arr[t]);
           s++,t++; 
        }
        else
        {
            t++;
        }
        
    }
        // printing the array

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    
    return 0;
}

