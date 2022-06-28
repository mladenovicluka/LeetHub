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
    int findTilt(TreeNode* root) {
        if(!root)return 0;
        unordered_map< TreeNode*, int> h;
        TreeNode* next=root;
        stack<TreeNode* > s;
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
        if(!s.empty()&&s.top()==next)
        {
       
            next=next->right;
        
         while(next)
        {
            s.push(next);
            s.push(next);
            next=next->left;
        
        }

        }else
            
        {
            
            if(!next->left&&!next->right)h[next]=next->val;
            if(next->left&&next->right)
            {
                h[next]=next->val+h[next->left]+h[next->right];
            
            }
            else{

            if(next->left)h[next]=next->val+h[next->left];
            if(next->right)h[next]=next->val+h[next->right];
             }
        }
        }
        
            
        
        int suma=0;
        next=root;
        
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
        if(!s.empty()&&s.top()==next)
        {
       
            next=next->right;
        
         while(next)
        {
            s.push(next);
            s.push(next);
            next=next->left;
        
        }

        }else
            
        {
            
            
            if(next->left&&next->right)
            {
                suma+=abs(h[next->left]-h[next->right]);
            
            }
            else{

            if(next->left)suma+=abs(h[next->left]);
            if(next->right)suma+=abs(h[next->right]);
             }
        }
        
        
        
        }
        return suma;
        
    }
    
};