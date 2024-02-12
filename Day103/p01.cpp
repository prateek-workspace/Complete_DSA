/* The Solution class provides a method, myPow, which calculates the power of a given number. */
// Leetcode 50
// works fine but can not past only 2 test cases optimisation needed

class Solution {
public:
    double solve(double x, int n) {
        double ans = x;
        for (int i = 1; i < n; i++) {
            ans = ans * x;
        }
        return ans;
    }
    double myPow(double x, int n) {
        if (x == 0) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        if (x == 1) {
            return 1;
        }
        if (x == -1) {
            return -1;
        }
        double ans;
        if (n < 0) {
            ans = solve(x, abs(n));
            ans = (1 / ans);
        } else {
            ans = solve(x, n);
        }
        return ans;
    }
};