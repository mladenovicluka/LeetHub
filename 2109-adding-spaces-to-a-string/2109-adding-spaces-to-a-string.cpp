class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        sort(spaces.begin(),spaces.end());
        string rez="";
        int k=0;
        for(int i=0;i<s.size();i++)
        {
           if(k<spaces.size())
            if(i==spaces[k])
            {
                rez+=" ";
                k++;
            }
            rez+=s[i];
            
        }
        return rez;
        
    }
};