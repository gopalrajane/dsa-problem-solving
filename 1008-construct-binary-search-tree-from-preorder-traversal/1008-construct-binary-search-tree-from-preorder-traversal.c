/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* createNode(int val){

    struct TreeNode* newNode = malloc(sizeof(struct TreeNode));

    newNode->val = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}


struct TreeNode* insert(struct TreeNode* root, int val){

    if (root == NULL){
        return createNode(val);
    }

    if (val < root->val){
        root->left = insert(root->left, val);
    } else if (val > root->val){
        root->right = insert(root->right, val);
    }

    return root;
}

void preorder(struct TreeNode* root){

    if (root == NULL){
        return;
    }

    preorder(root->left);
    preorder(root->right);
}

struct TreeNode* bstFromPreorder(int* preorder, int preorderSize) {

    struct TreeNode* root = NULL;

    for (int i = 0; i < preorderSize; i++) {
        root = insert(root, preorder[i]);
    }

    return root;
}
