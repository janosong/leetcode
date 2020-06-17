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