/**
 * The above code is an implementation of a binary search algorithm to find the minimum time required
 * to paint all the boards given the number of painters and the time required to paint each board.
 * 
 * @return The minimum time required to paint all the boards.
 */
//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++                                                    

class Solution
{
  public:
  
    bool isPossible(int arr[],int n, int k, long long mid){
        
        int painter = 1;
        long long timeSum = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(timeSum+arr[i]>mid){
                painter++;
                timeSum = arr[i];
                if(painter>k){
                    return false;
                }
            }
            else{
                timeSum += arr[i];
            }
        }
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        long long ans = -1;
        long long start = 0;
        long long end = 0;
        
        
        for(int i=0;i<n;i++){
            end += arr[i];
        }
        
        
        while(start<=end){
            long long mid = (start+end) >> 1;
            if(isPossible(arr,n,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends