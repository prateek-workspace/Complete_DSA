/* The Solution class in C++ checks if two strings are isomorphic, meaning that each character in the
first string can be replaced by a character in the second string while preserving the order of
characters. */
// leetcode 205
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};  // for mapping of characters of s
        int isMap[256] = {0}; // stores is t[i] is already mapped with s[i]

        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && isMap[t[i]] == 0) {
                // storing value of t[i] i.e. mapping it
                hash[s[i]] = t[i];
                // storing that t[i] is now mapped
                isMap[t[i]] = true;
            }
        }
        // checking values if we are able to make s to t or not
        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] != t[i]) {
                return false;
            }
        }
        return true;
    }
};