/* The class Solution contains a function reverseOnlyLetters that takes a string as input and returns
the string with only the letters reversed. */
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size();
        while(i<=j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!isalpha(s[i])){
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};