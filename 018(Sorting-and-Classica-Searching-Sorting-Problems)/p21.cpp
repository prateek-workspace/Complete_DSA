/* The Solution class contains a method called reverse that takes an integer as input and returns the
reverse of that integer. */
// Leetcode - 7

// Tried solving this but this is causing integer overflow


// class Solution {
// public:
//     int reverse(int x) {
//         int ans = 0;
//         while (x != 0) {

//             int digit = x % 10;
//             int pos = x / 10;
//         // integer overflow at this point 
//             ans = ans * 10 + digit;
//             x = x / 10;
//         }

//         if (ans < INT_MIN || ans > INT_MAX) {
//             return 0;
//         }
//         return ans;
//     }
// };

/* The Solution class contains a method called reverse that takes an integer as input and returns the
reverse of that integer. */
// Leetcode - 7

// Most easy way just revrse it 
class Solution {
public:
    int reverse(int x) {
        // store ans in long int it will not cause the integer overflow
        long int ans = 0;
        while (x != 0) {

            int digit = x % 10;
            int pos = x / 10;

            ans = ans * 10 + digit;
            x = x / 10;
        }
    // comparision for checking if the ans is in integer bound or not
        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }
        return ans;
    }
};