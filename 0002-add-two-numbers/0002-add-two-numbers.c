/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdlib.h>

/**
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* tail = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {
        int a = 0;
        int b = 0;

        if (l1 != NULL) {
            a = l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            b = l2->val;
            l2 = l2->next;
        }

        int sum = a + b + carry;
        carry = sum / 10;

        struct ListNode* node =
            malloc(sizeof(struct ListNode));

        node->val = sum % 10;
        node->next = NULL;

        tail->next = node;
        tail = node;
    }

    return dummy.next;
}
