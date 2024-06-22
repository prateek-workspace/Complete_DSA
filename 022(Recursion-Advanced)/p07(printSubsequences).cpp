/**
 * The given C++ function recursively prints all subsequences of a given string.
 * 
 * @param str The `str` parameter in the code represents the input string for which you want to find
 * all possible subsequences. In this case, the input string is "abcpqr".
 * @param output The `output` parameter in the `printSubsequences` function is used to store the
 * current subsequence being generated. It starts as an empty string and gets updated as characters are
 * included or excluded from the original string `str`.
 * @param i The parameter `i` in the `printSubsequences` function represents the current index in the
 * input string `str`. It is used to keep track of the position of the character being considered for
 * inclusion or exclusion in the subsequences being generated.
 * 
 * @return The `printSubsequences` function is not returning any value. It is a void function that
 * recursively prints all subsequences of the input string `str`.
 */

#include<bits/stdc++.h>
using namespace std;
void printSubsequences(string str, string output, int i){
    // base case
    if(i>=str.length()){
        cout << output << endl;
        return;
    }
    // exclude case, str remains same, out remains same but i changes 
    printSubsequences(str,output,i+1);
    // include case, str remains same,in output add current character but i changes
    output += str[i];
    // output.push_back(str[i]);
    printSubsequences(str,output,i+1);
}
int main()
{
    
    string str = "abcpqr";
    string output = "";
    int i = 0;
    printSubsequences(str,output,i);
    
    return 0;
}