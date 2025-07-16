/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root){
    int x,y;
    if(root==NULL){
        return 0;
    }
    else{
    x=maxDepth(root->left);
    y=maxDepth(root->right);
    if(x>y)
        return x+1;
    else 
        return y+1;
    }
}
