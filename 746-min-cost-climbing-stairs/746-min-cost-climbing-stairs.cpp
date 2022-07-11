class Solution {
public:
int minCostClimbingStairs(vector<int>& cost) {
    vector<int> dp;
    int n = cost.size();
    for(int i=0;i<n;i++)dp.push_back(0);
        dp[0]=cost[0];
        dp[1]=cost[1];
    for(int i=2;i<n;i++){
        dp[i]= cost[i]+min(dp[i-1],dp[i-2]); 
    }
    return min(dp[n-1],dp[n-2]);
}
};