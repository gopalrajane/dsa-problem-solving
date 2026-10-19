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
int size;

void preorder(struct TreeNode* root){

    if (root == NULL){
        return;
    }
    
    arr[size] = root->val;
    size++;

    preorder(root->left);
    preorder(root->right);
}


int* preorderTraversal(struct TreeNode* root, int* returnSize) {

    size = 0;
    preorder(root);

    *returnSize = size;
    return arr;
    
}