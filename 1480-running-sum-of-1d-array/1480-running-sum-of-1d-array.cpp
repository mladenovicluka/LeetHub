class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int suma=0;
        for(auto x:nums)
        {
            suma+=x;
            v.push_back(suma);
        }
        return v;
    }
};