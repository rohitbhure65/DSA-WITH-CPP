/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int expected = n * (n + 1) / 2;
        int actual = 0;

        for (auto num : nums)
        {
            actual += num;
        }
        return expected - actual;
    }
};
// @lc code=end
