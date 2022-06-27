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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue <TreeNode*> q;
        q.push(root);
        int level=0;
         vector<vector<int>> answer;
   if(!root) return answer;
        while(!q.empty())
        {
            vector<int> v;
            int n=q.size();
            level++;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                 v.push_back(curr->val);
           
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            
            
            }
            
            answer.push_back(v);
            
        }
        return answer;
    }
};