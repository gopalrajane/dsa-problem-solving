/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


void input(struct TreeNode* root, int arr[], int* i){
    
    if (root == NULL){
        return;
    }

    input(root->left, arr, i);

    arr[(*i)++] = root->val;

    input(root->right, arr, i);
}

bool findTarget(struct TreeNode* root, int k) {

    int arr[10000];
    int i = 0;

    input(root, arr, &i);

    int left = 0;
    int right = i - 1;

    while (left < right){
        int sum = arr[left] + arr[right];

        if (sum == k){
            return true;
            
        } else if (sum < k){
            left++;

        } else{
            right--;
        }
    }

    return false;
    
}