/* The Solution class contains a function that returns a vector of integers from an array that have the
same value as their corresponding index. */
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> brr;
	    for(int i=0;i<n;i++){
	        int index = i+1;
	        if(arr[i]==index){
	           brr.push_back(index); 
	        }
	    }
	    return brr;
	}
};