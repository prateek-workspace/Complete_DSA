class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        if (size == 1) {
            return nums[0];
        }
        // your code here
        // finding the threshold size till which we have to take values
        int temp = size >> 1;
        unordered_map<int, int> hash;

        // storing no of occurences

        for (int i = 0; i < size; i++) {
            hash[nums[i]]++;
        }

        // checking for if number of repetitions > threshold values

        for (int i = 0; i < size; i++) {
            if (hash[nums[i]] > temp) {
                return nums[i];
            }
        }

        return -1;
    }
};