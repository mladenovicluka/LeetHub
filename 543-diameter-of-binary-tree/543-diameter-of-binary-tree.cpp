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
    int maxdepth(TreeNode* root)
    {
        if(!root)return 0;
        return max(maxdepth(root->left),maxdepth(root->right))+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
         if(!root)return 0;
        int levostablo= maxdepth(root->left);
        int desnostablo=maxdepth(root->right);
        int curr=levostablo+desnostablo;
        return max(curr,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
    }
};