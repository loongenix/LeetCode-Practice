/*
 * [168] Excel Sheet Column Title
 *
 * https://leetcode-cn.com/problems/excel-sheet-column-title/description/
 *
 * algorithms
 * Easy (27.55%)
 * Total Accepted:    2.8K
 * Total Submissions: 10K
 * Testcase Example:  '1'
 *
 * 给定一个正整数，返回它在 Excel 表中相对应的列名称。
 * 
 * 例如，
 * 
 * ⁠   1 -> A
 * ⁠   2 -> B
 * ⁠   3 -> C
 * ⁠   ...
 * ⁠   26 -> Z
 * ⁠   27 -> AA
 * ⁠   28 -> AB 
 * ⁠   ...
 * 
 * 
 * 示例 1:
 * 
 * 输入: 1
 * 输出: "A"
 * 
 * 
 * 示例 2:
 * 
 * 输入: 28
 * 输出: "AB"
 * 
 * 
 * 示例 3:
 * 
 * 输入: 701
 * 输出: "ZY"
 * 
 * 
 */
class Solution
{
  public:
    string convertToTitle(int n)
    {
        string res;
        while (n != 0)
        {
            char temp;
            int residue = n % 26;
            if (residue != 0)
            {
                temp = 'A' + residue - 1;
            }
            else
            {
                temp = 'Z';
                n--;
            }
            res = temp + res;
            n /= 26;
        }
        return res;
    }
};
