/**
 * The above code implements the binary search algorithm to search for a given key in a sorted array.
 */
//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k)
    {
        // code here
            int start = 0;
            int end = n-1;
        
            int mid = start + end >> 1;
        
            while (start<=end)
            {
                // int element = arr[mid];
                if (arr[mid] == k)
                {
                    return mid;
                }
                if (k < arr[mid])
                {
                    // searching in left
                    end = mid - 1;
                }
                else
                {
                    // searching in right 
                    start = mid + 1;
                }
                
                mid = start + end >> 1;
           
            }
         
            // element not found
            return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends