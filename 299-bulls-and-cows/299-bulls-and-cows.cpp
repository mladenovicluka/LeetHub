class Solution {
public:
    string getHint(string s, string g) {
        unordered_map<int,int> h;
        int a[11]={0};
        int b[11]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'0']++;
            b[g[i]-'0']++;
        }
        int cows=0;
        for(int i=0;i<10;i++)
        {
            cows+=min(a[i],b[i]);
            
        }
        int bulls=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==g[i])
            {
                cows--;
                bulls++;
            }
        }
        
        
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};