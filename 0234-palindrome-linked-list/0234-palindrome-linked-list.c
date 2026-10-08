bool isPalindrome(struct ListNode* head) {

    int arr[100000];
    int n = 0;

    struct ListNode* current = head;


    while (current != NULL) {
        arr[n] = current->val;
        n++;
        current = current->next;
    }


    int i = 0;
    int j = n - 1;

    while (i < j) {

        if (arr[i] != arr[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}