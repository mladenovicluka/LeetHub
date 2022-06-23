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
        stack <TreeNode*> stp;
        stack <TreeNode*> stq;
        TreeNode* nextp=p;
        TreeNode* nextq=q;
        if(p&&!q||!p&&q)return false;
        
        while(1)
        {
        while(nextp&&nextq)
        {
            if(nextp->val!=nextq->val)return false;
            if(nextp->right&&!nextq->right||!nextp->right&&nextq->right)return false;
           if(nextp->right) stp.push(nextp->right);
             if(nextq->right) stq.push(nextq->right);
            nextp=nextp->left;
            nextq=nextq->left;
            
        }
            if(nextp||nextq)return false;
            if(!stp.empty()&&!stq.empty())
            {
                nextp=stp.top();
                stp.pop();
                nextq=stq.top();
                stq.pop();
            }
            else
            {
                break;
            }
            
            
            
            
    
        
        }
        
        
        
        if(stp.empty()&&stq.empty())return true;
        return false;
    }
    
};