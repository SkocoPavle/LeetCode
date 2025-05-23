/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    struct ListNode* tail = head;
    
    while (tail->next != NULL)
    {
        if (tail->val == tail->next->val)
        {
            tail->next = tail->next->next;
        }
        else
        {
            tail = tail->next;
        }
    }

    return head;
}
