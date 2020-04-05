/*
 * [125] Valid Palindrome
 *
 * https://leetcode-cn.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (35.14%)
 * Total Accepted:    12.9K
 * Total Submissions: 36.7K
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * 给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
 *
 * 说明：本题中，我们将空字符串定义为有效的回文串。
 *
 * 示例 1:
 *
 * 输入: "A man, a plan, a canal: Panama"
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: "race a car"
 * 输出: false
 *
 *
 */
#include <cctype>
#include <string>

class Solution
{
public:
  bool isPalindrome(std::string s)
  {
    if (s.size() <= 0)
    {
      return true;
    }
    int begin = 0;
    int end = s.size() - 1;
    while (begin <= end)
    {
      if (!std::isalnum(s[begin]))
      {
        begin++;
        continue;
      }
      if (!std::isalnum(s[end]))
      {
        end--;
        continue;
      }

      if (tolower(s[begin++]) != tolower(s[end--]))
      {
        return false;
      }
    }
    return true;
  }
};

