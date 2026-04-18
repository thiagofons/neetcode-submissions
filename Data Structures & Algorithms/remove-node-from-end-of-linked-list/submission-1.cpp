/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  ListNode* removeNthFromEnd(ListNode* head, int n) { 
    ListNode *dummy = new ListNode(0, head);

    // Create both of our pointers
    ListNode *left = dummy;
    ListNode *right = head;

    // Set the right pointer position in n
    while (n > 0 && right) {
      right = right->next;
      n--;
    }

    // Walk with both pointers through the list
    while (right) {
      left = left->next;
      right = right->next;
    }

    // Delete the node
    left->next = left->next->next;

    return dummy->next;
  }
};