/*
 * [14] Longest Common Prefix
 *
 * https://leetcode-cn.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (28.86%)
 * Total Accepted:    20K
 * Total Submissions: 69.4K
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * 编写一个函数来查找字符串数组中的最长公共前缀。
 *
 * 如果不存在公共前缀，返回空字符串 ""。
 *
 * 示例 1:
 *
 * 输入: ["flower","flow","flight"]
 * 输出: "fl"
 *
 *
 * 示例 2:
 *
 * 输入: ["dog","racecar","car"]
 * 输出: ""
 * 解释: 输入不存在公共前缀。
 *
 *
 * 说明:
 *
 * 所有输入只包含小写字母 a-z 。
 *
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0) {
      return "";
    }

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
      while (strs[i].find(prefix) != 0) {
        prefix = prefix.substr(0, prefix.length() - 1);

        if (prefix.length() <= 0) {
          return "";
        }
      }
    }
    return prefix;
  }
};
