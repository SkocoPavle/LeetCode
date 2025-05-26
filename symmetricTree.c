/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool is(struct TreeNode *left, struct TreeNode *right)
 {
    if (left == NULL && right == NULL) return true;
    if (left == NULL && right != NULL || left != NULL && right == NULL) return false;
    if (left->val != right->val) return false;
    else
    {
        return is(left->left, right->right) && is(left->right, right->left);
    }
    return true;
 }
bool isSymmetric(struct TreeNode* root) {
    bool result = is(root->left, root->right);
    return result;
}
