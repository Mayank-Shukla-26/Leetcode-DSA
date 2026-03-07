/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        int leftHT = minDepth(root->left);
        int rightHT = minDepth(root->right);

        if (root->left == NULL) {
            return rightHT + 1;
        }

        if (root->right == NULL) {
            return leftHT + 1;
        }

        return min(leftHT, rightHT) + 1;
    }
};