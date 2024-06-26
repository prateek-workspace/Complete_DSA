// Normal Approach
// O(n)

class Solution {
public:
    bool isPrime(int n) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime(i)) {
                ++count;
            }
        }
        return count;
    }
};

// Square root approach
// T.C.:-- O(sqrt(n))
// Leetcode - 204
/* The Solution class contains two functions, isPrime and countPrimes, which determine if a number is
prime and count the number of prime numbers less than a given number, respectively. */
class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        int sqrtN = sqrt(n);
        for (int i = 2; i <= sqrtN; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime(i)) {
                ++count;
            }
        }
        return count;
    }
};


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