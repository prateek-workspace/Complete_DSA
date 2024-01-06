/**
 * The function `majorityElement` takes an array `a` and its size `size` as input and returns the
 * majority element in the array, i.e., the element that appears more than `size/2` times.
 * 
 * @return The majority element in the array. If there is no majority element, -1 is returned.
 */
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // checking if there is only 1 element in the array.
        if(size==1){
            return a[0];
        }
        // your code here
        // finding the threshold size till which we have to take values
        int temp = size >> 1;
        unordered_map<int,int> hash;
        
        // storing no of occurences
        
        for(int i=0;i<size;i++){
            hash[a[i]]++;
        }
        
        // checking for if number of repetitions > threshold values
        
        for(int i=0;i<size;i++){
            if(hash[a[i]]>temp){
                return a[i];
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends