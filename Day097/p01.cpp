/* The Solution class contains a method convert that takes a string and integer as input and returns a modified version of the string on a zigzag.

Time complexity: O(n) where n is the length of the input string
Space complexity: O((n, numRows))
*/
class Solution{
public:
    string convert(string s, int numRows) {
        if (numRows == 1) { // if numRows is 1, return the input string as it is
            return s;
        }

        vector<string> zigzag(numRows); // create a vector of strings with size numRows

        int i = 0; // index to iterate through the input string
        int row = 0; // index to keep track of the current row
        bool direction = 1; // boolean variable to toggle the direction of iteration

        while (true) { // outer loop to iterate through the input string
            if (direction) { // if direction is true, iterate downwards
                while (row < numRows && i < s.size()) { // while row is within bounds and there are still characters left in the input string
                    zigzag[row++].push_back(s[i++]); // add the character at index i to the current row and increment i and row
                }
                row = numRows - 2; // set row to the second last row
            } else { // if direction is false, iterate upwards
                while (row >= 0 && i < s.size()) { // while row is within bounds and there are still characters left in the input string
                    zigzag[row--].push_back(s[i++]); // add the character at index i to the current row and increment i and decrement row
                }
                row = 1; // set row to the first row
            }
            if (i >= s.size()) { // if we have reached the end of the input string, break out of the loop
                break;
            }
        }

        // concatenate the rows of the zigzag vector to form the final string
        string result = "";
        for (int j = 0; j < numRows; j++) {
            result += zigzag[j];
        }

        return result;
    }
};