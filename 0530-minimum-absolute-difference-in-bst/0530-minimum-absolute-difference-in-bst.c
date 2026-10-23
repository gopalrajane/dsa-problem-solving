/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int minDiff;
int prev;
int visit;


void inorder(struct TreeNode* root) {

    if (root == NULL){
        return;
    }

    inorder(root->left);
    
    if (visit == 0){
        int diff = root->val - prev;

        if (diff < minDiff){
            minDiff = diff;
        }
    }

    prev = root->val;
    visit = 0;
    
    inorder(root->right);
}



int getMinimumDifference(struct TreeNode* root) {

    minDiff = 1000000;
    visit = 1;

    inorder(root);

    return minDiff;
}