/*
 * [53] Maximum Subarray
 *
 * https://leetcode-cn.com/problems/maximum-subarray/description/
 *
 * algorithms
 * Easy (37.88%)
 * Total Accepted:    16.6K
 * Total Submissions: 43.9K
 * Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
 *
 * 给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
 * 
 * 示例:
 * 
 * 输入: [-2,1,-3,4,-1,2,1,-5,4],
 * 输出: 6
 * 解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
 * 
 * 
 * 进阶:
 * 
 * 如果你已经实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。
 * 
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int preSum = nums[0];
      int maxSum = nums[0];
      for (int i = 1; i < nums.size(); ++i) {
        preSum = (preSum > 0) ? (preSum + nums[i]) : nums[i];
        maxSum = max(maxSum, preSum);
      }
      return maxSum;
    }
};
