/* The Solution class contains a function findPages that calculates the minimum number of pages needed
to distribute among M students, given an array A of N elements representing the number of pages in
each book. */
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
            int mid = (start+end)>>1;
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