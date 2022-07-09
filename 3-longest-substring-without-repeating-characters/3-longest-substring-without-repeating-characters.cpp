class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> h;
        int i=0;
        int j=0;
        int duzina=0;
        while(j<s.length())
        {
          
            if(h[s[j]]==0)
            {
                h[s[j]]++;
          
                j++;
                
            }
            else
            {  
                duzina=max(j-i,duzina);
                i++;
                j=i;
            h.clear();
            }
            
            
            
        }
         duzina=max(j-i,duzina);
        return duzina;
        
    }
};