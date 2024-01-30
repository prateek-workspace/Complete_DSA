/* The Solution class provides a method to find the largest number that can be formed by concatenating
the elements of a given vector of integers. */
// leetcode 179 
class Solution {
public:
    static bool mycomp(string a, string b) {
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        for (auto n : nums) {
            snums.push_back(to_string(n));
        }
        sort(snums.begin(), snums.end(), mycomp);
        if (snums[0] == "0")
            return "0";
        string ans = "";
        for (auto str : snums) {
            ans += str;
        }
        return ans;
    }
};