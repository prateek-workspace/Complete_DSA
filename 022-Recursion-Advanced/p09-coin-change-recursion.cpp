/**
 * The given C++ function calculates the minimum number of coins needed to make a target sum using a
 * recursive approach.
 * 
 * @param arr The `arr` vector contains the denominations of coins available for making change. In this
 * case, it contains coins with denominations 1 and 5.
 * @param target The `target` variable in the code represents the amount for which you need to make
 * change using the coins provided in the `arr` vector. In this specific example, the target amount is
 * set to 20. The `coinchange` function recursively calculates the minimum number of coins needed to
 * make the
 * 
 * @return The `coinchange` function is returning the minimum number of coins needed to make up the
 * target value using the coins provided in the `arr` vector.
 */

// Approach : 01:---
// using target to zero approach i.e. reducing target till zero

#include<bits/stdc++.h>
using namespace std;

int coinchange( vector<int> & arr, int target){

    // base case
    if (target == 0){
        return 0;
    }

    if(target<0){
        return INT_MAX;
    }

    // solving 1 case baki recursion sambhal lega
    int mini  = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = coinchange(arr, target - arr[i]);
        if(ans!=INT_MAX){
            mini = min(mini, ans + 1); 
        } 
    }
    
    return mini;

}

int main()
{
    
    vector<int> arr{1,5};
    int target = 20;
    
    int ans = coinchange(arr, target);

    cout << "Answer is : " << ans << endl;
    
    return 0;
}