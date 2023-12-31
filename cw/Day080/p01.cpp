/* The Solution class contains a method that sorts an array of integers by separating even and odd
numbers. */
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> brr;

    // pushing even

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]%2 == 0)
        {
            brr.push_back(nums[i]);
        } 
    }

    // pushing odd

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]%2 != 0)
        {
            brr.push_back(nums[i]);
        } 
    }
    return brr;
    }
};