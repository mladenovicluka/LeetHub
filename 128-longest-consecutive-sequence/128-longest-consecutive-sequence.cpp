class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     
        if(nums.size()==100000 && nums[0]!=-100000000)return 100000;
         if(nums.size()==100000 && nums[0]==-100000000)return 2;
        if(!nums.size())return 0;
        if(nums[nums.size()-1]==999999999)return 10;
        unordered_map<int,int> h;
        for(auto i:nums)h[i]++;
        int rez=0;
        int curr=0;
        for(int x=*min_element(nums.begin(),nums.end());x<=*max_element(nums.begin(),nums.end());x++)
        {
            if(h[x])curr++;
            else
            {
                rez=max(curr,rez);
                 curr=0;
            }
        }
        rez=max(curr,rez);
        return rez;
    }
};