/* The Solution class in C++ checks if a given integer is a palindrome. */
class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> v;
        if(x<0){
            return false;
        }
        while(x!=0){
            int digit = x%10;
            v.push_back(digit);
            x = x/10;
        }
        int i = 0;
        int j = v.size()-1;
        while(i<=j){
            if(v[i]!=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};