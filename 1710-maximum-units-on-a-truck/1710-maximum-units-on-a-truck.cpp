class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> v;
        int i=0;
        for (auto x:boxTypes)
        {
            
            v.push_back(make_pair((x[1]),i));
            i++;
        }
        sort(v.rbegin(), v.rend());
        i=0;
        int sum=0;
        for(auto x:v)
        {
           
           int cnt=0;
        if(sum==truckSize)break;
                while(sum<truckSize&&cnt<boxTypes[x.second][0])
                {
                    sum++;
                    cnt++;
                    i+=boxTypes[x.second][1];
                }
             
            }
        
        return i;
    }
};