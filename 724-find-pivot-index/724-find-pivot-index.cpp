class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int s=0;
        for(auto x:nums)
        {
            s+=x;
        }
       
   
        int leftSum=0;
        int rightSum=s;
        for(int i=0;i<nums.size();i++)
        {
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
            
            
        }

       return -1;
    }
};