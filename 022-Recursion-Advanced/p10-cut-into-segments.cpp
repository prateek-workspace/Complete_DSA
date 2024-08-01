/**
 * The function `cutintosegments` recursively calculates the maximum number of segments that can be cut
 * from a given length using elements from a vector.
 * 
 * @param arr The `arr` vector contains the lengths of segments that can be cut. In this case, the
 * vector `arr` is {2, 5, 5}, which means there are three segments with lengths 2, 5, and 5
 * respectively that can be cut.
 * @param length The `length` parameter in this code represents the remaining length that needs to be
 * cut into segments. The goal is to find the maximum number of segments that can be cut from the given
 * array `arr` such that their total length equals the specified `length`. The function
 * `cutintosegments`
 * 
 * @return The function `cutintosegments` is returning the minimum number of segments that can be cut
 * from the given array `arr` such that their total length equals the input `length`.
 */
// Approach : 01:---
// using length to zero length approach i.e. reducing length till zero

#include<bits/stdc++.h>
using namespace std;

int cutintosegments(vector<int> & arr, int length){

    // base case
    if (length == 0){
        return 0;
    }

    if(length<0){
        return INT_MIN;
    }

    // solving 1 case baki recursion sambhal lega
    int mini  = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = cutintosegments(arr, length - arr[i]);
        if(ans!=INT_MIN){
            mini = max(mini, ans + 1); 
        } 
    }
    
    return mini;

}

int main()
{
    
    vector<int> arr{2,5,5};
    int length = 7;
    
    int ans = cutintosegments(arr, length);

    cout << "Answer is : " << ans << endl;
    
    return 0;
}