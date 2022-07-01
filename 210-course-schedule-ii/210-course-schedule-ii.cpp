class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& x) {
        vector<int> a;
         vector<int> v;
        for(int i=0;i<n;i++)a.push_back(0);
        for(int i=0;i<x.size();i++)
        {
            a[x[i][1]]++;
        }
        queue <int> q;
        for(int i=0;i<n;i++)
        {
            if(!a[i]){
                printf("%d" ,i);
          
                q.push(i);       
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(q.empty())return {};
            int c=q.front();
            q.pop();
            v.push_back(c);  
            for(int j=0;j<x.size();j++)
            {
                if(c==x[j][0])
                {
                    a[x[j][1]]--;
                    if(! a[x[j][1]])
                        q.push(x[j][1]);
                                   
                
                
                }
            }
            
            
            
        }
        reverse(v.begin(),v.end());
            return v;
    }
};