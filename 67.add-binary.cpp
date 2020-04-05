/*
 * [67] Add Binary
 *
 * https://leetcode-cn.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (42.47%)
 * Total Accepted:    6.6K
 * Total Submissions: 15.5K
 * Testcase Example:  '"11"\n"1"'
 *
 * 给定两个二进制字符串，返回他们的和（用二进制表示）。
 *
 * 输入为非空字符串且只包含数字 1 和 0。
 *
 * 示例 1:
 *
 * 输入: a = "11", b = "1"
 * 输出: "100"
 *
 * 示例 2:
 *
 * 输入: a = "1010", b = "1011"
 * 输出: "10101"
 *
 */
class Solution {
public:
  string addBinary(string a, string b) {
    int i = a.size() - 1;
    int j = b.size() - 1;
    string result = "";
    int temp = 0;
    while (i >= 0 || j >= 0) {
      int ai = i >= 0 ? a[i] - '0' : 0;
      int bj = j >= 0 ? b[j] - '0' : 0;

      int t = ai + bj + temp;
      if (t == 0) {
        temp = 0;
        result = "0" + result;
      } else if (t == 1) {
        temp = 0;
        result = "1" + result;
      } else if (t == 2) {
        temp = 1;
        result = "0" + result;
      } else if (t == 3) {
        temp = 1;
        result = "1" + result;
      }
      i--;
      j--;
    }
    if(temp==1){
      result = "1" + result;
    }
    return result;
  }
};

