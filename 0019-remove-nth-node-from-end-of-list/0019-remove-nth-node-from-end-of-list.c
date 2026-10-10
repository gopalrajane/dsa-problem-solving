/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    int count = 0;
    struct ListNode* curr = head;

    while (curr != NULL) {
        count++;
        curr = curr->next;
    }

    int nodeloc = count - n;

    if (nodeloc == 0) {
        struct ListNode* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    curr = head;

    for (int i = 0; i < nodeloc - 1; i++) {
        curr = curr->next;
    }

    struct ListNode* temp = curr->next;
    curr->next = temp->next;
    free(temp);


    return head;
}
