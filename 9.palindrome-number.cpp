/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || (x!=0 && x%10==0))
            return false;

        int half = 0;
        while (x>half) {
            half = x%10 + half*10;
            x /= 10;
        }

        return (half==x) || (x==half/10); 
    }
};
// @lc code=end

