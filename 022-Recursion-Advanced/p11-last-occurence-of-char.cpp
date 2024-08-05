// Time complexity : --->  O(n)
// Space complexity : ---> O(n)

#include<bits/stdc++.h>

using namespace std;

/**
 * The function ltor recursively searches for a character in a string from left to right and updates
 * the index where the character is found.
 * 
 * @param arr The `arr` parameter is a reference to a string that contains the characters you want to
 * search through.
 * @param ch The parameter `ch` in the `ltor` function is a reference to a character variable. It is
 * used to store the character that you are searching for within the string `arr`.
 * @param ans The `ans` parameter in the given function is used to store the index of the character
 * `ch` in the string `arr`.
 * @param i The parameter `i` in the function `ltor` is an integer representing the current index being
 * processed in the string `arr`. It is used to keep track of the position within the string during the
 * recursive function calls.
 * 
 * @return In the provided code snippet, the function `ltor` is a recursive function that searches for
 * the index of a specific character `ch` in a given string `arr` from left to right. If the character
 * is found, the index is stored in the variable `ans`. The function continues to search recursively
 * until it reaches the end of the string.
 */

void ltor(string& arr, char& ch, int& ans, int i){

    // base case

    if(i>=arr.size()){
        return;
    }

    // solving 1st case :
    
    if(arr[i]==ch){
        ans = i;
    }
    ltor(arr,ch,ans,i+1);

}

/**
 * This function takes a string, a character, an integer, and an index as input parameters.
 * 
 * @param arr The `arr` parameter is a reference to a string. It likely represents an array or sequence
 * of characters that the function `rtol` will operate on.
 * @param ch The parameter `ch` is a reference to a character variable.
 * @param ans2 The `ans2` parameter is an integer reference variable that is being passed to the `rtol`
 * function. It is used to store some value or result calculated within the function and then passed
 * back to the caller through the reference variable.
 * @param last The parameter `last` in the function `rtol` is likely used to indicate the index of the
 * last element in the string `arr`. This parameter helps in determining the range of elements to be
 * processed within the function.
 */

void rtol(string& arr, char&ch, int& ans2, int last){

// base case

if(last<0){
    return;
}

// solving 1st case :---

if(arr[last]==ch){
    ans2 = last;
    return;
}

rtol(arr,ch,ans2,last-1);

}

int main(){

    string arr = "abcddedg";

    int i = 0;
    char ch = 'd';
    int ans = -1;
    // Left to right approach:
    ltor(arr,ch,ans,i); 
    cout <<"Last occuring index by left-->right approach is : " << ans << endl;

    // right to left approach
    int last = arr.size() - 1;
    int ans2 = -1;
    rtol(arr,ch,ans2,last);

    cout <<"Last occuring index by right-->left approach is : " << ans2 << endl;

    return 0;
}