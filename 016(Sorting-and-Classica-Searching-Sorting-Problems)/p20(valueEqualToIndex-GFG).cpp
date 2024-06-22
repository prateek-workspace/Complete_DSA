/**
 * The function `valueEqualToIndex` takes an array of integers and its size as input, and returns a
 * vector containing the elements of the array that are equal to their respective indices.
 * 
 * @return The function `valueEqualToIndex` returns a vector of integers.
 */
//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> brr;
	    for(int i=0;i<n;i++){
	       // int index = i+1;
	        if(arr[i]==i+1){
	           brr.push_back(arr[i]); 
	        }
	    }
	    return brr;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends