/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int isTrue(struct TreeNode* root, int targetSum)
 {
    if (root == NULL) return 0;
    int remainingSum = targetSum - root->val;
    if (root->left == NULL && root->right == NULL)
        return (remainingSum == 0) ? 1 : 0;
    return isTrue(root->left, remainingSum) || isTrue(root->right, remainingSum);
 }
bool hasPathSum(struct TreeNode* root, int targetSum) {
    return isTrue(root, targetSum);
}
