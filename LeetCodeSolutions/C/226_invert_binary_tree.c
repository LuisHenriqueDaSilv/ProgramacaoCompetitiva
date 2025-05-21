/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void invertRecursion(struct TreeNode* root){
    if(root == NULL){
        return;
    }
    struct TreeNode* temp = root->right;
    root->right = root->left;
    root->left = temp;

    invertRecursion(root->left);
    invertRecursion(root->right);
    
}

struct TreeNode* invertTree(struct TreeNode* root) {
    invertRecursion(root);

    return root;
}