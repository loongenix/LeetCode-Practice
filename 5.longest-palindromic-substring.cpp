/*
 * [5] Longest Palindromic Substring
 *
 * https://leetcode-cn.com/problems/longest-palindromic-substring/description/
 *
 * algorithms
 * Medium (22.47%)
 * Total Accepted:    16.6K
 * Total Submissions: 73.6K
 * Testcase Example:  '"babad"'
 *
 * 给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为1000。
 *
 * 示例 1：
 *
 * 输入: "babad"
 * 输出: "bab"
 * 注意: "aba"也是一个有效答案。
 *
 *
 * 示例 2：
 *
 * 输入: "cbbd"
 * 输出: "bb"
 *
 *
 */
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
  string longestPalindrome(string s) {
    if (s.size()<0) {
      return "";
    }
    int start = 0, end = 0, len=0;
    for (int i = 0; i < s.size(); i++) {
      int len1 = getAroundToCenter(s, i, i);
      int len2 = getAroundToCenter(s, i, i + 1);
      len = max(len1, len2);
      if (len > end - start) {
        start = i - (len-1)/2;
        end = i + len / 2;
      }
    }
    return s.substr(start, end-start+1);
  }

private:
  int getAroundToCenter(string s, int l, int r) {
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
      l--;
      r++;
    }

    return (r - l-1);
  }
};

