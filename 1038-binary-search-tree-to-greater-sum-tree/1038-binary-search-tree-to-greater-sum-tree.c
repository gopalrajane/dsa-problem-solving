/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int sum = 0;

void right(struct TreeNode* root){
    
    if (root == NULL){
        return;
    }

    right(root->right);

    sum = sum + root->val;
    root->val = sum;

    right(root->left);
}


struct TreeNode* bstToGst(struct TreeNode* root) {

    sum = 0;

    right(root);

    return root;
    
}