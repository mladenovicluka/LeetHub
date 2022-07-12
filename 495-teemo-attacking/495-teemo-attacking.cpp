class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n=timeSeries.size();
        int cnt=0;
        for(int i=1;i<n;i++)
            cnt+=min(duration,timeSeries[i]-timeSeries[i-1]);
        return cnt+duration;
    }
};