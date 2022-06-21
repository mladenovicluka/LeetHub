class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int slow=0,fast=0;
        while (1)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast)break;
            
        }
        
        slow=0;
        while(1)
        {
            
              slow=nums[slow];
            fast=nums[fast];
                if(slow==fast)break;
            
        }
    return slow;
    }
};