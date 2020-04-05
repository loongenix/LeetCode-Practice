/*
 * [119] Pascal's Triangle II
 *
 * https://leetcode-cn.com/problems/pascals-triangle-ii/description/
 *
 * algorithms

 * Easy (50.46%)
 * Total Accepted:    4.6K
 * Total Submissions: 9.1K
 * Testcase Example:  '3'
 *
 * 给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。
 *
 *
 *
 * 在杨辉三角中，每个数是它左上方和右上方的数的和。
 *
 * 示例:
 *
 * 输入: 3
 * 输出: [1,3,3,1]
 *
 *
 * 进阶：
 *
 * 你可以优化你的算法到 O(k) 空间复杂度吗？
 *
 */
#include <vector>
using namespace std;
class Solution
{
  public:
    vector<int> getRow(int rowIndex)
    {


        vector<int> res, temp;

        res.push_back(1);
        if (rowIndex == 0)
        {
            return res;
        }
        temp = res;
        for (int i = 1; i <= rowIndex; i++)
        {

            for (int j = 1; j < i; j++)
            {
                res[j] = temp[j - 1] + temp[j];
            }
            res.push_back(1);
            temp = res;
        }

        return res;
    }
};
