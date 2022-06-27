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
    bool checkTree(TreeNode* root) {
        TreeNode* next=root;
        stack<TreeNode*> s;
        unordered_map<TreeNode*,int> h;
        while(next)
        {
            s.push(next);
            s.push(next);
            next=next->left;
        
        }
        while(!s.empty())
        {
            next=s.top();
            s.pop();
            if(!s.empty()&&next==s.top())
            {
                
                h[next]=next->val;
                

                  next=next->right;
                while(next)
                    {
                        s.push(next);
                        s.push(next);
                        next=next->left;
                    }
            }
            else
            {
                if(next->left&&next->right)
                {
                if(h[next]!=h[next->left]+h[next->right])return false;
                
                } 
            
            }
                 
            
        }
        return true;
    }
};