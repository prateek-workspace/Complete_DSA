/* The Solution class contains a method called myAtoi that converts a string to an integer. */

// Leetcode --> 8

class Solution {
public:
    int myAtoi(string s) {
        int num = 0;
        int i = 0;
        int sign = 1;

        while(s[i]==' '){
            i++;
        }

        if(i<s.size() && (s[i] == '-' || s[i] == '+')){
            sign = s[i] == '+' ? 1 :-1;
            ++i;
        }

        while(i<s.size() && isdigit(s[i])){
            if((num>INT_MAX/10) || (num == INT_MAX/10 && s[i]>'7')){
                if(sign==1){
                    return INT_MAX;
                }
                if(sign==-1){
                    return INT_MIN;
                }
            }          
            num = num * 10 + (s[i] - '0');
            ++i;
        }
        return num*sign;
    }
};