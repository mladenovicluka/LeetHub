class Solution {
public:
    bool isSubsequence(string s, string t) {
       std:string pom;
        int k=0;
        for(int i=0;i<t.size();i++)
        {
            if(s[k]==t[i])
            {
                pom+=t[i];
                k++;
            }
        }
        return pom==s;
    }
};