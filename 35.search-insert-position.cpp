/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 *
 * https://leetcode.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (50.07%)
 * Likes:    18220
 * Dislikes: 868
 * Total Accepted:    4.3M
 * Total Submissions: 8.6M
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * Given a sorted array of distinct integers and a target value, return the
 * index if the target is found. If not, return the index where it would be if
 * it were inserted in order.
 * 
 * You must write an algorithm with O(log n) runtime complexity.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [1,3,5,6], target = 5
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [1,3,5,6], target = 2
 * Output: 1
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: nums = [1,3,5,6], target = 7
 * Output: 4
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= nums.length <= 10^4
 * -10^4 <= nums[i] <= 10^4
 * nums contains distinct values sorted in ascending order.
 * -10^4 <= target <= 10^4
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int index = (end+start)/2;
        while (start <= end && nums[index] != target) {
            if (nums[index] < target) start = index+1;
            else end = index-1;
            index = (end+start)/2;
        } 
        if (nums[index] != target) {
            if (index == 0) {
                if (nums[index] < target) return index+1;
                return index;
            } else {
                index = index + (nums[index] < target ? 1 : -1);
            }
        }
        return index;
    }
};
// @lc code=end

