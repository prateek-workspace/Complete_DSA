/**
 * The given code is an implementation of a binary search algorithm to solve the Aggressive Cows
 * problem.
 * 
 * @return The code is returning the maximum possible minimum distance between two cows.
 */
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool isPoosible(vector<int> &stalls,int k,int mid){
        // declaring cows
        int cowsNo = 1;
        // positioning first cow at 0 position
        int pos = stalls[0];
        
        for(int i=1;i<stalls.size();i++){
            // checking if minimum distance between stalls is >= mid or not.
            if(stalls[i]-pos>=mid){
                // if yes then place the next cow at this index 
                pos=stalls[i];
                // now incrementing the cows number
                cowsNo++;
            }
            if(cowsNo==k){
                // checking if all cows are placed 
               return true; 
            } 
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
        
        // sorting the stalls position as we are representing the stalls on number line so stalls should be sorted
        
        sort(stalls.begin(),stalls.end());
        
        int ans = -1;
        int start = 0;
        
        // finding search space as the max distance between two cows can be : 
        // placing cow 1 at starting and the other one can be placed at max distance equals to lastposvalue - firstposvalue
        
        int end = stalls[stalls.size()-1] - stalls[0];
        
        while(start<=end){
            int mid = start+end>> 1;
            if(isPoosible(stalls,k,mid)){
                // cows can be placed so store it as ans
                ans = mid;
                // looking to maximise the minimum distance for stalls placement
                start = mid + 1;
            }
            else{
                // since cows cannot be placed so reducing the distance between stalls
                end = mid - 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends