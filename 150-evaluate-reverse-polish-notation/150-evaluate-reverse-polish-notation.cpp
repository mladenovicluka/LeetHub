class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i=0;i<tokens.size();i++){
       
        if(isdigit(tokens[i][0])||(tokens[i].size()>1 && tokens[i][0]=='-'&&isdigit(tokens[i][1])))
        {
           st.push(stoi(tokens[i]));

        }
            else
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                if(tokens[i]=="+")st.push(x+y);
                else if(tokens[i]=="-")st.push(y-x);
                else if(tokens[i]=="*")st.push(x*y);
                else if(tokens[i]=="/")st.push(y/x);          
            }        
        }
        return st.top();
    }
};