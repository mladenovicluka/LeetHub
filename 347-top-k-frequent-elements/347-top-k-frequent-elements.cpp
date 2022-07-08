class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> rez;
        unordered_map<int,int> h;
        for(auto x:nums)h[x]++;
        vector<pair<int,int>> pom;
        for(auto& x:h)pom.push_back(make_pair(x.second,x.first));
        sort(pom.begin(),pom.end());
        reverse(pom.begin(),pom.end());
        int i=0;
        for(auto x:pom){
           
            if(i==k)break;
            rez.push_back(x.second);
            i++;
        }
        return rez;
    }
};