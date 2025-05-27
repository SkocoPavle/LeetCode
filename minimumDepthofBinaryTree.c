/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int min(int a, int b)
 {
    return (a < b) ? a : b;
 }
 int max (int a, int b)
 {
    return (a > b) ? a : b;
 }
 int minimal(struct TreeNode* root)
 {
    if (root == NULL) return 0;
    int leftDepth = minimal(root->left);
    int rightDepth = minimal(root->right);
    if (root->left == NULL || root->right == NULL) return 1 + max(leftDepth, rightDepth);
    return 1 + min(leftDepth, rightDepth);
 }
int minDepth(struct TreeNode* root) {
    return minimal(root);
}
