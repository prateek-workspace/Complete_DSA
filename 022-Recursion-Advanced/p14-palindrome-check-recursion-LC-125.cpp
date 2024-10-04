/* The `Solution` class in C++ contains functions to check if a given string is a palindrome by
recursively comparing characters. */
class Solution {
public:
/**
 * The function `isPal` recursively checks if a given string is a palindrome.
 * 
 * @param str The `str` parameter is a reference to a string that represents the input string for which
 * you want to check if it is a palindrome.
 * @param start The `start` parameter represents the starting index of the substring being checked for
 * palindrome.
 * @param end The `end` parameter represents the index of the last character in the substring that you
 * are checking for palindrome.
 * 
 * @return The function is checking if the substring of the input string `str` from index `start` to
 * index `end` is a palindrome or not. It recursively compares characters at the start and end indices,
 * moving towards the center of the substring. If the characters at the start and end indices do not
 * match, it returns false. If the function reaches a point where `start` is greater than or
 */
    bool isPal(string &str,int start, int end){
        // base case 
        if(start>=end){
            return true;
        }
        // one case solve 
        if(str[start]!=str[end]){
            return false;
        }
        return isPal(str, start + 1,end -1);
    }
/**
 * 
 * @param s The function `isPalindrome` takes a string `s` as input and checks if it is a palindrome.
 * The function first converts the input string to lowercase and removes any non-alphanumeric
 * characters. Then it calls another function `isPal` to check if the modified string is a palindrome.
 * 
 * @return The function `isPalindrome` is returning the result of calling another function `isPal` with
 * the processed string `str` and the indices 0 and `size` as arguments.
 */
    bool isPalindrome(string s) {
        int i=0;
        string str;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        while(i<s.size()){
            char temp = s[i];
            if(isalpha(temp) || isdigit(temp)){
                str.push_back(s[i]);
            }
            i++;
        }
        int size = str.size()-1;
        return isPal(str,0,size);
    }
};