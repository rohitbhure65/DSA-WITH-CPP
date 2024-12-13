/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result; // 
    int numsSize = nums.size();

    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            for (int k = j + 1; k < numsSize; ++k) {
                if (nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k] && nums[i] + nums[j] + nums[k] == 0) {
                    result.push_back({nums[i], nums[j], nums[k]});
                }
            }
        }
    }

    return result;
    }
};
// @lc code=end
