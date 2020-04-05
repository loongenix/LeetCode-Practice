/*
 * [9] Palindrome Number
 *
 * https://leetcode-cn.com/problems/palindrome-number/description/
 *
 * algorithms
 * Easy (51.50%)
 * Total Accepted:    25.9K
 * Total Submissions: 50.2K
 * Testcase Example:  '121'
 *
 * 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 * 
 * 示例 1:
 * 
 * 输入: 121
 * 输出: true
 * 
 * 
 * 示例 2:
 * 
 * 输入: -121
 * 输出: false
 * 解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
 * 
 * 
 * 示例 3:
 * 
 * 输入: 10
 * 输出: false
 * 解释: 从右向左读, 为 01 。因此它不是一个回文数。
 * 
 * 
 * 进阶:
 * 
 * 你能不将整数转为字符串来解决这个问题吗？
 * 
 */
class Solution {
public:
    bool isPalindrome(int x) {

        if(x%10==0&&x!=0){
            return false;
        }

        int rev=0;
        while(x>rev){
            int i=x%10;
            x=x/10;
            rev=rev*10+i;
        }
        return x==rev || x==rev/10;
    }
};