/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {

    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    struct ListNode* temp1 = headA;
    struct ListNode* temp2 = headB;

    while (temp1 != temp2) {

        temp1 = (temp1 == NULL) ? headB : temp1->next;
        temp2 = (temp2 == NULL) ? headA : temp2->next;
    }

    return temp1;
}