/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode* BST(int *nums,int start, int end)
 {
    if (start > end) return NULL;
    int middle = (start + end) / 2;
    struct TreeNode *root = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    root->val = nums[middle];
    root->left = BST(nums, start, middle - 1);
    root->right = BST(nums, middle + 1, end);
    return root;
 }
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    struct TreeNode *array = BST(nums, 0, numsSize - 1);
    return array;
}
