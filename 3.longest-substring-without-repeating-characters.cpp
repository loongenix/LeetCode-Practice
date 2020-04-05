/*
 * [3] Longest Substring Without Repeating Characters
 *
 * https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/description/
 *
 * algorithms
 * Medium (24.22%)
 * Total Accepted:    30.1K
 * Total Submissions: 124.3K
 * Testcase Example:  '"abcabcbb"'
 *
 * 给定一个字符串，找出不含有重复字符的最长子串的长度。
 *
 * 示例 1:
 *
 * 输入: "abcabcbb"
 * 输出: 3
 * 解释: 无重复字符的最长子串是 "abc"，其长度为 3。
 *
 *
 * 示例 2:
 *
 * 输入: "bbbbb"
 * 输出: 1
 * 解释: 无重复字符的最长子串是 "b"，其长度为 1。
 *
 *
 * 示例 3:
 *
 * 输入: "pwwkew"
 * 输出: 3
 * 解释: 无重复字符的最长子串是 "wke"，其长度为 3。
 * 请注意，答案必须是一个子串，"pwke" 是一个子序列 而不是子串。
 *
 *
 */
#include <map>
using namespace std;
class Solution {
public:
  int lengthOfLongestSubstring(string s) {

    map<char, int> map;
    int result = 0;
    int max = 0;

    for (int i = 0,j=0; i < s.size(); i++) {
        if(map.find(s[i])!=map.end()){
          j = j>map[s[i]]? j:map[s[i]];
        }
        max = i-j + 1;
        result = result > max ? result : max;
        map[s[i]] = i + 1;
    }
    return result;
  }
};

