/*
 * [20] Valid Parentheses
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (32.34%)
 * Total Accepted:    17.1K
 * Total Submissions: 52.7K
 * Testcase Example:  ''()''
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 *
 * 有效字符串需满足：
 *
 *
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 *
 *
 * 注意空字符串可被认为是有效字符串。
 *
 * 示例 1:
 *
 * 输入: '()'
 * 输出: true
 *
 *
 * 示例 2:
 *
 * 输入: '()[]{}'
 * 输出: true
 *
 *
 * 示例 3:
 *
 * 输入: '(]'
 * 输出: false
 *
 *
 * 示例 4:
 *
 * 输入: '([)]'
 * 输出: false
 *
 *
 * 示例 5:
 *
 * 输入: '{[]}'
 * 输出: true
 *
 */

#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
  bool isValid(string s) {
    stack<char> myStack;
    for (char &i : s) {
      if (i == '(' || i == '[' || i == '{') {
        myStack.push(i);
      } else if (i == ')' || i == ']' || i == '}') {
        if (myStack.empty()) {
          return false;
        }
        char c = myStack.top();
        if (i == ')' && c !='(' ) {
          return false;
        }
        if (i ==']'  && c != '[') {
          return false;
        }
        if (i == '}' && c != '{') {
          return false;
        }
        myStack.pop();
      }
    }

    return myStack.empty();
  }
};


