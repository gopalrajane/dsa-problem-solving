/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {

    if (head == NULL || head->next == NULL || k == 0){
        return head;
    }

    int length = 1;
    struct ListNode* temp = head;

    while (temp->next != NULL){
        length++;
        temp = temp->next;
    }

    k = k % length;

    if (k == 0){
        return head;
    }

    temp->next = head;

    int steps = length - k;
    temp = head;

    for (int i = 1; i < steps; i++) {
        temp = temp->next;
    }

    struct ListNode* newHead = temp->next;
    temp->next = NULL;

    return newHead;
    
}