class Solution {
public:
    int candy(vector<int>& nums) {
        int n=nums.size();
       vector<int> temp;
        for(int i=0;i<n;i++)temp.push_back(1);
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            temp[i]=temp[i-1]+1;
        }
        if(n>1&&nums[0]>nums[1])temp[0]=2;
        for(int i=n-2;i>-1;i--)

        {
            if(nums[i]>nums[i+1] && temp[i+1]>=temp[i])
                temp[i]=temp[i+1]+1;
            
        }
        int suma=0;
        for(int i=0;i<n;i++)suma+=temp[i];
        return suma;
        
        
        
    }
};