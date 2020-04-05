/*
 * [107] Binary Tree Level Order Traversal II
 *
 * https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (52.70%)
 * Total Accepted:    4.2K
 * Total Submissions: 8K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，返回其节点值自底向上的层次遍历。 （即按从叶子节点所在层到根节点所在的层，逐层从左向右遍历）
 * 
 * 例如：
 * 给定二叉树 [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 返回其自底向上的层次遍历为：
 * 
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
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
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
      queue<TreeNode *> q;
      vector<vector<int>> res;
      stack<vector<int>> stk;
      if (!root) {
        return res;
      }
      q.push(root);

      while (q.size() > 0) {

        vector<int> v;
        int s = q.size();
        for (int i = 0; i < s; i++) {
          TreeNode *n = q.front();
          if (n->left) {
            q.push(n->left);
          }
          if (n->right) {
            q.push(n->right);
          }
          q.pop();
          v.push_back(n->val);
        }
        stk.push(v);
      }
      int s = stk.size();

      for (int i = 0; i < s; i++) {
        res.push_back(stk.top());
        stk.pop();
      }
      return res;
    }
};
