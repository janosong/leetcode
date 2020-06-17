/**
 *  * Definition for a binary tree node.
 *   * struct TreeNode {
 *    *     int val;
 *     *     struct TreeNode *left;
 *      *     struct TreeNode *right;
 *       * };
 *        */
 struct TreeNode {
  int val;
   struct TreeNode *left;
    struct TreeNode *right;
 };
void swap(struct TreeNode *node)
{
    void *tmp = node->left;
    node->left = node->right;
    node->right = tmp;

}
void invert(struct TreeNode *node)
{
    swap(node);
    if (node->left) {
        invert(node->left);

    }
    if (node->right) {
        invert(node->right);

    }

}
struct TreeNode* invertTree(struct TreeNode* root){
    if (NULL != root) {
        invert(root);

    }
    return root;

}
