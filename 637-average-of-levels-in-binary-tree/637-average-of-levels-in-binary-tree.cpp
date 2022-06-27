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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>  v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
         
            int n=q.size();
            long long int suma=0;
            for(int i=0;i<n;i++)
            {
               
                TreeNode* curr=q.front();
                q.pop();
                 suma+=curr->val;
               
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            
            
            }
            v.push_back((double)suma/(double)n);
            
        }
        return v;
    }
};