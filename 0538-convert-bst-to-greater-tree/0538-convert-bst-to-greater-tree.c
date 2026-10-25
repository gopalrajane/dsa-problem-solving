/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum = 0;

void rightorder(struct TreeNode* root){

    if (root == NULL){
        return;
    }

    rightorder(root->right);

    sum = sum + root->val;
    root->val = sum;

    rightorder(root->left);
}


struct TreeNode* convertBST(struct TreeNode* root) {

    sum = 0;

    rightorder(root);

    return root;
    
}