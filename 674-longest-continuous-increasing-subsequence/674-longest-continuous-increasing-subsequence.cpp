class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int i=0;
        int curr=1,maks=0;
        while(i<nums.size()-1)
        {
            if(nums[i]<nums[i+1])curr++;
            else
            {
                
          
                maks=max(maks,curr);      
                curr=1;
                
                  }
            i++;
        }

        return max(maks,curr);
    }
};