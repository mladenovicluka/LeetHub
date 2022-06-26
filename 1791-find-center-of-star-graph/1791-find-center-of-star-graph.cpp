class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> h;
        for(int i=0;i<edges.size();i++)
        {
            for(int j=0;j<edges[0].size();j++)
            {
                if (h.find(edges[i][j])!=h.end())
                {
                    h[edges[i][j]]++;
                }
                else h[edges[i][j]]=1;
            }
            
            
            
        }
        pair <int,int> p;
        p.first=-1;
        p.second=-1;
        for(auto e:h)
        {
            if(e.second>p.second)
            {
                p.first=e.first;
                p.second=e.second;
            }
            
            
        }
        return p.first;
        
    }
};