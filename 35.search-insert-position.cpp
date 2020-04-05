/*
 * [35] Search Insert Position
 *
 * https://leetcode-cn.com/problems/search-insert-position/description/
 *
 * algorithms
 * Easy (39.92%)
 * Total Accepted:    12.5K
 * Total Submissions: 31.3K
 * Testcase Example:  '[1,3,5,6]\n5'
 *
 * 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
 *
 * 你可以假设数组中无重复元素。
 *
 * 示例 1:
 *
 * 输入: [1,3,5,6], 5
 * 输出: 2
 *
 *
 * 示例 2:
 *
 * 输入: [1,3,5,6], 2
 * 输出: 1
 *
 *
 * 示例 3:
 *
 * 输入: [1,3,5,6], 7
 * 输出: 4
 *
 *
 * 示例 4:
 *
 * 输入: [1,3,5,6], 0
 * 输出: 0
 *
 *
 */
#include <vector>
using namespace std;
class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size()-1;

    while (left < right - 1) {
      int middle = (left + right) / 2;
      if (nums[middle] == target) {
        return middle;
      } else if (nums[middle] > target) {
        right = middle;
      } else if (nums[middle < target]) {
        left = middle;
      }
    }
    if (nums[left] == target || nums[left] > target) {
      return left;
    } else if (nums[right] == target) {
      return right;
    } else if (nums[right] < target) {
      return right + 1;
    } else if (nums[left] < target && nums[right] > target) {
      return right;
    }
  }
};
