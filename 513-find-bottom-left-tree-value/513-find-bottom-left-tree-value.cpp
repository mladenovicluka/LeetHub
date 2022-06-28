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
    int findBottomLeftValue(TreeNode* root) {
        queue <TreeNode* > q;
        q.push(root);
        TreeNode* prev;
       TreeNode*  curr;
        while(!q.empty())
        {
            int n=q.size();
            prev=q.front();
            for(int i=0;i<n;i++)
            {
                curr=q.front();
                q.pop();
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            
            
            }
        
        
        
        }
        return prev->val;
    }
};