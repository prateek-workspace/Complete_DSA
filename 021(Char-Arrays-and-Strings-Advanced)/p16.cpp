/**
 * The given code checks whether a given string is a palindrome or not.
 * 
 * @return The function isPalindrome is returning an integer value. It returns 1 if the given string is
 * a palindrome, and 0 otherwise.
 */
//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int s =0;
	    int e =S.size()-1;
        while(s<=e){
            if(S[s]!=S[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends