/* The Solution class contains a method groupAnagrams that in a vector of and
groups the anagrams together An anagram is a word or phrase formed by rearranging the letters of
a different word or phrase, typically using all the original letters exactly once.

The basic idea of this solution is to use a map to store vectors of strings where the keys are the sorted strings.
For each string in the input vector, we sort its characters and use it as the key to look up or create a vector
in the map. We then add the original string to this vector. Finally, we copy the vectors from the map to the
output vector.

Time complexity: O(n * k log k), where n is the number of strings and k is the average length of the strings.
Space complexity: O(n * k), for the map and the output vector.
*/
class Solution{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Use a map to store vectors of strings where the keys are the sorted strings.
        map<string, vector<string>> mp;

        // Iterate through each string in the input vector.
        for (auto str : strs) {
            // Sort the characters of the string and use it as the key to look up or create a vector.
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }

        // Copy the vectors from the map to the output vector.
        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};