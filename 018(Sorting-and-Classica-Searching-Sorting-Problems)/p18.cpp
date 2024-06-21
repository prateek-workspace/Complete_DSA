/**
 * The function `countOfElements` counts the number of elements in an array `arr` that are less than or
 * equal to a given value `x`.
 * 
 * @return The function `countOfElements` returns the count of elements in the array `arr` that are
 * less than or equal to `x`.
 */
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        cin >> x;

        cout << countOfElements(arr, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends


int countOfElements(int arr[], int n, int x) 
{
    int min=0;
    for( int i=0;i<n;i++){
        if(arr[i]<=x){
            min++;
        }
    }
    return min;
}