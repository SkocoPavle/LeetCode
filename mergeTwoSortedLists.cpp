#include <stdio.h>
#include <stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode head;
    struct ListNode *tail = &head;
    head.next = NULL;

    while (list1 != NULL && list2 != NULL)
    {
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode)); 

        if (list1->val <= list2->val)
        {
            newNode->val = list1->val;
            list1 = list1->next;
        }
        else
        {
            newNode->val = list2->val;
            list2 = list2->next;
        }

        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
    }

    while (list1 != NULL)
    {
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = list1->val;
        newNode->next = NULL;
        list1 = list1->next;
        tail->next = newNode;
        tail = newNode;
    }

    while (list2 != NULL)
    {
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));
        newNode->val = list2->val;
        newNode->next = NULL;
        list2 = list2->next;
        tail->next = newNode;
        tail = newNode;
    }

    return head.next;
}
