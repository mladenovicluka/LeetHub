class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& x) {
        int a[n];    
       
        for(int i=0;i<n;i++)a[i]=0;
    
        for(int i=0;i<x.size();i++)
        {
         
            a[x[i][1]]++;            
            
        }
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(!a[i])q.push(i);
        }
       for(int i=0;i<n;i++)
        {
          
           if(q.empty())return false;
           int curr=q.front();
           q.pop();
         
           for(int j=0;j<x.size();j++)
           {
               if(curr==x[j][0]){
                   
               
                a[x[j][1]]--; 
               if(!a[x[j][1]])q.push(x[j][1]);
              }
           }
         
           
        }
        return true;
    }
};