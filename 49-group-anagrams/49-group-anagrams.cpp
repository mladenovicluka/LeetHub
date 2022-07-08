class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<int>> mp;       
        vector<string> copy = strs;
        
        for(int i = 0; i < copy.size(); i++) {
            sort(copy[i].begin(), copy[i].end());
            mp[copy[i]].push_back(i);
        }
        
        vector<vector<string>> ans;
        
        for(auto i: mp) {
            vector<string> temp;
            for(auto j: i.second) {
                temp.push_back(strs[j]);
            }
            ans.push_back(temp);
        }       
        return ans;
    }
};