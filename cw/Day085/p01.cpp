/**
 * The function `singleElement` takes an array `arr` and its size `N` as input, and returns the element
 * that occurs only once in the array.
 * 
 * @return The function `singleElement` returns an integer, which is the single element in the array
 * that occurs only once.
 */
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
    unordered_map<int,int> hash;
    int num;
    
    for (int i = 0; i < N; i++)
    {
        hash[arr[i]]++;
    }
    
    for (int i = 0; i < N; i++)
    {
        if (hash[arr[i]]!=3)
        {
            num = arr[i];
            break;
        }
        
    }
    
    return num;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends