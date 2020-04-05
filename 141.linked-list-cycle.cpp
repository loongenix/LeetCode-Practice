/*
 * [141] Linked List Cycle
 *
 * https://leetcode-cn.com/problems/linked-list-cycle/description/
 *
 * algorithms
 * Easy (29.79%)
 * Total Accepted:    13.2K
 * Total Submissions: 44.4K
 * Testcase Example:  '[]\nno cycle'
 *
 * 给定一个链表，判断链表中是否有环。
 * 
 * 进阶：
 * 你能否不使用额外空间解决此题？
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

class Solution
{
  public:
    bool hasCycle(ListNode *head)
    {

        if (head == nullptr)
        {
            return false;
        }
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {

            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }

        return false;
    }
};

