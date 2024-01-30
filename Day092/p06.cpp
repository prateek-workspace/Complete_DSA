/**
 * The function `compareFive` takes an integer `n` as input and returns "Greater than 5" if `n` is
 * greater than 5, "Less than 5" if `n` is less than 5, and "Equal to 5" if `n` is equal to 5.
 * 
 * @return The function `compareFive` returns a string.
 */
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string compareFive(int n){
        // code here 
        if(n>5){
            return "Greater than 5";
        }
        if(n<5){
            return "Less than 5";
        }
    return "Equal to 5";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends