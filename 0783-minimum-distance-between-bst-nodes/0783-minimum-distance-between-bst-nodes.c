/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int MinDiff;
int prev;

void mindiff(struct TreeNode* root, int arr[], int* i){

    if (root == NULL){
        return;
    }

    mindiff(root->left, arr, i);

    arr[(*i)++] = root->val;

    mindiff(root->right, arr, i);
}


int minDiffInBST(struct TreeNode* root) {
    int arr[100];
    int i = 0;

    mindiff(root, arr, &i);

    int min = arr[1] - arr[0];

    for (int j = 0; j < i - 1; j++){
        int sum = arr[j+1] - arr[j];
        if (sum < min){
            min = sum;
        }
    }

    return min;
    
}