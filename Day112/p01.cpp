/* The class `Solution` contains a recursive function `climb` to calculate the number of ways to climb
`n` stairs and a function `climbStairs` that calls `climb` and returns the result. */
class Solution {
public:
    int climb(int n) {
        if (n == 0 || n == 1)
            return 1;
        int count = climb(n - 1) + climb(n - 2);
        return count;
    }
    int climbStairs(int n) {
        int ans = climb(n);
        return ans;
    }
};