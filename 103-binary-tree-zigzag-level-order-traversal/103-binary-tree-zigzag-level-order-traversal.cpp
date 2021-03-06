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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*> dq;
        vector<vector<int>> ans;
        if(!root)return ans;

        dq.push_front(root);
        while(!dq.empty())
        {
            vector<int> v;
            int n=dq.size();

            
            for(int i=0;i<n;i++)
            {
            TreeNode* curr=dq.back();
                dq.pop_back();
                v.push_back(curr->val);
                if(curr->left)dq.push_front(curr->left);
                if(curr->right)dq.push_front(curr->right);
            
            
            }

        ans.push_back(v);
        }
        for(int i=1;i<ans.size();i+=2)
        {
            reverse(ans[i].begin(),ans[i].end());
            
        }
        return ans;
    }
};