/**
 * The above code is a C++ implementation of a function that counts the number of palindromic
 * substrings in a given string.
 * 
 * @param current The current string being checked for palindrome.
 * 
 * @return The code returns the number of palindromic substrings in a given string.
 */

// Mine --> Brute Force Way.

// T.C.--> O(n3)
// S.C. --> O(n)

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
  bool isPalindrome(string current){
      int i = 0; 
      int j = current.size();
      while(i<=j){
          if(current[i]!=current[j]){
              return false;
          }
          else{
              i++;
              j--;
          }
      }
      return true;
  }
  int count(vector<string> str){
      int counter = 0;
      for(int i=0; i<str.size();i++){
          string current = str[i];
          if(isPalindrome(current)){
              counter++;
          }
      }
      return counter;
  }
int main() {
    string inp;
    cin >> inp;
    cout << inp << endl;
    vector<string> str;
    int size = inp.size();
    for(int i = 0; i<size;i++)
    { 
       for(int j = 0; j<size;j++)
      {
          string temp = inp.substr(i,j);
          str.push_back(temp);
       }
    }
    cout << count(str) << endl;
    return 0;
}

// Optimised Approach : 

// T.C.--> O(n2)
// S.C. --> O(n)

class Solution {
public:
    int counter(string s, int left, int right) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            // checking for the string not to go out of bound and also
            // palindrome or not.
            if (left >= 0 && right <= s.length() && s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
        }
        return count;
    }
    int countSubstrings(string s) {
        int count = 0;
        int size = s.length();

        for (int i = 0; i < size; i++) {

            // if string is of odd length
            int oddAns = counter(s, i, i);
            count = count + oddAns;

            // if string is of even length
            int evenAns = counter(s, i, i + 1);
            count = count + evenAns;
        }

        return count;
    }
};