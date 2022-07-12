class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> rez;
        
        
        for(int i=0;i<intervals.size();i++)
        {
         
            vector<int> pom;
            if(rez.size())
            {
                
                
         
            if(rez[rez.size()-1][1]>=intervals[i][0])
            {
            rez[rez.size()-1][0]=min(rez[rez.size()-1][0],intervals[i][0]);
            rez[rez.size()-1][1] =max(rez[rez.size()-1][1],intervals[i][1]);

            }
            else 
            {
               rez.push_back({intervals[i][0],intervals[i][1]});
                
            }
               }
            else
                rez.push_back({intervals[i][0],intervals[i][1]});
            
        }
        return rez;


        
        
        
        
        
    }
};