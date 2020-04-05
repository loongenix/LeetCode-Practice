/*
 * [110] Balanced Binary Tree
 *
 * https://leetcode-cn.com/problems/balanced-binary-tree/description/
 *
 * algorithms
 * Easy (43.50%)
 * Total Accepted:    4.6K
 * Total Submissions: 10.5K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * 给定一个二叉树，判断它是否是高度平衡的二叉树。
 * 
 * 本题中，一棵高度平衡二叉树定义为：
 * 
 * 
 * 一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过1。
 * 
 * 
 * 示例 1:
 * 
 * 给定二叉树 [3,9,20,null,null,15,7]
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 返回 true 。
 * 
 * 示例 2:
 * 
 * 给定二叉树 [1,2,2,3,3,null,null,4,4]
 * 
 * ⁠      1
 * ⁠     / \
 * ⁠    2   2
 * ⁠   / \
 * ⁠  3   3
 * ⁠ / \
 * ⁠4   4
 * 
 * 
 * 返回 false 。
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
/* class Solution
{
  public:
    bool isBalanced(TreeNode *root)
    {
        if (!root)
        {
            return true;
        }

        bool flag = abs(maxDepth(root->left) - maxDepth(root->right)) <= 1;
        return flag && isBalanced(root->left) && isBalanced(root->right);
    }

  private:
    int maxDepth(TreeNode *root)
    {
        if(!root){
            return 0;
        }

        int left_depth = maxDepth(root->left);
        int right_depth = maxDepth(root->right);

        return max(left_depth, right_depth) + 1;
    }
};
 */

class Solution
{
  public:
    bool isBalanced(TreeNode *root)
    {
        return leveldiff(root) != -1;
    }

  private:
    int leveldiff(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }

        int left = leveldiff(root->left);
        int right = 0;
        if (left != -1)
        {
            right = leveldiff(root->right);
        }

        if (left == -1 || right == -1 || abs(left - right) > 1)
            return -1;

        return max(left, right) + 1;
    }
};
