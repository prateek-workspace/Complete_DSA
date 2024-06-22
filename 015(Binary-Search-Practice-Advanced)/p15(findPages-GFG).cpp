/**
 * The above code is an implementation of the binary search algorithm to find the minimum number of
 * pages that can be allocated to each student such that each student gets consecutive pages and the
 * maximum number of pages allocated to any student is minimized.
 * 
 * @return The function `findPages` returns the minimum number of pages that each student should read
 * in order to distribute the books in a fair manner. If it is not possible to distribute the books in
 * a fair manner, the function returns -1.
 */
//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isSolution(int A[], int N, int M, int mid){
        int student = 1;
        int totalPages = 0;
        
        for(int i=0;i<N;i++){
            if(A[i]>mid){
                return false;
            }
            if(totalPages+A[i]>mid){
                student++;
                totalPages=A[i];
                if(student>M){
                    return false;
                }
            }
            else{
                totalPages=totalPages+A[i];
            }
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N){
            return -1;
        }
        
        int ans = -1;
        int start = 0;
        int end = accumulate(A,A+N,0);
        
        
        while(start<=end){
            int mid = (start+end) >> 1;
            if(isSolution(A,N,M,mid)){
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

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends