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
    bool isValidBST(TreeNode* root) {
        if(!root)return true;
        stack<TreeNode*> s;
        unordered_map<TreeNode*,int> h;

        TreeNode* next=root;
         TreeNode* pre=NULL;
        while(1)
        {
            
             while(next)
                    {
                        s.push(next);
                        next=next->left;
                    }
            
            if(!s.empty())
            {
            next=s.top();
            s.pop();   
              if(pre && next->val <= pre->val) return false;
                 pre = next;

                 next=next->right;
                

                
            }
            else
            {
               break;
            }
            
       
            
        }
        
        return true;
    }
    
};