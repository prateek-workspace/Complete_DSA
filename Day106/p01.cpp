/* The Solution class contains a method countPrimes that returns the number of prime numbers less than
a given number n. */
// Sieve of Eratosthenes
// Leetcode - 204
// T.C. :-- O(n*log(log(n)))
class Solution {
public:
    int countPrimes(int n) {
        if (n == 0)
            return 0;

        vector<bool> prime(n, true);

        prime[0] = prime[1] = false;
        int ans = 0;

        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                ans++;
                int j = 2 * i;
                while (j < n) {
                    prime[j] = false;
                    j = j + i;
                }
            }
        }
        return ans;
    }
};