/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int max(int a, int b) {
    return (a > b) ? a : b;
}
int maxDepths(struct TreeNode* root) {
    if (root == NULL) return 0;
    int leftDepth = maxDepths(root->left);
    int rightDepth = maxDepths(root->right);
    return 1 + max(leftDepth, rightDepth);
}

int maxDepth(struct TreeNode* root) {
    int result = maxDepths(root);
    return result;
}
