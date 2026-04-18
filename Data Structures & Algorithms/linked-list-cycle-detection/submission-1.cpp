class Solution {
public:
  bool hasCycle(ListNode *head) {
    ListNode *one = head, *two = head->next;

    while (two && two->next) {
      if (one->val == two->val)
        return true;
      
      one = one->next;
      two = two->next->next;
    }
    return false;
  }
};