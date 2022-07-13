class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> rez;
        unordered_map<string,int> h;
        int i=0;
        int j=10;
        if(j>=s.length())return {};
        while(j<=s.length())
        {
            string pom="";
            for(int k=i;k<j;k++)
            {
                pom+=s[k];
            }
            
            h[pom]++;
            
            i++;
            j++;
        }
        for(auto x:h)if(x.second>1)rez.push_back(x.first);
        return rez;
        
        
    }
};