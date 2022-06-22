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
    bool isBalanced(TreeNode* root) { 
        stack<TreeNode*> st;
        unordered_map<TreeNode*,int> h;
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
                h[x]=0;
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
                 if(abs(h[x->left]-h[x->right])>1)return false;
                h[x]=max(h[x->left],h[x->right])+1;
             
            }
        }
        return true;
    }
};