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
   bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p&&!q||!p&&q)return false;
        if(!p&&!q)return true;
        stack<TreeNode*> sp;
        stack<TreeNode*> sq;
        sp.push(p);
        sq.push(q);
        while(!sp.empty()&& !sq.empty())
        {
            TreeNode* curp=sp.top();
            TreeNode* curq=sq.top();
            sp.pop();
            sq.pop();
            if(curp->val!=curq->val)return false;
            while(curp&&curq)
            {
                if(curp->val!=curq->val)return false;
                if(curp->right&&!curq->right||!curp->right && curq->right)return false;
                if(curp->right)sp.push(curp->right);
                if(curq->right)sq.push(curq->right);
                curp=curp->left;
                curq=curq->left;
            }
            if(!curp&&curq||curp&&!curq)return false;
            
        }
        if(sp.empty()&&!sq.empty()||!sp.empty()&&sq.empty())return false;
        return true;
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(isSameTree(curr,subRoot))return true;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                
            }
        
        
        }
        return false;
    }
};