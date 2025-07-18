/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        // If only one of child is non-null, then go into that recursion.
        if (!root->left) {
            return 1 + dfs(root->right);
        } else if (!root->right) {
            return 1 + dfs(root->left);
        }
        
        // Both children are non-null, hence call for both children.
        return 1 + min(dfs(root->left), dfs(root->right));
    }
    
    int minDepth(TreeNode* root) {
        return dfs(root);
    }
};
