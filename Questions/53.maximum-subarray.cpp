/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxend = nums[0];
        int result = nums[0];
        for(int i  = 1; i < nums.size(); i++){
            maxend = max(maxend+nums[i], nums[i]);
            result = max(maxend, result);
        }
        return result;

    }
};
// @lc code=end

