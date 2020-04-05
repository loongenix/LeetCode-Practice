/*
 * [2] Add Two Numbers
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (28.97%)
 * Total Accepted:    35.2K
 * Total Submissions: 121.5K
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。
 *
 * 你可以假设除了数字 0 之外，这两个数字都不会以零开头。
 *
 * 示例：
 *
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 *
 *
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
      ListNode result(-1);
      ListNode *cursor;

      cursor = &result;
      int temp = 0;
      while(l1!=nullptr||l2!=nullptr){
        int i1 = l1 != nullptr ? l1->val : 0;
        int i2 = l2 != nullptr ? l2->val : 0;

        int i = i1+i2+ temp;
        cursor->next = new ListNode(i % 10);
        temp = i / 10;
        cursor = cursor->next;
       if(l1!=nullptr) l1 = l1->next;
       if(l2!=nullptr) l2 = l2->next;
      }

      if(temp>0){
       
        cursor->next = new ListNode(temp);
      }
      return result.next;
  }
};
