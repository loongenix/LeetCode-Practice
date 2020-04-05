/*
 * [4] Median of Two Sorted Arrays
 *
 * https://leetcode-cn.com/problems/median-of-two-sorted-arrays/description/
 *
 * algorithms
 * Hard (30.31%)
 * Total Accepted:    15.3K
 * Total Submissions: 50.3K
 * Testcase Example:  '[1,3]\n[2]'
 *
 * 给定两个大小为 m 和 n 的有序数组 nums1 和 nums2 。
 *
 * 请找出这两个有序数组的中位数。要求算法的时间复杂度为 O(log (m+n)) 。
 *
 * 你可以假设 nums1 和 nums2 不同时为空。
 *
 * 示例 1:
 *
 * nums1 = [1, 3]
 * nums2 = [2]
 *
 * 中位数是 2.0
 *
 *
 * 示例 2:
 *
 * nums1 = [1, 2]
 * nums2 = [3, 4]
 *
 * 中位数是 (2 + 3)/2 = 2.5
 *
 *
 */
class Solution {
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    vector<int> temp;
    int i = 0, j = 0;

    while (i < nums1.size() && j < nums2.size()) {
      temp.push_back(nums1[i] < nums2[j] ? nums1[i++] : nums2[j++]);
    }

    while (i < nums1.size()) {

      temp.push_back(nums1[i++]);
    }

    while (j < nums2.size()) {
      temp.push_back(nums2[j++]);
    }

    if (temp.size() % 2 == 1) {
      return temp[temp.size() / 2];
    } else {
      int i = temp.size() / 2;
      return (temp[i - 1] + temp[i]) / 2.0;
    }
  }
};
