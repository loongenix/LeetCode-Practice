/*
 * [69] Sqrt(x)
 *
 * https://leetcode-cn.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (31.04%)
 * Total Accepted:    9.2K
 * Total Submissions: 29.5K
 * Testcase Example:  '4'
 *
 * 实现 int sqrt(int x) 函数。
 *
 * 计算并返回 x 的平方根，其中 x 是非负整数。
 *
 * 由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
 *
 * 示例 1:
 *
 * 输入: 4
 * 输出: 2
 *
 *
 * 示例 2:
 *
 * 输入: 8
 * 输出: 2
 * 说明: 8 的平方根是 2.82842...,
 * 由于返回类型是整数，小数部分将被舍去。
 *
 *
 */
#include <iostream>
class Solution
{
public:
  int mySqrt(int x)
  {
    if (x <= 1)
    {
      return x;
    }
    int left = 0;

    int right = x;

    while (left < right - 1)
    {
      int middle = (left + right) / 2;

      int temp = x / middle;
      if (temp == middle)
      {
        return middle;
      }
      else if (temp < middle)
      {
        right = middle;
      }
      else if (temp > middle)
      {
        left = middle;
      }
    }
    return right - 1;
  }
};

