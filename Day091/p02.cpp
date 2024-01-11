class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        string ans;
        while (true) {
            char temp = 0;
            for (auto str : strs) {
                if (i >= str.size()) {
                    temp = 0;
                    break;
                }
                if (temp == 0) {
                    temp = str[i];
                } else if (str[i] != temp) {
                    temp = 0;
                    break;
                }
            }
            if (temp == 0) {
                break;
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};