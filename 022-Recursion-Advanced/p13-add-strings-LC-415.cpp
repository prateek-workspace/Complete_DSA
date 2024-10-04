/* The `Solution` class in C++ contains a method `addStrings` that adds two numbers represented as
strings using a recursive approach. */
class Solution {
public:
/**
 * The function `addRE` recursively adds two numbers represented as strings with specified starting
 * positions and carry value.
 * 
 * @param num1 The `num1` parameter is a reference to a string representing the first number to be
 * added.
 * @param p1 The parameter `p1` represents the current index being processed in the `num1` string
 * during the recursive addition operation.
 * @param num2 The `num2` parameter is a reference to a string representing a number. In the `addRE`
 * function, this parameter is used to store the second number that needs to be added during the
 * recursive addition process.
 * @param p2 The parameter `p2` in the `addRE` function represents the index of the digit being
 * processed in the `num2` string. It is used to keep track of the current position in the `num2`
 * string while recursively adding the numbers.
 * @param carry The `carry` parameter in the `addRE` function represents the carry value that needs to
 * be added when adding two digits from the input strings `num1` and `num2`. It is used to keep track
 * of any carry-over that occurs when adding the current digits at positions `p1
 * @param ans The `ans` parameter in the `addRE` function is a reference to a string where the result
 * of adding two numbers will be stored. The function calculates the sum of two numbers represented by
 * strings `num1` and `num2`, starting from positions `p1` and `p2
 * 
 * @return In the `addRE` function provided, nothing is explicitly being returned. The function is a
 * void function, meaning it does not return any value. Instead, it performs calculations and updates
 * the `ans` string parameter with the result of adding two numbers represented by `num1` and `num2`
 * with a given carry.
 */
    void addRE(string &num1, int p1, string &num2, int p2, int carry, string &ans){
        //  base case
        if( p1< 0 && p2< 0){
            if(carry!=0){
                ans.push_back(carry + '0');
            }
            return;
        }

        // ek case solve krte h

        // extracting digits from strings

        int n1 = ( p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = ( p2 >= 0 ? num2[p2] : '0') - '0';
        int csum = n1 + n2 + carry;

        // finding digits 

        int digit = csum % 10;
        carry = csum / 10;
        ans.push_back(digit + '0');

        // Recursive calls

        addRE(num1, p1 - 1, num2, p2 - 1, carry, ans);

    }
    string addStrings(string num1, string num2) {
        string ans = "";
        addRE(num1, num1.size() - 1, num2, num2.size() - 1,0,ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};