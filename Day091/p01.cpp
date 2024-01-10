/**
 * The above code defines a class Solution with a member function getMaxOccuringChar that takes a
 * string as input and returns the character that occurs the maximum number of times in the string.
 */
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        char ch;
        unordered_map <char,int> hash;
        for(int i=0;i<str.size();i++){
            hash[str[i]]++;
        }
        int max = INT_MIN;
        for(int i=0;i<str.size();i++){
            if(hash[str[i]]>max){
                max = hash[str[i]];
                ch = str[i];
            }
        }
        return ch;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends