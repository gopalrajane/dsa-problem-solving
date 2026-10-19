/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int arr[100];
int size = 0;

void postorder(struct TreeNode* root){

    if (root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);

    arr[size] = root->val;
    size++;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {

    size = 0;
    postorder(root);

    *returnSize = size;
    return arr;
    
}