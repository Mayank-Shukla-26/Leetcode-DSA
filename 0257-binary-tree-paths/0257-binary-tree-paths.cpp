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
     void dfs(TreeNode* node, string path, vector<string>& result) {
        if(node == NULL) return;

        // add current node value to path
        path += to_string(node->val);

        // check if it is a leaf node
        if(node->left == NULL && node->right == NULL) {
            result.push_back(path);
            return;
        }

        path += "->";

        dfs(node->left, path, result);
        dfs(node->right, path, result);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        dfs(root, "", result);
        return result;
    }
};