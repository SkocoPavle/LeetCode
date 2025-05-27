/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int max (int a, int b)
 {
    if (a > b) return a; 
    else return b;

 }
 int compare(int a, int b)
 {
    return (a > b) ? (a - b) : (b - a); 
 }
 int is(struct TreeNode* root)
 {
    if (root == NULL) return 0;
        int leftHeight = is(root->left);
    if (leftHeight == -1) return -1;

    int rightHeight = is(root->right);
    if (rightHeight == -1) return -1;

    if (compare(leftHeight, rightHeight) > 1) return -1;

    return 1 + max(leftHeight, rightHeight);
 }
bool isBalanced(struct TreeNode* root) {
    int q = is(root);
    return q != -1;
}
