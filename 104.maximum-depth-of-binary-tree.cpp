/*
 * [104] Maximum Depth of Binary Tree
 *
 * https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/description/
 *
 * algorithms
 * Easy (64.25%)
 * Total Accepted:    13.7K
 * Total Submissions: 21.3K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，找出其最大深度。
 *
 * 二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
 *
 * 说明: 叶子节点是指没有子节点的节点。
 *
 * 示例：
 * 给定二叉树 [3,9,20,null,null,15,7]，
 *
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 *
 * 返回它的最大深度 3 。
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
  int maxDepth(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }

     return max(maxDepth(root->left), maxDepth(root->right))+1;
    // queue<TreeNode *> q;
    // int res = 0;
    // q.push(root);
    // while (!q.empty()) {

    //   res++;
    //   for (int i = 0, n = q.size(); i < n; i++) {
    //     TreeNode *p = q.front();
    //     q.pop();
    //     if (p->left != nullptr) {
    //       q.push(p->left);
    //     }
    //     if (p->right != nullptr) {
    //       q.push(p->right);
    //     }
    //   }
    // }
    // return res;
  }
};

