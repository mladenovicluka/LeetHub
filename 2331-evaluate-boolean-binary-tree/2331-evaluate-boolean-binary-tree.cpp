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
    bool evaluateTree(TreeNode* root) {
        stack<TreeNode*> st;
        unordered_map<TreeNode*,int> h;
        TreeNode* next=root;
        while(next)
        {
            st.push(next);
            st.push(next);
            next=next->left;
        }
        
        while(!st.empty())
        {
            next=st.top();
            st.pop();
            
            if(!st.empty()&& next==st.top())
            {
                next=next->right;        
            while(next)
                {
                    st.push(next);
                    st.push(next);
                    next=next->left;
                }

            }
            else
            {
            if(next->left && next->right)
            {
                if(next->val==2)
                h[next]=h[next->left]||h[next->right];
                else
                   h[next]=h[next->left]&&h[next->right]; 
                
            }
                else
                {
                    h[next]=next->val;
                }
                
            }
                       
            
            
        }
        return h[root];
        
        
    }
};