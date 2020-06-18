/*
 Given a binary tree, find its maximum depth.

 The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its depth = 3.
 */
#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int maxDepth(struct TreeNode *root)
{
    if (!root)
        return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    int max = (left > right ? left : right) + 1;
    return max;

}

int main()
{
    return 0;
}
