class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& a) {
        vector<int> n;
        vector<int> j;
        vector<vector<int>> rez;
        unordered_map<int,int> gub;
        for(auto x:a){gub[x[0]]=gub[x[1]]=0;}
        for(auto x:a)
        {
            gub[x[1]]++;
        }
        for(pair<int,int> x:gub)
        {
            if(!gub[x.first])n.push_back(x.first);
            if(gub[x.first]==1)j.push_back(x.first);
        }
        sort(n.begin(),n.end());
        sort(j.begin(),j.end());
        rez.push_back(n);rez.push_back(j);
        return rez;
    }
};