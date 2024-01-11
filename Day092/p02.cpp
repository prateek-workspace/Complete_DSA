/* The Solution class contains a method isIsomorphic that checks if two strings are isomorphic. */
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256] = {0};
        bool isMap[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            if (hash[s[i]] == 0 && isMap[t[i]] == 0) {
                hash[s[i]] = t[i];
                isMap[t[i]] = true;
            }
        }

        for (int i = 0; i < s.size(); i++) {
            if (char(hash[s[i]]) != t[i]) {
                return false;
            }
        }
        return true;
    }
};