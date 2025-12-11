/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()<2) 
            return strs[0];

        string answer;
        int j=0;
        int i=0;
        while (strs[i][j] == strs[i+1][j] && strs[i][j] != '\0') {
            if (i+1 == strs.size()-1) {
                answer.push_back(strs[0][j]);
                j++;
                i = 0;
                continue;
            } 
            i++;
        }
        return answer;
    }
};
// @lc code=end

