/* The Solution class provides a method find the largest number can be formed by concatenating the elements of a vector of integers.
*/
class Solution{
public:
    /* A comparison function used for sorting the strings. It checks whether the concatenation
    of two strings a and b is greater than the concatenation of b and a. If true, then a is
    placed before b in the sorted sequence.
    */
    static bool mycomp(string a, string b){
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;
    }

    /* The function takes a vector of integers as input and returns the largest number that can be
    formed by concatenating the elements of the vector. It first converts each integer in the
    vector to a string and stores it in a vector of strings. Then, it sorts the vector of strings
    using the comparison function mycomp(). If the first string in the sorted vector is "0", then
    the largest number is "0". Otherwise, it concatenates all the strings in the sorted vector to
    form the largest number.
    */
    string largestNumber(vector<int>& nums){
        vector<string> snums; // vector of strings to store the string representation of integers
        for (auto n : nums){ // convert each integer in the vector to a string
            snums.push_back(to_string(n));
        }

        // sort the vector of strings using the comparison function mycomp()
        sort(snums.begin(), snums.end(), mycomp);

        if (snums[0] == "0") // if the largest number is "0", return "0"
            return "0";

        string ans = ""; // string to store the largest number
        for (auto str : snums) // concatenate all the strings in the sorted vector
            ans += str;

        return ans; // return the largest number
    }
};