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
   
    int diameterOfBinaryTree(TreeNode* root) {

       
        stack <TreeNode* >st;
        unordered_map<TreeNode*,int> depth;
        st.push(root);
        st.push(root);
        int ans=0;
         TreeNode* x=root;
        while(x)
                {
                     
                   st.push(x);
                   st.push(x);
                   x=x->left;
                }
        while(!st.empty())
        {
           x=st.top();
            st.pop();
        
            if(!st.empty()&&x==st.top())
            {
                
                depth[x]=0;
                x=x->right;
                while(x)
                {
                     
                   st.push(x);
                   st.push(x);
                   x=x->left;
                }
                 
            }
            else
            {
                  
                depth[x]=max(depth[x->left],depth[x->right])+1;
                ans=max(ans,depth[x->left]+depth[x->right]);
                
                
                
            }
            
            
            
        }
          return ans;   
    }
};