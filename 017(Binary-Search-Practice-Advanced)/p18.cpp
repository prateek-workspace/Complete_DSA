/* The Solution class implements a binary search algorithm to find a target element in a rotated and
sorted array. */
// Leetcode - 33
// Search in a rotated and Sorted Aray.
class Solution {
public:
    int findPivot(vector<int> nums)
    {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        while (s<=e)
        {
            // checking if there is only single element in the array 

            if (s==e)
            {
                return s;
            }
            // checking for element not to go out of bound and its position
            if (mid <= e && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            // checking for element not to go out of bound and its position
            if (mid-1 >= s && nums[mid-1]>nums[mid])
            {
                return mid-1;
            }
            // binary search in search space
            if (nums[s]>nums[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e-s)/2;
            
        }
        return -1;
    }

    int binarySearch(vector<int> nums, int s, int e,int target)
    {
        // Applying Binary Search over Search Space.

        int mid = s+(e-s)/2;
        while(s<=e)
        {
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }

    int search(vector<int>& nums, int target)
    {
        int temp = findPivot(nums);
        int ans = 0;

    // Finding Correct Search Space

        if(target<=nums[temp] && target>=nums[0])
        {
            ans = binarySearch(nums,0,temp,target);
        }
        else{
            ans = binarySearch(nums,temp+1,nums.size()-1,target);
        }
        return ans;
    }
};