class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *list, *head, *l1, *l2;

        l1 = list1;
        l2 = list2;

        if (!list1 && !list2)
        {
            return NULL;
        }
        else if (!list1)
        {
            return list2;
        }
        else if (!list2)
        {
            return list1;
        }
        else
        {
            if (l1->val < l2->val) {
                head = list1;
                list1 = list1->next;
            } else {
                head = list2;
                list2 = list2->next;
            }

            while (l1 && l2)
            {
                if (l1->val < l2->val)
                {
                    list->next = l1;
                    l1 = l1->next;
                    list = list->next;
                }
                else
                {
                    list->next = l2;
                    l2 = l2->next;
                    list = list->next;
                }
            }

            if (l1)
            {
                list->next = l1;
            }
            else
            {
                list->next = l2;
            }
        }

        return head;
    }
};