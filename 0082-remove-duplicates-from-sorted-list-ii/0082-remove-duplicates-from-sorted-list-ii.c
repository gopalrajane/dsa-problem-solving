/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {

    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode* prev = &dummy;
    struct ListNode* current = head;
    struct ListNode* temp;


    while(current != NULL && current->next != NULL){

        if (current->val == current->next->val){

            int duplicate = current->val;
            
            while (current != NULL && current->val == duplicate){
                temp = current;
                current = current->next;
                free(temp);
            }

            prev->next = current;

            
        } else {
            prev = current;
            current = current->next;
        }
    }

    return dummy.next;
}