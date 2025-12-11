/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        int i = 0;
        stack<char> stack; 
        if (s.length()<2) return false;
        for (int i=0; i<s.length(); i++) {
            if (map.find(s[i])!=map.end()) {
                stack.push(map[s[i]]);
            }
            else {
                if (stack.empty() || stack.top() != s[i]) return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};
// @lc code=end

