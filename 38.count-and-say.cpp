/*
 * [38] Count and Say
 *
 * https://leetcode-cn.com/problems/count-and-say/description/
 *
 * algorithms
 * Easy (44.67%)
 * Total Accepted:    10.1K
 * Total Submissions: 22.7K
 * Testcase Example:  '1'
 *
 * 报数序列是指一个整照其中的整数的顺序进数序列，按行报数，得到下一个数。其前五项如下：
 *
 * 1.     1
 * 2.     11
 * 3.     21
 * 4.     1211
 * 5.     111221
 *
 *
 * 1 被读作  "one 1"  ("一个一") , 即 11。
 * 11 被读作 "two 1s" ("两个一"）, 即 21。
 * 21 被读作 "one 2",  "one 1" （"一个二" ,  "一个一") , 即 1211。
 *
 * 给定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。
 *
 * 注意：整数顺序将表示为一个字符串。
 *
 *
 *
 * 示例 1:
 *
 * 输入: 1
 * 输出: "1"
 *
 *
 * 示例 2:
 *
 * 输入: 4
 * 输出: "1211"
 *
 *
 */
#include <string>
using namespace std;
class Solution {
public:
  string countAndSay(int n) {
    string s = "1";
    string st="";
    char countChar;
    for (int i = 1; i < n; i++) {
      char a = s[0];
      int count = 1;

      for (int j = 1; j < s.size(); j++) {
        if (s[j] == a) {
          count++;
        } else {
          countChar = '0' + count;
          st = st+countChar + a;
          a = s[j];
          count = 1;
        }
      }
      countChar = '0' + count;
      s = st+countChar + a;
      st = "";
    }
    return s;
  }
};

