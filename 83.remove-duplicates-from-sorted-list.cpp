/*
 * [83] Remove Duplicates from Sorted List
 *
 * https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (40.28%)
 * Total Accepted:    7K
 * Total Submissions: 17.3K
 * Testcase Example:  '[1,1,2]'
 *
 * 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
 *
 * 示例 1:
 *
 * 输入: 1->1->2
 * 输出: 1->2
 *
 *
 * 示例 2:
 *
 * 输入: 1->1->2->3->3
 * 输出: 1->2->3
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
  ListNode *deleteDuplicates(ListNode *head) {

      if(head==nullptr){
        return head;
      }
    ListNode *current = head;
    ListNode *next = head->next;

    while (next != nullptr) {

      if (current->val == next->val) {
        next = next->next;
        current->next = next;
      } else {
        current = next;
        next = next->next;
      }
    }

    return head;
  }
};
