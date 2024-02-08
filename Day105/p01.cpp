class Solution {
public:
    bool isPrime(int n) {
        if(n<=1){
        return false;
}
int sqrtN = sqrt(n);
        for (int i = 2; i <=sqrtN; i++) {
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