/*
 * [58] Length of Last Word
 *
 * https://leetcode-cn.com/problems/length-of-last-word/description/
 *
 * algorithms
 * Easy (27.48%)
 * Total Accepted:    7K
 * Total Submissions: 25.6K
 * Testcase Example:  '"Hello World"'
 *
 * 给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
 *
 * 如果不存在最后一个单词，请返回 0 。
 *
 * 说明：一个单词是指由字母组成，但不包含任何空格的字符串。
 *
 * 示例:
 *
 * 输入: "Hello World"
 * 输出: 5
 *
 *
 */
#include <string>
using namespace std;
class Solution {
public:
  int lengthOfLastWord(string s) {
    int result = 0;
    int size = s.size();
    for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] == ' ') {
        size--;
      } else {
        break;
      }
    }

    for (int i = 0; i < size; i++) {
      if (s[i] == ' ') {
        result = 0;
      } else {
        result++;
      }
    }
    return result;
  }
};
