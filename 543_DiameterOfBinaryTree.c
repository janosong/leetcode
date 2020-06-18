/*
Given a binary tree, you need to compute the length of the diameter of the tree. The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

Example:
Given a binary tree
          1
         / \
        2   3
       / \
      4   5
Return 3, which is the length of the path [4,2,1,3] or [5,2,1,3].

Note: The length of path between two nodes is represented by the number of edges between them.
*/

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


int depth(struct TreeNode* t, int* max)
{
    if (!t)
        return 0;
    int left = depth(t->left, max);
    int right = depth(t->right, max);
    int tmp = left + right + 1;
    *max = (tmp > *max)? tmp : *max;
    return (left > right ? left : right) + 1;

}

int diameterOfBinaryTree(struct TreeNode* root){
    if (!root) return 0;
    int max = 0;
    depth(root, &max);
    return max - 1;

}
