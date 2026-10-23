/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val) {
    
    if (root == NULL){
        return NULL;
    }

    if (root->val == val){
        return root;
    }

    struct TreeNode* left = searchBST(root->left, val);

    if (left != NULL){
        return left;
    }

    return searchBST(root->right, val);

}