/*
 * [6] ZigZag Conversion
 *
 * https://leetcode-cn.com/problems/zigzag-conversion/description/
 *
 * algorithms
 * Medium (35.46%)
 * Total Accepted:    9.2K
 * Total Submissions: 25.8K
 * Testcase Example:  '"PAYPALISHIRING"\n3'
 *
 * 将字符串 "PAYPALISHIRING" 以Z字形排列成给定的行数：
 * 
 * P   A   H   N
 * A P L S I I G
 * Y   I   R
 * 
 * 
 * 之后从左往右，逐行读取字符："PAHNAPLSIIGYIR"
 * 
 * 实现一个将字符串进行指定行数变换的函数:
 * 
 * string convert(string s, int numRows);
 * 
 * 示例 1:
 * 
 * 输入: s = "PAYPALISHIRING", numRows = 3
 * 输出: "PAHNAPLSIIGYIR"
 * 
 * 
 * 示例 2:
 * 
 * 输入: s = "PAYPALISHIRING", numRows = 4
 * 输出: "PINALSIGYAHRPI"
 * 解释:
 * 
 * P     I    N
 * A   L S  I G
 * Y A   H R
 * P     I
 * 
 */
class Solution
{
  public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            return s;
        }

        vector<string> rows(min(numRows, (int)s.size()));
        int curRow = 0;
        bool goingDown = false;
        for (auto &&c : s)
        {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1)
                goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }
        string res;

        for (auto row : rows)
        {
            res += row;
        }

        return res;
    }
};
