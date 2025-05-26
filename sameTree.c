/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool isSame(struct TreeNode *p, struct TreeNode *q)
 {
    if (p == NULL && q == NULL) return true;
    if (p == NULL && q != NULL || p != NULL && q == NULL) return false;
    if (p->val == q->val)
    {
        return isSame(p->left, q->left) && isSame(p->right, q->right);
    }
    else
    {
        return false;
    }

    return true;
 }
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    bool result = isSame(p , q);
    return result;
}
