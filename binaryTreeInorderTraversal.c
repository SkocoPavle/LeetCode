/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int countNode(struct TreeNode *root)
 {
    if (root == NULL) return 0;
    return 1 + countNode(root->left) + countNode(root->right);
 }
 void array(struct TreeNode *root, int *res, int *c)
 {
    if (root == NULL) return;
    array(root->left, res, c);
    res[(*c)++] = root->val; 
    array(root->right, res, c);
 }
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int total = countNode(root);
    if (total == 0) 
    {
        *returnSize = 0;
        return 0;
    }

    int *result = malloc(sizeof(int) * total);
    int k = 0;
    array(root, result, &k);
    *returnSize = k;
    return result;
}   
