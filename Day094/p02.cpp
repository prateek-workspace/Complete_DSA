/* The Solution class provides a method intToRoman that converts an integer into its corresponding
Roman numeral representation. */
class Solution {
public:
    string intToRoman(int num) {
        // mapping our own roman numerals that can tackle each case.
        string romanSymbols[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                                 "XL", "X",  "IX", "V",  "IV", "I"};
        // mapping the values of corresponding roman numeral.
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        // string for storing ans.
        string ans = "";
        // looping starts
        for (int i = 0; i < 13; i++) {
            // looping while our given num is greater than or equals to
            // corresponding value of roman numeral.
            while (num >= values[i]) {
                // storing ans as we are looping from larger to smaller so
                // firstly storing thousands then hundreds then tens and so on.
                ans = ans + romanSymbols[i];
                // now reducing our num by substracting the corresponding value
                // of roman numeral to get remaining part.
                num = num - values[i];
            }
        }
        // returning the ans.
        return ans;
    }
};