/*
 * [7] Reverse Integer
 *
 * https://leetcode-cn.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (28.66%)
 * Total Accepted:    35.1K
 * Total Submissions: 122.5K
 * Testcase Example:  '123'
 *
 * 给定一个 32 位有符号整数，将整数中的数字进行反转。
 * 
 * 示例 1:
 * 
 * 输入: 123
 * 输出: 321
 * 
 * 
 * 示例 2:
 * 
 * 输入: -123
 * 输出: -321
 * 
 * 
 * 示例 3:
 * 
 * 输入: 120
 * 输出: 21
 * 
 * 
 * 注意:
 * 
 * 假设我们的环境只能存储 32 位有符号整数，其数值范围是 [−231,  231 − 1]。根据这个假设，如果反转后的整数溢出，则返回 0。
 * 
 */
class Solution {
public:
    int reverse(int x) {
      int max = 2147483647;
      int min = -2147483648;
      int result = 0;
      while (x != 0) {
        int i = x % 10;
        x = x / 10;

        if (result>max/10) return 0;
        if(result<min/10) return 0;

          result = result * 10 + i;
        }
        return result;
    }
};
