#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

#if 0
int sub(struct TreeNode *left, struct TreeNode *right)
{
    if (left && right) {
        if (left->val == right->val) {
            int left_val = sub(left->left, right->right);
            int right_val = sub(left->right, right->left);
            if (left_val && right_val) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        if (!left && !right) {
            return 1;
        }
        return 0;
    }

}
int isSymmetric(struct TreeNode *root) {
    return sub(root->left, root->right);
}
#endif
int sub(struct TreeNode *left, struct TreeNode *right)
{
    if (left && right) {
        if (left->val == right->val) {
            int left_val = sub(left->left, right->right);
            int right_val = sub(left->right, right->left);
            if (left_val && right_val) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return 0;
        }
    } else {
        if (!left && !right) {
            return 1;
        }
        return 0;
    }
}

bool isSymmetric(struct TreeNode* root){
    if (!root)
        return 1;
    return sub(root->left, root->right);

}
int main()
{
    return 0;
}
