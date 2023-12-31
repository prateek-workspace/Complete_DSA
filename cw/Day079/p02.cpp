/* The Solution class contains a method missingNumber that takes in a vector of integers and returns
the missing number in the sequence. */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        for(i = 0;i<nums.size();i++){
            if(nums[i]!=i){
                break;
            }
        }
        return i;
    }
};