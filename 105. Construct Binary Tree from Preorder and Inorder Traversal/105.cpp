class Solution {
public:
    int find(vector<int>& inorder, int k) {
        for (int i = 0; i < inorder.size(); i++) if (inorder[i] == k) return i;
        return -1;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0, inStart = 0, inend = inorder.size() - 1;
        return build(preorder, inorder, preIndex, inStart, inend);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& preIndex, int inStart, int inend) {
        if (inStart > inend) {
            return NULL;
        }

        int ele = preorder[preIndex++];
        TreeNode* root = new TreeNode(ele);
        int pos_in_inorder = find(inorder, ele);

        root->left = build(preorder, inorder, preIndex, inStart, pos_in_inorder - 1);
        root->right = build(preorder, inorder, preIndex, pos_in_inorder + 1, inend);
        return root;
    }
};
