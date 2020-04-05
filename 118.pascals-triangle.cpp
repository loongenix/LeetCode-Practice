/*
 * [118] Pascal's Triangle
 *
 * https://leetcode-cn.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (55.92%)
 * Total Accepted:    8K
 * Total Submissions: 14.3K
 * Testcase Example:  '5'
 *
 * 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。
 * 
 * 
 * 
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 * 
 * 示例:
 * 
 * 输入: 5
 * 输出:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 * 
 */
#include <vector>
using namespace std;
class Solution
{
  public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res;

        if (numRows <= 0)
        {
            return res;
        }
        vector<int> first;
        first.push_back(1);
        res.push_back(first);
        for (size_t i = 1; i < numRows; i++)
        {
            vector<int> row;
            row.push_back(1);

            for (size_t j = 1; j < i; j++)
            {
                row.push_back(res[i - 1][j - 1] + res[i - 1][j]);
            }

            row.push_back(1);
            res.push_back(row);
        }
        return res;
    }
};
