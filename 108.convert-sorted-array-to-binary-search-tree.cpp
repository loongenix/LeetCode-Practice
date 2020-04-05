/*
 * [108] Convert Sorted Array to Binary Search Tree
 *
 * https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/description/
 *
 * algorithms
 * Easy (57.23%)
 * Total Accepted:    6.5K
 * Total Submissions: 11.3K
 * Testcase Example:  '[-10,-3,0,5,9]'
 *
 * 将一个按照升序排列的有序数组，转换为一棵高度平衡二叉搜索树。
 *
 * 本题中，一个高度平衡二叉树是指一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过
 * 1。
 *
 * 示例:
 *
 * 给定有序数组: [-10,-3,0,5,9],
 *
 * 一个可能的答案是：[0,-3,9,-10,null,5]，它可以表示下面这个高度平衡二叉搜索树：
 *
 * ⁠     0
 * ⁠    / \
 * ⁠  -3   9
 * ⁠  /   /
 * ⁠-10  5
 *
 *
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// #include<vector>
// using namespace std;
// struct TreeNode {
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
class Solution {
public:
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    if (nums.size() <= 0) {
      return nullptr;
    }
    return Helper(nums, 0, nums.size() - 1);
  }

  TreeNode *Helper(vector<int> &nums, int begin, int end) {

    if (begin == end) {
      return new TreeNode(nums[begin]);
    } else if (begin == end - 1) {
      TreeNode *root = new TreeNode(nums[begin]);
      TreeNode *right = new TreeNode(nums[end]);
      root->right = right;
      return root;
    }
    int middle = (begin + end) / 2;
    TreeNode *root = new TreeNode(nums[middle]);
    root->left = Helper(nums, begin, middle - 1);
    root->right = Helper(nums, middle + 1, end);
    return root;
  }
};

// int main(int argc, char const *argv[])
// {
//   Solution s;
//   vector v = {1, 2, 3, 4, 5, 6, 7, 8};
//   s.sortedArrayToBST(v);
//   return 0;
// }
