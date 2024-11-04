/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */

// @lc code=start
class Solution
{
public:
    int addDigits(int num)
    {
        if (num <= 0)
            return 0;
    
        // 1+(38−1)%9
        // 1+37%9
        // 1+1=2.
        return 1 + (num - 1) % 9;
    }
};
// @lc code=end
