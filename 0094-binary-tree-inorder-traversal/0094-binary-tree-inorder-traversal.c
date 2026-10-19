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

void inorder(struct TreeNode* root){
    if (root == NULL){
        return;
    }
    
    inorder(root->left);

    arr[size] = root->val;
    size++;

    inorder(root->right);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){

    size = 0;
    inorder(root);

    *returnSize = size;
    return arr;

}



