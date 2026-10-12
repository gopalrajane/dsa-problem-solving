/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize) {

    int count = 0;
    struct ListNode* temp = head;

    while (temp != NULL){
        count++;
        temp = temp->next;
    }

    int* arr = malloc(count * sizeof(int));
    *returnSize = count;


    struct ListNode* curr = head;

    for (int i = 0; i < count; i++){

        struct ListNode* next = curr->next;
        arr[i] = 0;

        while(next != NULL){

            if(next->val > curr->val){
                arr[i] = next->val;
                break;
            }

            next = next->next;
        }

        curr = curr->next;
    }

    return arr;
}