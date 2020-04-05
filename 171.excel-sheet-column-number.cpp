/*
 * [171] Excel Sheet Column Number
 *
 * https://leetcode-cn.com/problems/excel-sheet-column-number/description/
 *
 * algorithms
 * Easy (59.81%)
 * Total Accepted:    5.1K
 * Total Submissions: 8.6K
 * Testcase Example:  '"A"'
 *
 * 给定一个Excel表格中的列名称，返回其相应的列序号。
 * 
 * 例如，
 * 
 * ⁠   A -> 1
 * ⁠   B -> 2
 * ⁠   C -> 3
 * ⁠   ...
 * ⁠   Z -> 26
 * ⁠   AA -> 27
 * ⁠   AB -> 28 
 * ⁠   ...
 * 
 * 
 * 示例 1:
 * 
 * 输入: "A"
 * 输出: 1
 * 
 * 
 * 示例 2:
 * 
 * 输入: "AB"
 * 输出: 28
 * 
 * 
 * 示例 3:
 * 
 * 输入: "ZY"
 * 输出: 701
 * 
 * 致谢：
 * 特别感谢 @ts 添加此问题并创建所有测试用例。
 * 
 */

class Solution
{
  public:
    int titleToNumber(string s)
    {
        int size = s.size();
        int res = 0;
        for (size_t i = 0; i < s.size(); i++)
        {

            res += (s[i] - 'A' + 1) * pow(26,(s.size()-i-1)) ;
        }
        return res;
    }
};

